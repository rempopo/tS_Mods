class CfgPatches
{
	class tS_Compatibility
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","cba_common"};
		author[] = {"Tactical Shift"};
		version = "1";
	};
};

class Extended_PostInit_EventHandlers
{
	class tS_Compatibility
	{
		init = call compile preprocessFileLineNumbers "\tS_Compatibility\Init.sqf";
	};
};