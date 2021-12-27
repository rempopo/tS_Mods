
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\WL\WL_Rosche\config.bin")

class CfgPatches
{
	class tS_MapGrid_Rosche
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"WL_Rosche"
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

	class WL_Rosche: CAWorld
	{
		TS_GRID_SETTINGS
	};
};

#endif