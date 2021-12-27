#include "map_grid.hpp"

class CfgPatches
{
	class tS_MapGrid_Core
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Map_Altis"
			,"A3_Map_Stratis"
			,"A3_Map_Malden"
			,"A3_Map_Tanoabuka"
			,"A3_Map_Tanoabuka_Data"
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
	
	// Arma 3
	class Altis: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Stratis: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class VR: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Malden: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Tanoa: CAWorld
	{
		TS_GRID_SETTINGS
	};
};