class CfgPatches
{
	class tS_ArmorTweak_RHSUSAF
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_main_loadorder"};
		author = "Tactical Shift";
		version = "1";
	};
};

#include "macro.hpp"

class CfgWeapons
{
	class ItemCore;
	
	#include "CfgHelmets.hpp"
	#include "CfgVests.hpp"
};
