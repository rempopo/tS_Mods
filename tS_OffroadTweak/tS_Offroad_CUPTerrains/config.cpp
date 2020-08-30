class CfgPatches
{
	class tS_Offroad_CUPTerrains
	{
		units[] = {};
		weapons[] = {};
		version = "2";
		author = "RamZesIV & Tactical Shift";
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
			, "CUP_Chernarus_Winter"
			, "CUP_Chernarus_Winter_Config"
		};
	};
};

class CfgSurfaces
{
	class Default;
	
	//Chernarus

	class CRGrass1: Default
	{
		files="cr_trava1_*";
		friction = 10;
		rough=0.1;
		dust=0.15000001;
		lucidity=4;
		grassCover=0.050000001;
		soundEnviron="grass";
		character="CRGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.8;
		maxSpeedCoef=0.55;
	};
	class CRGrass2: Default
	{
		files="cr_trava2_*";
		friction = 10;
		rough=0.1;
		maxSpeedCoef=0.55;
		dust=0.15000001;
		lucidity=4;
		grassCover=0.050000001;
		soundEnviron="grass";
		character="CRTallGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.8;
	};
	class CRGrassW1: Default
	{
		files="cr_travad1_*";
		friction = 10;
		rough=0.1;
		maxSpeedCoef=0.55;
		dust=0.15000001;
		lucidity=4;
		grassCover=0.050000001;
		soundEnviron="grass";
		character="CRGrassWClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.8;
	};
	class CRGrassW2: Default
	{
		files="cr_travad2_*";
		friction = 10;
		rough=0.1;
		maxSpeedCoef=0.55;
		dust=0.15000001;
		lucidity=4;
		grassCover=0.050000001;
		soundEnviron="grass";
		character="CRTallGrassWClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.8;
	};
	class CRForest1: Default
	{
		files="cr_les1_*";
		friction = 20;
		rough=0.2;
		dust=0.40000001;
		lucidity=3.5;
		grassCover=0.039999999;
		soundEnviron="drygrass";
		character="CRForestMixedClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.30000001;
	};
	class CRForest2: Default
	{
		files="cr_les2_*";
		friction = 20;
		rough=0.2;
		dust=0.40000001;
		lucidity=3.5;
		grassCover=0.039999999;
		soundEnviron="drygrass";
		character="CRForestFirClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.30000001;
	};
	class CRMudGround: Default
	{
		files="cr_pole_*";
		friction = 40;
		rough=0.15000001;
		dust=0.51999999;
		lucidity=1.5;
		grassCover=0.039999999;
		soundEnviron="dirt";
		character="SparseWeedsClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.6;
	};
	class CRField1: Default
	{
		files="cr_oranice_*";
		friction = 30;
		rough=0.13;
		dust=0.6000001;
		lucidity=1.5;
		grassCover=0.039999999;
		soundEnviron="dirt";
		character="Empty";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.6;
		maxSpeedCoef=0.25;
	};
	class CRField2: Default
	{
		files="cr_strniste_*";
		friction = 30;
		rough=0.13;
		dust=0.4;
		lucidity=1.5;
		grassCover=0.050000001;
		soundEnviron="dirt";
		character="CRStubbleClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.35;
	};
	class CRSterk: Default
	{
		files="cr_sterk_*";
		rough=0.050000001;
		dust=0.25;
		lucidity=0.30000001;
		grassCover=0;
		soundEnviron="gravel";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=2.4;
		maxSpeedCoef=1;
	};
	class CRHeather: Default
	{
		files="cr_vres_*";
		rough=0.14;
		dust=0.2;
		soundEnviron="drygrass";
		character="CRHeatherClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.35;
	};
	class CRRock: Default
	{
		files="cr_skala_*";
		rough=0.2;
		dust=0.07;
		lucidity=1;
		grassCover=0;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=1.9;
		maxSpeedCoef=0.80000001;
	};
	class CRTarmac: Default
	{
		files="cr_asfalt_*";
		rough=0.050000001;
		maxSpeedCoef=1.0;
		dust=0.02;
		lucidity=0.5;
		soundEnviron="gravel";
		character="Empty";
		soundHit="hard_ground";
		surfaceFriction=2.5;
		impact="hitGroundHard";
	};
	class CRConcrete: Default
	{
		files="cr_beton_*";
		rough=0.050000001;
		dust=0.079999998;
		lucidity=0.30000001;
		soundEnviron="concrete";
		character="Empty";
		soundHit="concrete";
		surfaceFriction=2.2;
		maxSpeedCoef=0.9;
		impact="hitConcrete";
	};
	class CRHlina: Default
	{
		files="cr_hlina_*";
		rough=0.15000001;
		dust=0.31999999;
		lucidity=1.5;
		grassCover=0.039999999;
		soundEnviron="dirt";
		character="SparseWeedsClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.8;
		maxSpeedCoef=0.45;
	};
		
