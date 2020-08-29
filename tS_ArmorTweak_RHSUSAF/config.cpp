class CfgPatches
{
	class tS_ArmorTweak
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_c_troops"};
		author = "Tactical Shift";
		version = "1";
	};
};


#define __HELMET_L            class HitpointsProtectionInfo { class Head { hitpointName = "HitHead"; armor = 4; passThrough = 0.5; }; }
#define __HELMET_M            class HitpointsProtectionInfo { class Head { hitpointName = "HitHead"; armor = 6; passThrough = 0.5; }; }
#define __HELMET_H            class HitpointsProtectionInfo { class Head { hitpointName = "HitHead"; armor = 10; passThrough = 0.5; }; }

#define __VEST_M              class HitpointsProtectionInfo{ class Chest { hitpointName = "HitChest"; armor = 8; passThrough = 0.5; }; class Diaphragm { hitpointName = "HitDiaphragm"; armor = 8; passThrough = 0.5; }; class Abdomen { hitpointName = "HitAbdomen"; armor = 8; passThrough = 0.5; }; class Body { hitpointName = "HitBody"; passThrough = 0.5; };}
#define __VEST_H              class HitpointsProtectionInfo { class Chest { hitpointName = "HitChest"; armor = 16; passThrough = 0.3; }; class Diaphragm { hitpointName = "HitDiaphragm"; armor = 16; passThrough = 0.3; }; class Abdomen { hitpointName = "HitAbdomen"; armor = 16; passThrough = 0.3; }; class Body { hitpointName = "HitBody"; passThrough = 0.3; }; }
#define __VEST_H_Arms         class HitpointsProtectionInfo { class Chest { hitpointName = "HitChest"; armor = 16; passThrough = 0.3; }; class Diaphragm { hitpointName = "HitDiaphragm"; armor = 16; passThrough = 0.3; }; class Abdomen { hitpointName = "HitAbdomen"; armor = 16; passThrough = 0.3; }; class Arms { hitpointName = "HitArms"; armor = 16; passThrough = 0.3; }; class Body { hitpointName = "HitBody"; passThrough = 0.3; }; }
#define __VEST_H_Pelvis       class HitpointsProtectionInfo { class Chest { hitpointName = "HitChest"; armor = 16; passThrough = 0.3; }; class Diaphragm { hitpointName = "HitDiaphragm"; armor = 16; passThrough = 0.3; }; class Abdomen { hitpointName = "HitAbdomen"; armor = 16; passThrough = 0.3; }; class Pelvis { hitpointName = "HitPelvis"; armor = 16; passThrough = 0.3; }; class Body { hitpointName = "HitBody"; passThrough = 0.3; }; }
#define __VEST_H_ArmsPelvis   class HitpointsProtectionInfo { class Chest { hitpointName = "HitChest"; armor = 16; passThrough = 0.3; }; class Diaphragm { hitpointName = "HitDiaphragm"; armor = 16; passThrough = 0.3; }; class Abdomen { hitpointName = "HitAbdomen"; armor = 16; passThrough = 0.3; }; class Pelvis { hitpointName = "HitPelvis"; armor = 16; passThrough = 0.3; }; class Arms { hitpointName = "HitArms"; armor = 16; passThrough = 0.3; }; class Body { hitpointName = "HitBody"; passThrough = 0.3; }; }

#define __VEST_HEAVY_ARMOR    class ItemInfo: ItemInfo { __VEST_H; }
#define __VEST_MID_ARMOR      class ItemInfo: ItemInfo { __VEST_M; }


class CfgWeapons
{
	class ItemCore;
	
	#include "CfgHelmets.hpp"
	#include "CfgVests.hpp"
};
