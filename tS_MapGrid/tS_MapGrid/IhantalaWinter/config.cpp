
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\tem\tem_ihantalaw\config.bin")

class CfgPatches
{
	class tS_MapGrid_IhantalaWinter
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"tem_ihantalaw"
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

	class tem_ihantalaw: CAWorld
	{
		TS_GRID_SETTINGS
	};
};

#endif