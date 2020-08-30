class CfgPatches
{
	class tS_Offroad_MCN_Aliabad
	{
		units[] = {};
		weapons[] = {};
		version = "2";
		author = "RamZesIV & Tactical Shift";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"MCN_Aliabad"
		};
	};
};

class CfgSurfaces
{
	class Default;
	
	class AliDirtSurface : Default
	{
		files = "ali_hlina_*";
		rough = 0.100000;
		dust = 0.900000;
		soundEnviron = "dirt";
		character = "AliDesertClutter";
		soundHit = "soft_ground";
		surfaceFriction=1.7;
		maxSpeedCoef=0.8;
	};
	class AliSandSurface : Default
	{
		files = "ali_polopoust_*";
		rough = 0.150000;
		dust = 0.500000;
		soundEnviron = "drygrass";
		character = "AliGlesClutter";
		soundHit = "soft_ground";
		maxSpeedCoef = 0.800000;
		surfaceFriction = 0.75;
	};
	class AliDesertSurface : Default
	{
		files = "ali_desert_*";
		rough = 0.100000;
		dust = 0.800000;
		soundEnviron = "dirt";
		character = "AliSandyClutter";
		soundHit = "soft_ground";
		maxSpeedCoef = 0.800000;
		surfaceFriction = 1;
	};
	class AliForestSurface : Default
	{
		files = "ali_forest_*";
		rough = 0.200000;
		dust = 0.200000;
		soundEnviron = "dirt";
		character = "AliForestClutter";
		soundHit = "soft_ground";
		surfaceFriction=1.7;
		maxSpeedCoef=0.55000001;
		
	};
	class AliRockySurface : Default
	{
		files = "ali_valouny_*";
		rough = 0.250000;
		dust = 0.700000;
		soundEnviron = "dirt";
		character = "AliRockyClutter";
		soundHit = "soft_ground";
		surfaceFriction=1.9;
		maxSpeedCoef=0.80000001;
	};
	class AliCliffSurface : Default
	{
		files = "ali_skala_*";
		rough = 0.350000;
		dust = 0.200000;
		soundEnviron = "rock";
		character = "empty";
		soundHit = "hard_ground";
		surfaceFriction=1.9;
		maxSpeedCoef=0.80000001;
	};
	class AliRiverbedSurface : Default
	{
		files = "ali_sterk_na_dno_*";
		rough = 0.200000;
		dust = 0.600000;
		soundEnviron = "dirt";
		character = "AliRiverClutter";
		soundHit = "soft_ground";
		maxSpeedCoef = 0.700000;
		surfaceFriction = 1;
	};
};
