
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\ibr\lingor3\config.bin")

class CfgPatches
{
	class tS_MapGrid_LingorDingor
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Map_dingor"
			,"A3_Map_lingor3"
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

	class dingor: Stratis
	{
		TS_GRID_SETTINGS
	};
	class lingor3: Stratis
	{
		TS_GRID_SETTINGS
	};
};

#endif