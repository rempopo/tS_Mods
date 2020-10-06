
// Helmets
#define HELMET_LIGHT_ARMOR   4
#define HELMET_MEDIUM_ARMOR  6
#define HELMET_HEAVY_ARMOR   10
#define HELMET_ASSAULT_ARMOR 12 
#define HELMET_VISOR_ARMOR   8 
#define HELMET_PASS_L        0.5
#define HELMET_PASS_M        0.5
#define HELMET_PASS_H        0.4
#define HELMET_PASS_A        0.5
#define HELMET_PASS_VISOR    0.4

// Vests
#define VEST_NONE_ARMOR      2
#define VEST_LIGHT_ARMOR     8
#define VEST_MEDIUM_ARMOR    16
#define VEST_HEAVY_ARMOR     20
#define VEST_NO_PLATE        0 
#define VEST_PLATE_2         2 
#define VEST_PLATE_4         4 
#define VEST_PLATE_8         8 
#define VEST_PLATE_20        20 
#define VEST_PASS_NONE       1
#define VEST_PASS_L          0.5
#define VEST_PASS_M          0.3
#define VEST_PASS_H          0.2
#define VEST_PASS_A          0.1


// Helmet hitpoint macro

#define __PROTECTION_HELMET(ARMOR_VALUE,PASS_VALUE) \
	class HitpointsProtectionInfo { \
		class Head { HitpointName = "HitHead"; armor = ARMOR_VALUE; passThrough = PASS_VALUE; }; \
	}

#define __PROTECTION_HELMET_VISOR(ARMOR_VALUE,PASS_VALUE,VISOR_ARMOR_VALUE,VISOR_PASS_VALUE) \
	class HitpointsProtectionInfo { \
		class Head { HitpointName = "HitHead"; armor = ARMOR_VALUE; passThrough = PASS_VALUE; }; \
		class Face { hitpointName = "HitFace"; armor = VISOR_ARMOR_VALUE; passThrough = VISOR_PASS_VALUE; }; \
	}
	
// Vest hitpoint macro 

#define __PROTECTION_VEST(ARMOR_VALUE,PLATE_ARMOR_VALUE,PASS_VALUE) \
	class HitpointsProtectionInfo { \
		class Neck { HitpointName = "HitNeck"; armor = 0; passThrough = 1; }; \
		class Chest { hitpointName = "HitChest"; armor = ARMOR_VALUE + PLATE_ARMOR_VALUE; passThrough = PASS_VALUE; }; \
		class Diaphragm { hitpointName = "HitDiaphragm"; armor = ARMOR_VALUE + PLATE_ARMOR_VALUE; passThrough = PASS_VALUE; }; \
		class Abdomen { hitpointName = "HitAbdomen"; armor = ARMOR_VALUE; passThrough = PASS_VALUE; }; \
		class Body { hitpointName = "HitBody"; passThrough = PASS_VALUE; }; \
	}
	
#define __PROTECTION_VEST_NECK(ARMOR_VALUE,PLATE_ARMOR_VALUE,PASS_VALUE,NECK_ARMOR_VALUE,NECK_PASS_VALUE) \
	class HitpointsProtectionInfo { \
		class Neck { HitpointName = "HitNeck"; armor = NECK_ARMOR_VALUE; passThrough = NECK_PASS_VALUE; }; \
		class Chest { hitpointName = "HitChest"; armor = ARMOR_VALUE + PLATE_ARMOR_VALUE; passThrough = PASS_VALUE; }; \
		class Diaphragm { hitpointName = "HitDiaphragm"; armor = ARMOR_VALUE + PLATE_ARMOR_VALUE; passThrough = PASS_VALUE; }; \
		class Abdomen { hitpointName = "HitAbdomen"; armor = ARMOR_VALUE; passThrough = PASS_VALUE; }; \
		class Body { hitpointName = "HitBody"; passThrough = PASS_VALUE; }; \
	}
	
	
	
// Config shortcuts

#define __HELMET_L           class ItemInfo: ItemInfo { __PROTECTION_HELMET(HELMET_LIGHT_ARMOR,HELMET_PASS_L); }
#define __HELMET_M           class ItemInfo: ItemInfo { __PROTECTION_HELMET(HELMET_MEDIUM_ARMOR,HELMET_PASS_M); }
#define __HELMET_H           class ItemInfo: ItemInfo { __PROTECTION_HELMET(HELMET_HEAVY_ARMOR,HELMET_PASS_H); }
#define __HELMET_A           class ItemInfo: ItemInfo { __PROTECTION_HELMET(HELMET_ASSAULT_ARMOR,HELMET_PASS_A); }
#define __HELMET_A_Visor     class ItemInfo: ItemInfo { __PROTECTION_HELMET_VISOR(HELMET_ASSAULT_ARMOR,HELMET_PASS_A,HELMET_VISOR_ARMOR,HELMET_PASS_VISOR); }


#define __VEST_EL            class ItemInfo: ItemInfo { __PROTECTION_VEST(VEST_NONE_ARMOR,VEST_PLATE_8,VEST_PASS_NONE); }
#define __VEST_EL_SAPI       class ItemInfo: ItemInfo { __PROTECTION_VEST(VEST_NONE_ARMOR,VEST_PLATE_20,VEST_PASS_NONE); }
#define __VEST_L             class ItemInfo: ItemInfo { __PROTECTION_VEST(VEST_LIGHT_ARMOR,VEST_NO_PLATE,VEST_PASS_L); }
#define __VEST_L_Plates      class ItemInfo: ItemInfo { __PROTECTION_VEST(VEST_LIGHT_ARMOR,VEST_PLATE_4,VEST_PASS_L); }
#define __VEST_M             class ItemInfo: ItemInfo { __PROTECTION_VEST(VEST_MEDIUM_ARMOR,VEST_NO_PLATE,VEST_PASS_M); }
#define __VEST_M_Plates      class ItemInfo: ItemInfo { __PROTECTION_VEST(VEST_MEDIUM_ARMOR,VEST_PLATE_2,VEST_PASS_M); }
#define __VEST_M_Neck        class ItemInfo: ItemInfo { __PROTECTION_VEST_NECK(VEST_MEDIUM_ARMOR,VEST_NO_PLATE,VEST_PASS_M,VEST_LIGHT_ARMOR,VEST_PASS_L); }
#define __VEST_H_Neck        class ItemInfo: ItemInfo { __PROTECTION_VEST_NECK(VEST_MEDIUM_ARMOR,VEST_PLATE_4,VEST_PASS_H,VEST_LIGHT_ARMOR,VEST_PASS_L); }
#define __VEST_A_Neck        class ItemInfo: ItemInfo { __PROTECTION_VEST_NECK(VEST_HEAVY_ARMOR,VEST_PLATE_4,VEST_PASS_A,VEST_LIGHT_ARMOR,VEST_PASS_L); }

