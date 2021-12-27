
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\ruha\ruha\config.bin")

class CfgPatches
{
	class tS_MapGrid_Ruha
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"Ruha"
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

	class Ruha: CAWorld
	{
		TS_GRID_SETTINGS
	};
};

#endif