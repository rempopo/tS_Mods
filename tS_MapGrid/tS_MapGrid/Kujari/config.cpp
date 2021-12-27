
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\tem\tem_kujari\config.bin")

class CfgPatches
{
	class tS_MapGrid_Kujari
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"tem_kujari"
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

	class tem_kujari: CAWorld
	{
		TS_GRID_SETTINGS
	};
};

#endif