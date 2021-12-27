
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\DYA\DYA.wrp")

class CfgPatches
{
	class tS_MapGrid_Dya
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"Dya"
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

	class DYA: CAWorld
	{
		TS_GRID_SETTINGS
	};
};

#endif
