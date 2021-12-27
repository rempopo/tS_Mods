
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\cla\clafghan\config.bin")

class CfgPatches
{
	class tS_MapGrid_CUPTerrains
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"clafghan"
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

	class clafghan: CAWorld
	{
		TS_GRID_SETTINGS
	};
};

#endif