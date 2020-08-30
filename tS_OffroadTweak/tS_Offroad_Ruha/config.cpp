class CfgPatches
{
	class tS_Offroad_Ruha
	{
		units[] = {};
		weapons[] = {};
		version = "2";
		author = "RamZesIV & Tactical Shift";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"Ruha"
		};
	};
};

class CfgSurfaces
{
	class Default;
	
	class ruha_sammal_Surface: Default
	{
		files="ruha_sammal_*";
		rough=0.30000001;
		dust=0.11;
		maxSpeedCoef=0.35000002;
		soundEnviron="dirt";
		character="ruha_sammal_Character";
		soundHit="soft_ground";
		grassCover=0.55000001;
		maxClutterColoringCoef="1.5f";
		surfaceFriction=1.7;
		lucidity=6;
		impact="hitGroundSoft";
	};
	class ruha_hakkuu_Surface: Default
	{
		files="ruha_hakkuu_*";
		rough=0.30000001;
		dust=0.11;
		maxSpeedCoef=0.65000002;
		soundEnviron="dirt";
		character="ruha_hakkuu_Character";
		soundHit="soft_ground";
		grassCover=0.55000001;
		maxClutterColoringCoef="1.5f";
		surfaceFriction=1.7;
		lucidity=6;
		impact="hitGroundSoft";
	};
	class ruha_hiekka_vaalea_Surface: Default
	{
		files="ruha_hietikko_vaalea_*";
		rough=0.30000001;
		grassCover=0.34999999;
		dust=0.5;
		soundEnviron="dirt";
		character="ruha_hietikko_vaalea_Character";
		soundHit="hard_ground";
		maxClutterColoringCoef="1.5f";
		maxSpeedCoef=0.75000002;
		surfaceFriction=1.75;
		lucidity=4;
		impact="hitGroundSoft";
	};
	class ruha_lentokentta_Surface: Default
	{
		files="ruha_lentokentta_*";
		rough=0.001;
		grassCover=0.1;
		dust=0.30000001;
		soundEnviron="dirt";
		character="ruha_lentokentta_Character";
		soundHit="hard_ground";
		maxClutterColoringCoef="1.5f";
		maxSpeedCoef=0.9;
		surfaceFriction=2.4;
		lucidity=1;
		impact="hitGroundSoft";
	};
	class ruha_pelto_Surface: Default
	{
		files="ruha_pelto_*";
		rough=0.80000002;
		dust=0.30000001;
		maxSpeedCoef=0.35;
		soundEnviron="grasstall_exp";
		character="ruha_pelto_Character";
		soundHit="soft_ground";
		grassCover=0.85000002;
		maxClutterColoringCoef="1.5f";
		surfaceFriction=1.5;
		impact="hitGroundSoft";
		lucidity=4;
	};
	class ruha_ruoho_Surface: Default
	{
		files="ruha_ruoho_*";
		rough=0.079999998;
		dust=0.2;
		maxSpeedCoef=0.55;
		soundEnviron="grass_exp";
		character="ruha_ruoho_Character";
		soundHit="soft_ground";
		grassCover=0.2;
		maxClutterColoringCoef="1.5f";
		surfaceFriction=1.8;
		impact="hitGroundSoft";
		lucidity=4;
	};
	class ruha_keltainen_pelto_Surface: Default
	{
		files="ruha_keltainen_pelto_*";
		rough=0.80000001;
		dust=0.30000001;
		maxSpeedCoef=0.35000002;
		soundEnviron="dirt";
		character="empty";
		soundHit="soft_ground";
		grassCover=0.2;
		maxClutterColoringCoef="1.5f";
		surfaceFriction=1.6;
		impact="hitGroundSoft";
		lucidity=8;
	};
	class ruha_suo_Surface: Default
	{
		files="ruha_suo_*";
		character="ruha_suo_Character";
		soundEnviron="dirt";
		soundHit="soft_ground";
		rough=0.30000001;
		maxSpeedCoef=0.20000002;
		dust=0.20999999;
		lucidity=4;
		grassCover=0.40000001;
		impact="hitGroundSoft";
		surfaceFriction=1.5;
		maxClutterColoringCoef=1.5;
	};
	class GdtDirt;
	class ruha_road_surface: GdtDirt
	{
		files="ruha_road_*";
		character="empty";
		soundEnviron="dirt";
		soundHit="soft_ground";
		rough=0.2;
		maxSpeedCoef=0.80;
		dust=0.30000001;
		lucidity=1.5;
		grassCover=0;
		surfaceFriction=1.8;
		impact="hitGroundSoft";
	};
	class ruha_path_surface: GdtDirt
	{
		files="ruha_path_*";
		character="empty";
		soundEnviron="dirt";
		soundHit="soft_ground";
		rough=0.30000001;
		maxSpeedCoef=0.76000001;
		dust=0.40000001;
		lucidity=1.5;
		grassCover=0;
		impact="hitGroundSoft";
		surfaceFriction=1.8;
	};
	class GdtConcrete;
	class ruha_roadtarmac_highway_surface: GdtConcrete
	{
		files="ruha_roadtarmac_highway*";
		character="empty";
		soundEnviron="concrete";
		soundHit="concrete";
		rough=0.029999999;
		maxSpeedCoef=1;
		dust=0.050000001;
		lucidity=0.30000001;
		grassCover=0;
		impact="hitConcrete";
		surfaceFriction=2.5;
	};
	class ruha_roadtarmac_main_surface: GdtConcrete
	{
		files="ruha_roadtarmac_main*";
		character="empty";
		soundEnviron="concrete";
		soundHit="concrete";
		rough=0.029999999;
		maxSpeedCoef=85;
		dust=0.070000001;
		lucidity=0.30000001;
		grassCover=0;
		impact="hitConcrete";
		surfaceFriction=2.3;
	};
};