	//Takistan / Mountains_ACR (CUP Afghan)

	class TKAsfalt: Default
	{
		files="tk_asfalt_*";
		rough=0.001;
		dust=0.1;
		maxSpeedCoef=1;//0.95
		//surfaceFriction=2.4;
		soundEnviron="concrete";
		character="Empty";
		soundHit="concrete";
		impact="hitConcrete";
	};
	class TKBeton: Default
	{
		files="tk_beton_*";
		rough=0.0099999998;
		dust=0.079999998;
		maxSpeedCoef=1;//0.90
		soundEnviron="concrete";
		character="Empty";
		soundHit="concrete";
		impact="hitConcrete";
		//surfaceFriction=2.2;
	};
	
	class TKHlina: Default
	{
		files="tk_hlina_*";
		rough=0.14;
		dust=0.80000001;
		soundEnviron="dirt";
		character="Empty";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		//surfaceFriction=1.9;
		maxSpeedCoef=1;//0.7
	};
	class TKPlevel: Default
	{
		files="tk_plevel_*";
		rough=0.11;
		dust=0.69999999;
		maxSpeedCoef=1;//0.6
		soundEnviron="drygrass";
		character="TKWeedsClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		//surfaceFriction=2.0;
	};
	class TKPole: Default
	{
		files="tk_pole_*";
		rough=0.12;
		dust=1.0;
		maxSpeedCoef=1;//0.6
		soundEnviron="grass";
		character="TKFieldGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		//surfaceFriction=1.8;
	};
	class TKPolopoust: Default
	{
		files="tk_polopoust_*";
		rough=0.0099999998;
		dust=0.89999998;
		maxSpeedCoef=1;//0.7
		//surfaceFriction=1.9;
		soundEnviron="dirt";
		character="TKDesertClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};
	class TKSkala: Default
	{
		files="tk_skala_*";
		rough=0.30000001;
		dust=0.5;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		//surfaceFriction=2.1;
		maxSpeedCoef=1;//0.8
	};
	class TKSkalniSterk: Default
	{
		files="tk_skalni_sterk_*";
		rough=0.15000001;
		dust=1;
		maxSpeedCoef=1;//0.8
		//surfaceFriction=2.1;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
	};
	class TKSterkNaDno: Default
	{
		files="tk_sterk_na_dno_*";
		rough=0.2;
		dust=0;
		maxSpeedCoef=1;//0.4
		//surfaceFriction=1.8;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
	};
	class TKValouny: Default
	{
		files="tk_valouny_*";
		rough=0.15000001;
		dust=0.40000001;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		//surfaceFriction=2.2;
		maxSpeedCoef=1;//0.8;
	};
	class TKTrava: Default
	{
		files="tk_trava_*";
		rough=0.11;
		dust=0.5;
		maxSpeedCoef=1;//0.7
		//surfaceFriction=1.8;
		soundEnviron="drygrass";
		character="TKGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};
	class TKDlazbaOld: Default
	{
		files="tk_dlazba_old_*";
		rough=0.001;
		dust=0.1;
		soundEnviron="concrete";
		character="Empty";
		soundHit="concrete";
		impact="hitConcrete";
		//surfaceFriction=2.3;
		maxSpeedCoef=1;//0.85
	};
	class TKForest: Default
	{
		files="tk_forest_*";
		rough=0.0099999998;
		dust=0.89999998;
		//surfaceFriction=1.7;
		maxSpeedCoef=1;//0.550000001
		soundEnviron="dirt";
		character="TKForestClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};
	class TKMoutain: Default
	{
		files="tk_mountain_*";
		rough=0.0099999998;
		dust=0.89999998;
		maxSpeedCoef=1;//0.7
		//surfaceFriction=1.9;
		soundEnviron="dirt";
		character="TKMountainsClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};
	class TKDirtRoad: Default
	{
		files="dirt_tak*";
		rough=0.0099999998;
		dust=0.89999998;
		maxSpeedCoef=1;//0.65
		//surfaceFriction=1.9;
		soundEnviron="dirt";
		character="Empty";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};
	

	// Woodland_ACR

