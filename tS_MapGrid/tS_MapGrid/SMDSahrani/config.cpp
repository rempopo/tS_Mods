
#include "\tS_MapGrid\map_grid.hpp"

#if __has_include("\smd\smd_sahrani_a3\config.bin")

class CfgPatches
{
	class tS_MapGrid_SMDSahrani
	{
		units[] = {};
		weapons[] = {};
		version = "3";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"smd_sahrani_a3"
		};
	};
};

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

	// Sahrani + fixed sky
	class smd_sahrani_a3: CAWorld
	{
		TS_GRID_SETTINGS
		delete Lighting;
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			delete deepNight;
			delete fullNight;
			delete sunMoon;
			delete earlySun;
			delete sunrise;
			delete earlyMorning;
			delete midMorning;
			delete morning;
			delete noon;
		};
		class DayLightingRainy: DayLightingRainy
		{
			delete deepNight;
			delete fullNight;
			delete sunMoon;
			delete earlySun;
			delete earlyMorning;
			delete morning;
			delete lateMorning;
			delete noon;
		};
		delete Weather;
	};
};

#endif