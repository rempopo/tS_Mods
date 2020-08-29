
class CfgPatches
{
	class tS_BiggerCompass
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_UI_F"};
		author = "Tactical Shift";
	};
};

class RscObject;
class RscCompass : RscObject {
	scale = "2 * 0.47 * 0.875 * (SafeZoneW Min SafeZoneH)";
};