	class WLGrass1: Default
	{
		files="wl_trava1_*";
		rough=0.1;
		maxSpeedCoef=0.55;
		dust=0.15000001;
		grassCover=0.050000001;
		surfaceFriction=1.8;
		soundEnviron="grass";
		character="WLGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};
	class WLGrass2: Default
	{
		files="wl_trava2_*";
		rough=0.1;
		maxSpeedCoef=0.55;
		dust=0.15000001;
		grassCover=0.050000001;
		surfaceFriction=1.8;
		soundEnviron="grass";
		character="WLTallGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};
	class WLGrassW1: Default
	{
		files="wl_travad1_*";
		rough=0.1;
		maxSpeedCoef=0.55;
		dust=0.15000001;
		grassCover=0.050000001;
		surfaceFriction=1.8;
		soundEnviron="grass";
		character="WLGrassWClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};
	class WLGrassW2: Default
	{
		files="wl_travad2_*";
		rough=0.1;
		maxSpeedCoef=0.55;
		dust=0.15000001;
		grassCover=0.050000001;
		surfaceFriction=1.8;
		soundEnviron="grass";
		character="WLTallGrassWClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};
	class WLForest1: Default
	{
		files="wl_les1_*";
		rough=0.2;
		dust=0.40000001;
		soundEnviron="drygrass";
		character="WLForestMixedClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.30000001;
	};
	class WLForest2: Default
	{
		files="wl_les2_*";
		rough=0.2;
		dust=0.40000001;
		soundEnviron="drygrass";
		character="WLForestFirClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.30000001;
		surfaceFriction=1.7;
		
	};
	class WLMudGround: Default
	{
		files="wl_pole_*";
		rough=0.15000001;
		maxSpeedCoef=0.3;
		dust=0.51999999;
		surfaceFriction=1.7;
		grassCover=0.039999999;
		soundEnviron="dirt";
		character="SparseWeedsClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};
	class WLField1: Default
	{
		files="wl_oranice_*";
		rough=0.15000001;
		dust=0.25;
		soundEnviron="dirt";
		character="Empty";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.35;
		surfaceFriction=1.7;
		grassCover=0.050000001;
	};
	class WLGrit1: Default
	{
		files="wl_sterk_*";
		rough=0.1;
		dust=0.25;
		soundEnviron="gravel";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		maxSpeedCoef=0.95;
		surfaceFriction=2.4;
	};
	class WLHeather: Default
	{
		files="wl_vres_*";
		rough=0.14;
		dust=0.1;
		soundEnviron="drygrass";
		character="WLHeatherClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.35;
		surfaceFriction=1.8;
	};
	class WLRock: Default
	{
		files="wl_skala_*";
		rough=0.2;
		dust=0.07;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		maxSpeedCoef=0.80000001;
		surfaceFriction=1.9;
	};
	class WLTarmac: Default
	{
		files="wl_asfalt_*";
		rough=0.079999998;
		dust=0.050000001;
		soundEnviron="gravel";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		maxSpeedCoef=1.0;
		surfaceFriction=2.5;
	};
	class WLConcrete: Default
	{
		files="wl_beton_*";
		rough=0.079999998;
		dust=0.050000001;
		soundEnviron="concrete";
		character="Empty";
		soundHit="concrete";
		impact="hitConcrete";
		maxSpeedCoef=0.9;
		surfaceFriction=2.2;
	};

	
	// Bootcamp_ACR	

