#include "macro.hpp"

// --- Setting
[
	"tS_ACE_Medical_ShowTourniquetIcon"
	, "CHECKBOX"
	, "Show tourniquer icon"
	, "tS ACE Medical"
	, true
] call CBA_fnc_addSetting;

// --- Functions
// -- Heals broken legs once all wounds bandaged
tS_ACE_Medical_fnc_handleLegTreatment = {
	_this params ["_caller", "_target", "_selectionName", "_className"];
	
	if (["leg_r","leg_l"] findIf { _x == _selectionName } < 0) exitWith {};
	
	// --- Get the list of the wounds the target is currently suffering from.
	private _currentWounds = _target getVariable [ "ace_medical_openWounds", []];
	private _leftLegWounds = 0;
	private _rightLegWounds = 0;
	
	{
		_x params ["", "", "_bodyPart", "_numOpenWounds", "_bloodLoss"];
		
		switch (_bodyPart) do {
			// Left Leg
			case 4: {
				_leftLegWounds = _leftLegWounds + (_numOpenWounds * _bloodLoss);
			};
			// Right Leg
			case 5: {
				_rightLegWounds = _rightLegWounds + (_numOpenWounds * _bloodLoss);
			};
		};
	} forEach _currentWounds;
	private _bodyStatus = _target getVariable ["ace_medical_bodyPartStatus", [0,0,0,0,0,0]];

	// --- Any body part that has no wounds is healed to full health
	if (_leftLegWounds == 0) then {
		_bodyStatus set [4, 0];
	};
	if (_rightLegWounds == 0) then {
		_bodyStatus set [5, 0];
	};

	_target setVariable ["ace_medical_bodyPartStatus", _bodyStatus, true];
	[_target] call ACE_medical_fnc_handleDamage_advancedSetDamage
};


// --- EH inits
// Handle Treatment EH
[
	"ace_treatmentSucceded", 
	{ _this call tS_ACE_Medical_fnc_handleLegTreatment; }
] call CBA_fnc_addEventHandler;



// ---- Functions
dzn_fnc_ACE_Medical_handleTourniquetIcon = {
	params [["_reset", false]];
	if (_reset) exitWith {
		{
			ICON_TOURNIQUET_CONTROLNAME(_x) ctrlSetText "";
		} forEach ICON_TOURNIQUET_BODY_PARTS;
	};
	
	private _inVehicle = vehicle player != player;
	private _stance = [toLower(stance player), "stand"] select _inVehicle;
	
	{
		private _text = if ([player, _x] call ace_medical_treatment_fnc_hasTourniquetAppliedTo) then { 
			ICON_TOURNIQUET_PATH(_stance,_x)
		} else {
			""
		};
		
		// --- Affecting UI icon with proper image and color
		private _ctrlName = uiNamespace getVariable [
			format ["%1%2", ["","Crew"] select _inVehicle, ICON_TOURNIQUET_CONTROLNAME(_x)]
			, controlNull
		];
		
		_ctrlName ctrlSetText _text;
	} forEach ICON_TOURNIQUET_BODY_PARTS;
};

// Handle Blood loss post-process effects
[{
	if (tS_ACE_Medical_ShowTourniquetIcon) then {
		[] call dzn_fnc_ACE_Medical_handleTourniquetIcon;
	} else {
		[true] call dzn_fnc_ACE_Medical_handleTourniquetIcon;
	};
}] call CBA_fnc_addPerFrameHandler;




/*
	For vehicles:
	- Move indicator classes to core
	- Inherit indicators to StnaceInfo
	- If in vehicle (or on load RscUnitInfo - CA_Speed):
		- Manually create indicators in RscUnitInfo
		- Handle indicator state
	- If out of vehicle - remove control in 
	see https://github.com/synixebrett/A3AdditionalMeasurements/blob/master/addons/common/functions/fnc_onAltLoad.sqf

*/