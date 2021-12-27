
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\CUP\Terrains\cup_terrains_maps_noe_c\config.bin")

class CfgPatches
{
	class tS_MapGrid_CUPTerrains_CWA
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"CUP_Terrains_Abel"
			,"CUP_Terrains_Cain"
			,"CUP_Terrains_Eden"
			,"CUP_Terrains_Noe"
			,"CUP_Intro_Config"
		};
	};
};

class CfgWorlds
{
	class DefaultWorld;
	class CAWorld: DefaultWorld
	{
		class Grid;
	};

	class Abel: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Eden: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Cain: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Noe: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Desert_Island: CAWorld
	{
		TS_GRID_SETTINGS
	};
};

#endif