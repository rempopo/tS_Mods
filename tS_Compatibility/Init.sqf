
// Backward compatibility to old ACE Medical healing
if (isNil "ace_medical_fnc_treatmentAdvanced_fullHealLocal") then {
	ace_medical_fnc_treatmentAdvanced_fullHealLocal = {
		params ["_patient"];
		[_patient] call ace_medical_treatment_fnc_fullHealLocal;
	};
};

if (hasInterface) then {
	// Toggles CBA Optics PIP and enable it after 2 seconds
	if (CBA_optics_usePipOptics) then {
		[{
			[call CBA_fnc_currentUnit, true] call CBA_optics_fnc_restartCamera;
		}, [], 2] call CBA_fnc_waitAndExecute;
	};
	
	// Backward compatibility for tSF to prevent admin from being freezed on mission start
	[] call {
		private _isAdmin = isServer || serverCommandAvailable "#logout";	
		if (isMultiplayer && !_isAdmin) exitWith {};
		if (isNil "tSF_MissionDefaults_DisableInputOnStart") exitWith {};
		
		private _fnc_enable = {
			if (!userInputDisabled) exitWith { _this call CBA_fnc_removePerFrameHandler; };
			player enableSimulation true;
			disableUserInput false;
			hintSilent "";
		};
		
		[
			{ 
				params ["_fnc_enableAdminInput", "_handle"];
				[_handle] call _fnc_enableAdminInput;
			}, 
			1, _fnc_enable
		] call CBA_fnc_addPerFrameHandler;
	};
};