	class BCGrass1: Default
	{
		files="bc_trava1_*";
		rough=0.11;
		dust=0.1;
		soundEnviron="grass";
		character="BCGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.8;
		maxSpeedCoef=0.55;
	};
	class BCGrass2: Default
	{
		files="bc_trava2_*";
		rough=0.11;
		dust=0.1;
		soundEnviron="grass";
		character="BCTallGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.8;
		maxSpeedCoef=0.45;
	};
	class BCGrass3: Default
	{
		files="bc_trava3_*";
		rough=0.11;
		dust=0.1;
		soundEnviron="grass";
		character="BCSmallGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.8;
		maxSpeedCoef=0.6;
	};
	class BCGrassW1: Default
	{
		files="bc_travad1_*";
		rough=0.11;
		dust=0.1;
		soundEnviron="grass";
		character="BCGrassWClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.8;
		maxSpeedCoef=0.55;
	};
	class BCGrassW2: Default
	{
		files="bc_travad2_*";
		rough=0.11;
		dust=0.1;
		soundEnviron="grass";
		character="BCTallGrassWClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.8;
		maxSpeedCoef=0.55;
	};
	class BCForest1: Default
	{
		files="bc_les1_*";
		rough=0.2;
		dust=0.2;
		soundEnviron="drygrass";
		character="BCForestMixedClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.30000001;
	};
	class BCForest2: Default
	{
		files="bc_les2_*";
		rough=0.2;
		dust=0.15000001;
		soundEnviron="drygrass";
		character="BCForestFirClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.30000001;
	};
	class BCMudGround: Default
	{
		files="bc_pole_*";
		rough=0.090000004;
		dust=0.1;
		soundEnviron="dirt";
		character="SparseWeedsClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.6;
	};
	class BCField1: Default
	{
		files="bc_oranice_*";
		rough=0.15000001;
		dust=0.25;
		soundEnviron="dirt";
		character="Empty";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.35;
	};
	class BCGrit1: Default
	{
		files="bc_sterk_*";
		rough=0.1;
		dust=0.25;
		soundEnviron="gravel";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		maxSpeedCoef=0.90;
		surfaceFriction=2.4;
	};
	class BCHeather: Default
	{
		files="bc_vres_*";
		rough=0.14;
		dust=0.1;
		soundEnviron="drygrass";
		character="BCHeatherClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.35;
	};
	class BCRock: Default
	{
		files="bc_skala_*";
		rough=0.2;
		dust=0.07;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		maxSpeedCoef=0.80000001;
		surfaceFriction=1.9;
	};
	class BCTarmac: Default
	{
		files="bc_asfalt_*";
		rough=0.079999998;
		dust=0.050000001;
		soundEnviron="gravel";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=2.5;
		maxSpeedCoef=1.0;
	};
	class BCConcrete: Default
	{
		files="bc_beton_*";
		rough=0.079999998;
		dust=0.050000001;
		soundEnviron="concrete";
		character="Empty";
		soundHit="concrete";
		impact="hitConcrete";
		surfaceFriction=2.2;
		maxSpeedCoef=0.85;
	};


	//"CUP_Desert", "Sara" (Сахрани), "sara_dbe1" (Сахрани объединенный), "SaraLite" (Сахрани урезанный)	

