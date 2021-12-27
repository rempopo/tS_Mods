
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\CUP\Terrains\cup_terrains_maps_chernarus_winter_c\config.bin")

class CfgPatches
{
	class tS_MapGrid_CUPTerrains
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"CUP_Afghan_Config"
			, "Mountains_ACR"
			, "CUP_Bohemia_Config"
			, "Woodland_ACR"
			, "CUP_Bootcamp_acr_Config"
			, "Bootcamp_ACR"
			, "CUP_Chernarus_Config"
			, "Chernarus"
			, "CUP_Chernarus_Summer_Config"
			, "Chernarus_Summer"
			, "CUP_Desert_Config"
			, "Desert"
			, "CUP_Desert_e_Config"
			, "Desert_E"
			, "CUP_Desert2_Config"
			, "Porto"
			, "CUP_Sara_Config"
			, "Sara"
			, "CUP_Sara_dbe1_Config"
			, "Sara_dbe1"
			, "CUP_Saralite_Config"
			, "SaraLite"
			, "CUP_Shapur_baf_Config"
			, "Shapur_BAF"
			, "CUP_Takistan_Config"
			, "Takistan"
			, "CUP_Utes_Config"
			, "Utes"
			, "CUP_Zargabad_Config"
			, "zargabad"
			, "CUP_Chernarus_Winter_Config"
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

	//	CUP Terrains
	class Mountains_ACR: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Woodland_ACR: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Bootcamp_ACR: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Chernarus: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Chernarus_Summer: Chernarus
	{
		TS_GRID_SETTINGS
	};
	class Chernarus_Winter: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Intro: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Desert_E: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class porto: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class ProvingGrounds_PMC: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Sara: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Sara_dbe1: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class SaraLite: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Shapur_BAF: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Takistan: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class utes: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Zargabad: CAWorld
	{
		TS_GRID_SETTINGS
	};
};

#endif