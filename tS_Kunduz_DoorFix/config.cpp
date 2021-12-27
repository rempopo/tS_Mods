
#if __has_include("\pra3\pra3_kz\config.bin")

class CfgPatches
{
	class tS_Kunduz_DoorFix
	{
		units[] = {};
		weapons[] = {};
		version = "1";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"PRA3_Kz",
			"PRA3_Structures_Afghan_Houses",
			"PRA3_Structures_Afghan_Houses_C",
			"PRA3_Structures_Afghan_Houses_Old",
			"PRA3_Structures_Walls_Walls_L"
		};
	};
};

#include "macro.hpp"

class CfgVehicles
{
	class House_F;
	class Wall_F;

	#include "afghan_houses.hpp"
	#include "afghan_houses_c.hpp"
	#include "afghan_houses_old.hpp"
	#include "walls.walls_l.hpp"
};

#endif