	class Roadway: Default
	{
		files="silnice*";
		rough=0.0049999999;
		dust=0.0099999998;
		soundEnviron="gravel";
		character="Empty";
		impact="hitGroundSoft";
		surfaceFriction=2.4;
		maxSpeedCoef=0.75;
	};
	class Asfalt: Roadway
	{
		files="asfalt*";
		rough=0.0099999998;
		dust=0.050000001;
		soundEnviron="gravel";
		character="Empty";
		surfaceFriction=2.4;
		maxSpeedCoef=0.9;
	};
	class road;
	class CubeRoad: road
	{
		files="sil_kos*";
		rough=0.039999999;
		dust=0.15000001;
		surfaceFriction=2.2;
		maxSpeedCoef=0.8;
	};
	class Sil_new: road
	{
		files="sil_new*";
		rough=0.0049999999;
		dust=0.0099999998;
		surfaceFriction=2.2;
		maxSpeedCoef=0.8;
	};
	class Asfalt_New: road
	{
		files="asf_new*";
		rough=0.050000001;
		dust=0.02;
		lucidity=0.5;
		surfaceFriction=2.4;
		maxSpeedCoef=0.9;
	};
	class runway_beton: Asfalt_New
	{
		files="runway_beton*";
		surfaceFriction=2.4;
		maxSpeedCoef=0.9;
	};
	class Cesta_new: road
	{
		files="ces_hned*";
		rough=0.039999999;
		dust=0.14;
		soundEnviron="gravel";
		surfaceFriction=2.1;
		maxSpeedCoef=0.8;
	};
	class grav_dirt: Cesta_new
	{
		files="grav_dirt*";
		soundEnviron="gravel";
		surfaceFriction=2.0;
		maxSpeedCoef=0.75;
	};
	class Pesina: Roadway
	{
		files="pesina*";
		rough=0.1;
		dust=0.15000001;
		soundEnviron="dirt";
	};
	class Grass: Default
	{
		files="trava_*";
		rough=0.050000001;
		dust=0.40000001;
		lucidity=0.80000001;
		soundEnviron="grass";
		character="GrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.2;
		maxSpeedCoef=0.55;
	};
	class GrassSouth: Default
	{
		files="travajih*";
		rough=0.050000001;
		lucidity=0.80000001;
		surfaceFriction=1.2;
		soundEnviron="drygrass";
		character="GrassSouthClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.55;
	};
	class ForestLeaves: Default
	{
		files="leslist*";
		rough=0.050000001;
		dust=0.0099999998;
		lucidity=0.69999999;
		soundEnviron="drygrass";
		character="ForestLeavesClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.2;
		maxSpeedCoef=0.30000001;
	};
	class ForestNeedles: Default
	{
		files="lesjeh*";
		rough=0.050000001;
		dust=0.0099999998;
		lucidity=0.69999999;
		soundEnviron="drygrass";
		character="ForestNeedlesClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.2;
		maxSpeedCoef=0.30000001;
	};
	class RockSouth: Default
	{
		files="skalajih*";
		rough=0.1;
		dust=0.2;
		soundEnviron="rock";
		character="RockSouthClutter";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=1.9;
		maxSpeedCoef=0.80000001;
	};
	class RockNorth: Default
	{
		files="skalas*";
		rough=0.1;
		dust=0.2;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=1.9;
		maxSpeedCoef=0.80000001;
	};
	class AiA_Mud: Default
	{
		files="blato*";
		rough=0.1;
		dust=0.30000001;
		soundEnviron="dirt";
		character="Empty";
		soundHit="soft_ground";
		impact="hitGroundHard";
		surfaceFriction=1.7;
		maxSpeedCoef=0.6;
		
	};
	class CityGround: Default
	{
		files="mesto*";
		rough=0.050000001;
		dust=0.15000001;
		lucidity=0.30000001;
		soundEnviron="dirt";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=2.5;
		maxSpeedCoef=0.95;
	};
	class DryGround: Default
	{
		files="mesto2*";
		lucidity=0.80000001;
		soundEnviron="gravel";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=1.8;
		maxSpeedCoef=0.65;
	};
	class Field1: Default
	{
		files="pole1*";
		rough=0.1;
		dust=0.25;
		soundEnviron="dirt";
		character="SparseWeedsClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.35;
	};
	class sand;
	class SandGeneral: sand
	{
		files="pisek*";
		rough=0.1;
		dust=0.5;
		soundEnviron="sand";
		character="SandGeneralClutter";
		surfaceFriction=1.7;
		maxSpeedCoef=0.75;
	};
	class SandDesert: Default
	{
		files="pisekpoust*";
		rough=0.1;
		dust=0.80000001;
		lucidity=0.80000001;
		maxSpeedCoef=0.75000002;
		surfaceFriction=2.0;
		soundEnviron="sand";
		character="Empty";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};
	class SandBeach: Default
	{
		files="pisekplaz*";
		rough=0.1;
		dust=0.40000001;
		lucidity=0.80000001;
		soundEnviron="sand";
		character="Empty";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.7000002;
		surfaceFriction=2.0;
	};


