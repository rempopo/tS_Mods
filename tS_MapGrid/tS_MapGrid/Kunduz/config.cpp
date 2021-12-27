
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\pra3\pra3_kz\config.bin")

class CfgPatches
{
	class tS_MapGrid_Kunduz
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"PRA3_Kz"
		};
	};
};

class CfgWorlds
{
	class CAWorld;
	class Stratis: CAWorld
	{
		class Grid;
	};

	class Kunduz: Stratis
	{
		TS_GRID_SETTINGS
	};
};

#endif