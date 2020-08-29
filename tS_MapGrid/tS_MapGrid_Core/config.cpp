class CfgPatches
{
	class tS_MapGrid_Core
	{
		units[] = {};
		weapons[] = {};
		version = "2";
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

#define		TS_GRID_SETTINGS	class Grid: Grid {class Zoom1	{zoomMax = 1e-006;format = "XY";formatX = "00000";formatY = "00000";stepX = 1;stepY = -1;};class Zoom2	{zoomMax = 0.5;format = "XY";formatX = "00";formatY = "00";stepX = 1000;stepY = -1000;};class Zoom3 {zoomMax = 1e+030;format = "XY";formatX = "0";formatY = "0";stepX = 10000;stepY = -10000;};};

class CfgWorlds
{
	class DefaultLighting;
	class DefaultWorld
	{
		class Weather;
	};
	class CAWorld: DefaultWorld
	{
		class Grid;
		class Lighting;
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class Weather: Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
			};
		};
		class WaterExPars;
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