	//CUP_Desert_e
	class DEPolopoust: Default
	{
		files="de_polopoust_*";
		rough=0.0099999998;
		dust=0.89999998;
		soundEnviron="dirt";
		character="DEDenseAridClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.7;
		surfaceFriction=1.9;
	};
	class DESkalniSterk: Default
	{
		files="de_skalni_sterk_*";
		rough=0.15000001;
		dust=1;
		soundEnviron="rock";
		character="DESparseAridClutter";
		soundHit="hard_ground";
		impact="hitGroundHard";
		maxSpeedCoef=0.8;
		surfaceFriction=2.1;
	};
	class DETrava: Default
	{
		files="de_trava_*";
		rough=0.11;
		dust=0.5;
		soundEnviron="drygrass";
		character="DEGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.7;
		surfaceFriction=1.8;
	};	
	
	
	//CUP_Desert2, Porto
	class D2Grass: Default
	{
		files="d2trava_*";
		rough=0.15000001;
		dust=0.2;
		soundEnviron="drygrass";
		character="D2GrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.7;
		surfaceFriction=1.8;
	};
	class D2City: Default
	{
		files="d2mesto_*";
		rough=0.1;
		dust=0.1;
		soundEnviron="gravel";
		character="D2DirtClutter";
		soundHit="hard_ground";
		impact="hitGroundHard";
		maxSpeedCoef=0.65;
		surfaceFriction=1.9;
	};
	class D2Sand: Default
	{
		files="d2pisek_*";
		rough=0.1;
		dust=0.40000001;
		soundEnviron="sand";
		character="D2SandClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.7;
		surfaceFriction=1.9;
	};
	class D2Rock: Default
	{
		files="cr_pole_*";
		rough=0.5;
		dust=0.2;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=2.1;
		maxSpeedCoef=0.8;
		
	};
	
	
	//ProvingGrounds_PMC
	class GZHlina: Default
	{
		files="gz_hlina_*";
		rough=0.1;
		dust=0.80000001;
		soundEnviron="dirt";
		character="Empty";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.8;
		surfaceFriction=2.1;
	};
	class GZTrava: Default
	{
		files="gz_trava_*";
		rough=0.12;
		dust=0.60000002;
		soundEnviron="grass";
		character="GZTravaClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.7;
		surfaceFriction=1.8;
	};
	class GZasfalt: Default
	{
		files="gz_asfalt_*";
		rough=0.1;
		dust=0.80000001;
		soundEnviron="dirt";
		character="Empty";
		soundHit="concrete";
		impact="hitConcrete";
		maxSpeedCoef=0.95;
		surfaceFriction=2.4;
	};
	class GZforest: Default
	{
		files="gz_forest_*";
		rough=0.1;
		dust=0.80000001;
		soundEnviron="dirt";
		character="GZTravaGreen";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.30000001;
	};
	class GZkameny: Default
	{
		files="gz_kameny_*";
		rough=0.1;
		dust=0.80000001;
		soundEnviron="dirt";
		character="Empty";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=2.0;
		maxSpeedCoef=0.7;
		
	};
	
	
	//Shapur_BAF
	class DBTrava: Default
	{
		files="baf_trava_*";
		rough=0.079999998;
		dust=0.5;
		soundEnviron="drygrass";
		character="DBGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.7;
		surfaceFriction=1.8;
	};
	class DBPolopoust: Default
	{
		files="baf_polopoust_*";
		rough=0.050000001;
		dust=0.89999998;
		soundEnviron="dirt";
		character="DBDenseAridClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.7;
		surfaceFriction=1.9;
	};
	class DBSkalniSterk: Default
	{
		files="baf_skalni_sterk_*";
		rough=0.1;
		dust=1;
		soundEnviron="rock";
		character="DBSparseAridClutter";
		soundHit="hard_ground";
		impact="hitGroundHard";
		maxSpeedCoef=0.8;
		surfaceFriction=2.1;
	};
	class DBAsfalt: Default
	{
		files="baf_asfalt_*";
		rough=0.0049999999;
		dust=0.1;
		soundEnviron="concrete";
		character="Empty";
		soundHit="concrete";
		impact="hitConcrete";
		maxSpeedCoef=0.95;
		surfaceFriction=2.4;
	};
	
	//Utes

	class UTGravel: Default
	{
		files="ut_sterk_*";
		rough=0.1;
		dust=0.34999999;
		lucidity=0.30000001;
		grassCover=0;
		soundEnviron="gravel";
		character="Empty";
		soundHit="hard_ground";
		impact="hitHardGround";
		surfaceFriction=2.0;
		maxSpeedCoef=0.55;
	};
	class UTRock: Default
	{
		files="ut_skala_*";
		rough=0.2;
		dust=0.5;
		lucidity=1;
		grassCover=0;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=2.1;
		maxSpeedCoef=0.8;
	};
	class UTConcrete: Default
	{
		files="ut_beton_*";
		rough=0.050000001;
		dust=0.079999998;
		lucidity=0.30000001;
		soundEnviron="concrete";
		character="Empty";
		soundHit="concrete";
		impact="hitConcrete";
		surfaceFriction=2.2;
		maxSpeedCoef=0.90;
	};
	class UTBoulders: Default
	{
		files="ut_valouny_*";
		rough=0.1;
		dust=0.07;
		soundEnviron="rock";
		character="UTSparseGrassClutter";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=2.0;
		maxSpeedCoef=0.7;
	};
	class UTGround: Default
	{
		files="ut_hlina_*";
		rough=0.1;
		dust=0.2;
		soundEnviron="dirt";
		character="UTSparseGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
		maxSpeedCoef=0.6;
	};
	class UTGrass: Default
	{
		files="ut_trava_*";
		rough=0.079999998;
		maxSpeedCoef=0.55;
		dust=0.15000001;
		lucidity=4;
		grassCover=0.050000001;
		soundEnviron="grass";
		character="UTGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
	};
	class UTHeather: Default
	{
		files="ut_vres_*";
		rough=0.14;
		dust=0.1;
		soundEnviron="drygrass";
		character="UTHeatherClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.35;
		surfaceFriction=1.7;
	};
	class UTWeeds: Default
	{
		files="ut_plevel_*";
		rough=0.1;
		maxSpeedCoef=0.35;
		dust=0.33000001;
		lucidity=1.5;
		grassCover=0.1;
		soundEnviron="drygrass";
		character="UTWeedsClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.7;
	};
	class UTForest: Default
	{
		files="ut_les_*";
		rough=0.12;
		surfaceFriction=1.7;
		maxSpeedCoef=0.30000001;
		dust=0.40000001;
		lucidity=3.5;
		grassCover=0.039999999;
		soundEnviron="drygrass";
		character="UTPineForestClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
	};

	
	//Zargabad

