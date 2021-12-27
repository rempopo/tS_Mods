
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\mcn\mcn_Aliabad\config.bin")

class CfgPatches
{
	class tS_MapGrid_Aliabad
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"MCN_Aliabad"
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

	class MCN_Aliabad: CAWorld
	{
		TS_GRID_SETTINGS
	};
};

#endif