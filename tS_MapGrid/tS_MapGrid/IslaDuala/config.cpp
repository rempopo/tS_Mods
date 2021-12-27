
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\ibr\isladuala3\config.bin")

class CfgPatches
{
	class tS_MapGrid_IslaDuala
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Map_IslaDuala3"
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

	class IslaDuala3: Stratis
	{
		TS_GRID_SETTINGS
	};
};

#endif