	class ZRAsfalt: Default
	{
		files="zr_asfalt_*";
		rough=0.001;
		dust=0.1;
		soundEnviron="concrete";
		character="Empty";
		soundHit="concrete";
		impact="hitConcrete";
		surfaceFriction=2.4;
		maxSpeedCoef=0.95;
	};
	class ZRBeton: Default
	{
		files="zr_beton_*";
		rough=0.0099999998;
		dust=0.079999998;
		soundEnviron="concrete";
		character="Empty";
		soundHit="concrete";
		impact="hitConcrete";
		surfaceFriction=2.3;
		maxSpeedCoef=0.90;
	};
	class ZRHlina: Default
	{
		files="zr_hlina_*";
		rough=0.1;
		dust=0.80000001;
		soundEnviron="dirt";
		character="Empty";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.7;
		surfaceFriction=2.1;
	};
	class ZRPlevel: Default
	{
		files="zr_plevel_*";
		rough=0.11;
		dust=0.69999999;
		soundEnviron="drygrass";
		character="ZRWeedsClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.6;
		surfaceFriction=2.0;
	};
	class ZRPole: Default
	{
		files="zr_pole_*";
		rough=0.12;
		dust=0.60000002;
		soundEnviron="grass";
		character="ZRFieldGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		surfaceFriction=1.8;
		maxSpeedCoef=0.6;
	};
	class ZRPolopoust: Default
	{
		files="zr_polopoust_*";
		rough=0.0099999998;
		dust=0.89999998;
		soundEnviron="dirt";
		character="ZRDesertClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.7;
		surfaceFriction=1.9;
	};
	class ZRSkala: Default
	{
		files="zr_skala_*";
		rough=0.30000001;
		dust=0.5;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=2.1;
		maxSpeedCoef=0.8;
	};
	class ZRSkalniSterk: Default
	{
		files="zr_skalni_sterk_*";
		rough=0.15000001;
		dust=1;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		maxSpeedCoef=0.8;
		surfaceFriction=2.1;
	};
	class ZRSterkNaDno: Default
	{
		files="zr_sterk_na_dno_*";
		rough=0.2;
		dust=0;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		maxSpeedCoef=0.4;
		surfaceFriction=1.8;
	};
	class ZRValouny: Default
	{
		files="zr_valouny_*";
		rough=0.15000001;
		dust=0.40000001;
		soundEnviron="rock";
		character="Empty";
		soundHit="hard_ground";
		impact="hitGroundHard";
		surfaceFriction=2.0;
		maxSpeedCoef=0.7;
	};
	class ZRTrava: Default
	{
		files="zr_trava_*";
		rough=0.11;
		dust=0.5;
		soundEnviron="drygrass";
		character="ZRGrassClutter";
		soundHit="soft_ground";
		impact="hitGroundSoft";
		maxSpeedCoef=0.7;
		surfaceFriction=1.8;
	};
	class ZRDlazbaOld: Default
	{
		files="zr_dlazba_old_*";
		rough=0.001;
		dust=0.1;
		soundEnviron="concrete";
		character="Empty";
		soundHit="concrete";
		impact="hitConcrete";
		surfaceFriction=2.0;
		maxSpeedCoef=0.7;
	};

	
	//Winter Cherno

