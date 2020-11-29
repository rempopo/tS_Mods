class CfgPatches
{
	class tS_Kord_SPP
	{
		units[] = {
			"tS_RUS_KORD_SPP_MiniTripod",
			"tS_KORD_SPP_MiniTripod",
			"tS_Kord_SPP_Tripod_Bag",
			"tS_Kord_SPP_Gun_Bag"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","cba_common","CUP_Weapons_StaticWeapons"};
		author = "Tactical Shift";
		version = "1.0";
	};
};

#define MA(X) X call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')
#define OPTICS_SPP_SCALE_10x 1
#define OPTICS_SPP_SCALE_5x 0.65
#define OPTICS_SPP_RETICLE "\tS_Kord_SPP\data\SPP_reticle_ca.paa"
#define OPTICS_SPP_RETICLE_N "\tS_Kord_SPP\data\SPP_reticle_n_ca.paa"

class CfgWeapons
{
	class ItemCore;
	class tS_KORD_SPP_Optics: ItemCore
	{
		scope = 1;
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[] = {5, OPTICS_SPP_SCALE_5x};
			maxMagnificationReticleScale[] = {10, OPTICS_SPP_SCALE_10x};
			reticleDetailTextures[] =
			{
				{4, OPTICS_SPP_RETICLE, OPTICS_SPP_SCALE_5x, OPTICS_SPP_RETICLE_N},
				{9, OPTICS_SPP_RETICLE, OPTICS_SPP_SCALE_10x, OPTICS_SPP_RETICLE_N}
			};
			reticleTextureSize = OPTICS_SPP_SCALE_10x;
			manualReticleNightSwitch = 1;
			bodyTexture = "";
			bodyTextureSize = 1;
		};
	};
};

class CfgVehicles
{
	class StaticMGWeapon;
	class CUP_KORD_Base: StaticMGWeapon
	{
		class Turrets;
	};
	class CUP_KORD_MiniTripod_Base: CUP_KORD_Base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};

	class tS_KORD_SPP_MiniTripod: CUP_KORD_MiniTripod_Base
	{
		author = "Tactical Shift";
		displayName = "КОРД/6П50 (СПП-М)";
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"tS_Kord_SPP_Gun_Bag","tS_Kord_SPP_Tripod_Bag"};
			displayName = "";
		};
		CUP_isMovableStaticWeapon = 1;
		CUP_isRotatableStaticWeapon = 1;

		CBA_ScriptedOpticClass = "tS_KORD_SPP_Optics";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				turretInfoType = "CBA_ScriptedOptic_zooming";
				weapons[] = {"CUP_Vhmg_KORD_veh"};
				class OpticsIn
				{
					class SPP_5x
					{
						opticsDisplayName = "СПП-М (5x)";
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 0;
						initAngleY = 0;
						minAngleY = 0;
						maxAngleY = 0;
						initFov = MA(5);
						minFov = MA(5);
						maxFov = MA(5);
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\CUP\Weapons\CUP_Weapons_StaticWeapons\Reticles\reticle_L111A1_empty.p3d";
						opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
						camPos = "machinegun_eject_link_pos";
					};
					class SPP_10x: SPP_5x
					{
						opticsDisplayName = "СПП-М (10x)";
						initFov = MA(10);
						minFov = MA(10);
						maxFov = MA(10);
						camPos = "machinegun_eject_link_pos";
					};
					class ADS: SPP_5x
					{
						opticsDisplayName = "ADS";
						initFov = 0.45;
						minFov = 0.45;
						maxFov = 0.45;
						gunnerOpticsModel = "\A3\Weapons_F\empty";
						visionMode[] = {};
						opticsPPEffects[] = {};
						camPos = "gunnerview";
					};
				};
			};
		};
	};

	// Backpacks
	class Bag_Base;
	class CUP_B_Kord_Gun_Bag;
	class tS_Kord_SPP_Gun_Bag: CUP_B_Kord_Gun_Bag
	{
		author = "Tactical Shift";
		displayName = "КОРД/6П50 (СПП-М)";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		_generalMacro = "tS_KORD_SPP_Mini_RUS";
		mass = 250;
	};

	class Weapon_Bag_Base;
	class CUP_B_DShkM_TripodHigh_Bag: Weapon_Bag_Base
	{
		class assembleInfo;
	};
	class tS_Kord_SPP_Tripod_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		author = "Tactical Shift";
		displayName = "КОРД/6П50 (СПП-М) Тренога";
		mass = 300;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		_generalMacro = "tS_RUS_KORD_SPP_MiniTripod";
		class assembleInfo: assembleInfo
		{
			assembleTo = "tS_RUS_KORD_SPP_MiniTripod";
			base[] = {"tS_Kord_SPP_Gun_Bag"};
		};
	};

	// Unit
	class tS_RUS_KORD_SPP_MiniTripod: tS_KORD_SPP_MiniTripod
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		forceInGarage = 1;
		faction = "OPF_R_F";
		crew = "O_R_JTAC_F";
		typicalCargo[] = {"O_R_JTAC_F"};
		editorSubcategory ="EdSubcat_Turrets";
	};
};
