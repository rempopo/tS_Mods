
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\ibr\abramia\config.bin")

class CfgPatches
{
	class tS_MapGrid_IslaAbramia
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Map_Abramia"
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
	class abramia: Stratis
	{
		TS_GRID_SETTINGS
	};
};

#endif