	class WCGrass1: Default
	{
		files = "wc_trava1_*";
		rough = 0.1;
		maxSpeedCoef = 0.50;
		dust = 0.15;
		lucidity = 4;
		grassCover = 0.05;
		// soundEnviron = "dirt";
		soundEnviron = "snow";
		character = "CUPWinterGrassClutter";
		soundHit = "soft_ground";
		impact = "hitGroundSoft";
		surfaceFriction = 1.8;
	};
	class WCGrass2: Default
	{
		files = "wc_trava2_*";
		rough = 0.1;
		maxSpeedCoef = 0.5;
		dust = 0.15;
		lucidity = 4;
		grassCover = 0.05;
		soundEnviron = "snow";
		character = "CUPWinterTallGrassClutter";
		soundHit = "soft_ground";
		impact = "hitGroundSoft";
		surfaceFriction = 1.8;
	};
	class WCGrassW1: Default
	{
		files = "wc_travad1_*";
		rough = 0.1;
		maxSpeedCoef = 0.5;
		dust = 0.15;
		lucidity = 4;
		grassCover = 0.05;
		soundEnviron = "snow";
		character = "CUPWinterGrassClutter";
		soundHit = "soft_ground";
		impact = "hitGroundSoft";
		surfaceFriction = 1.8;
	};
	class WCGrassW2: Default
	{
		files = "wc_travad2_*";
		rough = 0.1;
		maxSpeedCoef = 0.5;
		dust = 0.15;
		lucidity = 4;
		grassCover = 0.05;
		soundEnviron = "snow";
		character = "CUPWinterTallGrassClutter";
		soundHit = "soft_ground";
		impact = "hitGroundSoft";
		surfaceFriction = 1.8;
	};
	class WCForest1: Default
	{
		files = "wc_les1_*";
		rough = 0.12;
		maxSpeedCoef=0.30000001;
		dust = 0.4;
		lucidity = 3.5;
		grassCover = 0.04;
		soundEnviron = "snow";
		character = "CUPWinterForestMixedClutter";
		soundHit = "soft_ground";
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
	};
	class WCForest2: Default
	{
		files = "wc_les2_*";
		rough = 0.12;
		maxSpeedCoef=0.30000001;
		dust = 0.4;
		lucidity = 3.5;
		grassCover = 0.04;
		soundEnviron = "snow";
		character = "CUPWinterForestFirClutter";
		soundHit = "soft_ground";
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
	};
	class WCField1: Default
	{
		files = "wc_oranice_*";
		rough = 0.13;
		maxSpeedCoef=0.25;
		dust=0.6000001;
		lucidity = 1.5;
		grassCover = 0.04;
		soundEnviron = "snow";
		character = "Empty";
		soundHit = "soft_ground";
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
	};
	class WCField2: Default
	{
		files = "wc_strniste_*";
		rough = 0.1;
		maxSpeedCoef=0.35;
		dust=0.4;
		lucidity = 1.5;
		grassCover = 0.05;
		soundEnviron = "snow";
		character = "CUPWinterStubbleClutter";
		soundHit = "soft_ground";
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
	};
	class WCSterk: Default //renamed from CRGrit1
	{
		files = "wc_sterk_*";
		rough = 0.050000001;
		maxSpeedCoef=0.95;
		dust = 0.25;
		lucidity = 0.30000001;
		grassCover = 0;
		soundEnviron = "gravel";
		character = "Empty";
		soundHit = "hard_ground";
		impact = "hitGroundHard";
		surfaceFriction=2.4;
	};
	class WCHeather: Default
	{
		files = "wc_vres_*";
		rough = 0.14;
		maxSpeedCoef=0.55;
		dust = 0.1;
		soundEnviron = "drygrass";
		character = "CUPWinterHeatherClutter";
		soundHit = "soft_ground";
		impact = "hitGroundSoft";
	};
	class WCRock: Default
	{
		files = "wc_skala_*";
		rough = 0.2;
		maxSpeedCoef = 0.8;
		dust = 0.07;
		lucidity = 1;
		grassCover = 0;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
		impact = "hitGroundHard";
		surfaceFriction = 1.9;
	};
	class WCTarmac: Default
	{
		files = "wc_asfalt_*";
		rough = 0.05;
		dust = 0.02;
		lucidity = 0.5;
		soundEnviron = "gravel";
		character = "Empty";
		soundHit = "hard_ground";
		surfaceFriction = 2.5;
		impact = "hitGroundHard";
	};
	class WCConcrete: Default
	{
		files = "wc_beton_*";
		rough = 0.05;
		dust = 0.08;
		lucidity = 0.3;
		soundEnviron = "concrete";
		character = "Empty";
		soundHit = "concrete";
		impact = "hitConcrete";
		surfaceFriction=2.2;
		maxSpeedCoef=0.9;
	};
	class WCHlina: Default
	{
		files = "wc_hlina_*";
		rough = 0.15;
		maxSpeedCoef = 0.45;
		dust = 0.32;
		lucidity = 1.5;
		grassCover = 0.04;
		soundEnviron = "snow";
		character = "CUPWinterSparseWeedsClutter";
		soundHit = "soft_ground";
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
	};	
	
};
