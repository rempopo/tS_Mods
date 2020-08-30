class CfgPatches
{
	class tS_Offroad_Core
	{
		units[] = {};
		weapons[] = {};
		version = "2";
		author = "RamZesIV & Tactical Shift";
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

class CfgSurfaces
{
	class Default
	{
		friction = 0.9;
		maxSpeedCoef=0.8;
		surfaceFriction=1.8;
		rough=0.15000001;
		soundEnviron = "dirt";	
	};
	
	//"Stratis" / "Altis"
	class GdtStratisConcrete : Default
	{
		files = "gdt_strconcrete_*";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "concrete";
		rough = 0.050000;
		maxSpeedCoef = 0.9;
		dust = 0.150000;
		lucidity = 0.300000;
		grassCover = 0.000000;
		impact = "hitConcrete";
		maxClutterColoringCoef = 1.350000;
		surfaceFriction = 1.800000;
	};
	class GdtStratisBeach : Default
	{
		files = "gdt_strbeach_*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.100000;
		dust = 0.500000;
		lucidity = 1.250000;
		grassCover = 0.000000;
		impact = "hitGroundSoft";
		surfaceFriction = 0.75;
		restitution = 0.050000;
		maxSpeedCoef = 0.800000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtStratisDirt : Default
	{
		files = "gdt_strdirt_*";
		character = "Empty";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.090000;
		dust = 0.500000;
		lucidity = 1;
		grassCover = 0.030000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.400000;
		restitution = 0.190000;
		maxSpeedCoef = 0.700000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtStratisSeabedCluttered : Default
	{
		files = "gdt_strseabed_*";
		character = "SeabedClutter";
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		rough = 0.150000;
		dust = 0.750000;
		lucidity = 200;
		grassCover = 0.050000;
		surfaceFriction = 1;
		restitution = 0.050000;
		maxSpeedCoef = 0.600000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtStratisSeabed : Default
	{
		files = "gdt_strdeepsea_*";
		character = "Empty";
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		rough = 0.150000;
		dust = 0.750000;
		lucidity = 150;
		grassCover = 0.000000;
		surfaceFriction = 1;
		restitution = 0.050000;
		maxSpeedCoef = 0.700000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtStratisDryGrass : Default
	{
		files = "gdt_strdrygrass_*";
		character = "StratisDryGrassClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.080000;
		dust = 0.750000;
		lucidity = 2;
		grassCover = 0.100000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.200000;
		restitution = 0.150000;
		maxSpeedCoef = 0.650000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtStratisGreenGrass : Default
	{
		files = "gdt_strgreengrass_*";
		character = "StratisGreenGrassClutter";
		soundEnviron = "grass";
		soundHit = "soft_ground";
		rough = 0.080000;
		dust = 0.150000;
		lucidity = 4;
		grassCover = 0.050000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.200000;
		restitution = 0.150000;
		maxSpeedCoef = 0.650000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtStratisRocky : Default
	{
		files = "gdt_strrocky_*";
		character = "StratisRockyClutter";
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		rough = 0.120000;
		dust = 0.400000;
		lucidity = 1.500000;
		grassCover = 0.020000;
		impact = "hitGroundHard";
		surfaceFriction = 1.800000;
		restitution = 0.250000;
		maxSpeedCoef = 0.600000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtStratisThistles : Default
	{
		files = "gdt_strthistles_*";
		character = "StratisThistlesClutter";
		soundEnviron = "stony";
		soundHit = "soft_ground";
		rough = 0.120000;
		dust = 0.600000;
		lucidity = 3.500000;
		grassCover = 0.000000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.200000;
		restitution = 0.150000;
		maxSpeedCoef = 0.650000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtStratisForestPine : Default
	{
		files = "gdt_strforest_pine_*";
		character = "StratisForestPineClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.120000;
		dust = 0.400000;
		lucidity = 3.500000;
		grassCover = 0.040000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.200000;
		restitution = 0.150000;
		maxSpeedCoef = 0.350000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtRubble : Default
	{
		files = "gdt_rubble_*";
		character = "RubbleClutter";
		soundEnviron = "debris";
		soundHit = "building";
		rough = 0.200000;
		dust = 0.500000;
		lucidity = 3;
		grassCover = 0.000000;
		impact = "hitGroundHard";
		surfaceFriction = 1.200000;
		restitution = 0.125000;
		maxSpeedCoef = 0.660000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtForestPine : Default
	{
		files = "gdt_forest_pine_*";
		character = "ForestPineClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.120000;
		dust = 0.400000;
		lucidity = 3.500000;
		grassCover = 0.040000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.200000;
		restitution = 0.150000;
		maxSpeedCoef = 0.350000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtConcrete : Default
	{
		files = "gdt_concrete_*";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "concrete";
		rough = 0.050000;
		dust = 0.050000;
		lucidity = 0.300000;
		grassCover = 0.000000;
		impact = "hitConcrete";
		maxClutterColoringCoef = 1.350000;
		surfaceFriction = 2.200000;
		restitution = 0.250000;
		maxSpeedCoef=0.90;
	};
	class GdtSoil : Default
	{
		files = "gdt_soil_*";
		character = "Empty";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.090000;
		dust = 0.500000;
		lucidity = 1;
		grassCover = 0.000000;
		surfaceFriction = 1.400000;
		restitution = 0.190000;
		maxSpeedCoef = 0.800000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtBeach : Default
	{
		files = "gdt_beach_*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.100000;
		dust = 0.830000;
		lucidity = 1.250000;
		grassCover = 0.000000;
		impact = "hitGroundSoft";
		surfaceFriction = 1;
		restitution = 0.050000;
		maxSpeedCoef = 0.700000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtRock : Default
	{
		files = "gdt_rock_*";
		character = "Empty";
		soundEnviron = "rock";
		soundHit = "hard_ground";
		rough = 0.200000;
		dust = 0.500000;
		lucidity = 1;
		grassCover = 0.000000;
		impact = "hitGroundHard";
		surfaceFriction = 1.800000;
		restitution = 0.250000;
		maxSpeedCoef = 0.760000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtDead : Default
	{
		files = "gdt_dead_*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.050000;
		dust = 0.400000;
		lucidity = 0.500000;
		grassCover = 0.000000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.400000;
		restitution = 0.190000;
		maxSpeedCoef = 0.830000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtDirt : Default
	{
		files = "gdt_dirt_*";
		character = "GrassDryClutter";
		soundEnviron = "dirt";
		soundHit = "hard_ground";
		rough = 0.090000;
		dust = 0.500000;
		lucidity = 1;
		grassCover = 0.030000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.400000;
		restitution = 0.190000;
		maxSpeedCoef = 0.700000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtDesert : Default
	{
		files = "gdt_desert_*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.110000;
		dust = 0.500000;
		lucidity = 2.500000;
		grassCover = 0.000000;
		impact = "hitGroundSoft";
		surfaceFriction = 1;
		restitution = 0.050000;
		maxSpeedCoef = 0.700000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtGrassGreen : Default
	{
		files = "gdt_grass_green_*";
		character = "GrassGreenClutter";
		soundEnviron = "grass";
		soundHit = "soft_ground";
		rough = 0.080000;
		dust = 0.050000;
		lucidity = 4;
		grassCover = 0.050000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.200000;
		restitution = 0.150000;
		maxSpeedCoef = 0.650000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtGrassDry : Default
	{
		files = "gdt_dry_grass_*";
		character = "GrassDryClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.080000;
		dust = 0.500000;
		lucidity = 2;
		grassCover = 0.100000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.200000;
		restitution = 0.150000;
		maxSpeedCoef = 0.650000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtGrassWild : Default
	{
		files = "gdt_wild_grass_*";
		character = "GrassWildClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.100000;
		dust = 0.580000;
		lucidity = 2.500000;
		grassCover = 0.050000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.200000;
		restitution = 0.150000;
		maxSpeedCoef = 0.600000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtWeed : Default
	{
		files = "gdt_weed_*";
		character = "WeedClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.120000;
		dust = 0.160000;
		lucidity = 2;
		grassCover = 0.050000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.200000;
		restitution = 0.150000;
		maxSpeedCoef = 0.600000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtWildField : Default
	{
		files = "gdt_wildfield_*";
		character = "WildFieldClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.100000;
		dust = 0.330000;
		lucidity = 1.500000;
		grassCover = 0.100000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.200000;
		restitution = 0.150000;
		maxSpeedCoef = 0.550000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtThorn : Default
	{
		files = "gdt_thorn_*";
		character = "ThornClutter";
		soundEnviron = "stony";
		soundHit = "hard_ground";
		rough = 0.120000;
		dust = 0.430000;
		lucidity = 3.500000;
		grassCover = 0.150000;
		impact = "hitGroundSoft";
		surfaceFriction = 1.200000;
		restitution = 0.150000;
		maxSpeedCoef = 0.550000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtStony : Default
	{
		files = "gdt_stony_*";
		character = "StonyClutter";
		soundEnviron = "rock";
		soundHit = "hard_ground";
		rough = 0.120000;
		dust = 0.330000;
		lucidity = 1.500000;
		grassCover = 0.000000;
		impact = "hitGroundHard";
		surfaceFriction = 1.300000;
		restitution = 0.175000;
		maxSpeedCoef = 0.600000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtStonyThistle : Default
	{
		files = "gdt_thistle_stony_*";
		character = "StonyThistleClutter";
		soundEnviron = "stony";
		soundHit = "hard_ground";
		rough = 0.150000;
		dust = 0.420000;
		lucidity = 1.500000;
		grassCover = 0.030000;
		impact = "hitGroundHard";
		surfaceFriction = 1.300000;
		restitution = 0.175000;
		maxSpeedCoef = 0.600000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtMud : Default
	{
		files = "gdt_mud_*";
		character = "MudClutter";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.150000;
		dust = 0.320000;
		lucidity = 1.500000;
		grassCover = 0.040000;
		impact = "hitGroundHard";
		surfaceFriction = 0.900000;
		restitution = 0.100000;
		maxSpeedCoef = 0.600000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtMarsh : Default
	{
		files = "gdt_marsh_*";
		character = "Empty";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.150000;
		dust = 0.100000;
		lucidity = 1.500000;
		grassCover = 0.000000;
		surfaceFriction = 0.900000;
		restitution = 0.100000;
		maxSpeedCoef = 0.300000;
		maxClutterColoringCoef = 1.350000;
	};
	class GdtSeabed : Default
	{
		files = "gdt_seabed_*";
		character = "SeabedClutter";
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		rough = 0.150000;
		dust = 0.750000;
		lucidity = 200;
		grassCover = 0.000000;
		surfaceFriction = 1;
		restitution = 0.050000;
		maxSpeedCoef = 0.600000;
		maxClutterColoringCoef = 1.350000;
	};
	class concrete : GdtStratisConcrete
	{
		files = "beton";
		character = "Empty";
		lucidity = 0.300000;
		surfaceFriction=2.2;
		maxSpeedCoef=0.90;
	};
	class concrete_out : GdtStratisConcrete
	{
		files = "betonout";
		character = "Empty";
		lucidity = 0.300000;
		surfaceFriction=2.2;
		maxSpeedCoef=0.90;
	};
	class concrete_inside : GdtStratisConcrete
	{
		files = "betonin";
		character = "Empty";
		lucidity = 0.300000;
		soundEnviron = "int_concrete";
		AIAvoidStance = 1;
		surfaceFriction=2.2;
		maxSpeedCoef=0.90;
	};
	class dirtrunway : GdtStratisDirt
	{
		files = "dirtrunway*";
		rough = 0.040000;
		surfaceFriction = 1.400000;
		restitution = 0.190000;
		maxSpeedCoef = 0.800000;
	};
	class road : GdtConcrete
	{
		files = "cesta*";
		character = "Empty";
		surfaceFriction=2.2;
		maxSpeedCoef=0.90;
	};
	class floor : GdtStratisConcrete
	{
		files = "dlazbaout";
		character = "Empty";
		surfaceFriction=2.2;
		maxSpeedCoef=0.90;
	};
	class floor_inside : GdtStratisConcrete
	{
		files = "dlazbain";
		character = "Empty";
		soundEnviron = "int_tiles";
		AIAvoidStance = 1;
		surfaceFriction=2.2;
		maxSpeedCoef=0.60;
	};
	class carpet_inside : GdtConcrete
	{
		files = "dum_mesto_koberec*";
		character = "Empty";
		soundEnviron = "int_concrete";
		AIAvoidStance = 1;
	};
	class carpet : GdtConcrete
	{
		files = "koberec*";
		character = "Empty";
		soundEnviron = "concrete";
	};
	class mud : GdtStratisDirt
	{
		files = "hlina*";
		character = "Empty";
		surfaceFriction=2.1;
		maxSpeedCoef=0.7;
	};
	class concrete_hall : concrete
	{
		files = "chodba_beton*";
		character = "Empty";
		soundEnviron = "int_concrete";
		AIAvoidStance = 1;
	};
	class stones : GdtStony
	{
		files = "kameny*";
		character = "Empty";
		maxSpeedCoef=0.7;
		surfaceFriction=2.0;
	};
	class cardboard : concrete
	{
		files = "lepenka*";
	};
	class lino : concrete
	{
		files = "lino*";
		soundEnviron = "int_concrete";
		AIAvoidStance = 1;
	};
	class steel : GdtStony
	{
		files = "ocel*";
		character = "Empty";
		soundEnviron = "metal";
		AIAvoidStance = 1;
	};
	class trash : GdtRubble
	{
		files = "odpadky*";
		character = "Empty";
	};
	class parquet : concrete
	{
		files = "parkety*";
		soundEnviron = "int_wood";
		AIAvoidStance = 1;
	};
	class sand : GdtStratisBeach
	{
		files = "pisek*";
		character = "Empty";
	};
	class metalPlate : steel
	{
		files = "plech*";
		character = "Empty";
	};
	class woodenFloor : concrete
	{
		files = "podlaha_prkna*";
		character = "Empty";
		soundEnviron = "int_wood";
		AIAvoidStance = 1;
	};
	class planks : GdtStratisThistles
	{
		files = "prknaout";
		soundEnviron = "wood";
		character = "Empty";
		surfaceFriction = 1.500000;
		restitution = 0.200000;
		maxSpeedCoef = 0.900000;
		rough = 0.050000;
		dust = 0.150000;
		lucidity = 0.300000;
		grassCover = 0.000000;
	};
	class planks_inside : GdtStratisThistles
	{
		files = "prknain";
		soundEnviron = "int_wood";
		character = "Empty";
		AIAvoidStance = 1;
		surfaceFriction = 1.500000;
		restitution = 0.200000;
		maxSpeedCoef = 0.900000;
		rough = 0.050000;
		dust = 0.150000;
		lucidity = 0.300000;
		grassCover = 0.000000;
	};
	class grid : steel
	{
		files = "rost*";
		character = "Empty";
	};
	class rubble : GdtRubble
	{
		files = "sterk*";
		character = "Empty";
	};
	class BuildingRubble : GdtRubble
	{
		files = "sutiny*";
		character = "Empty";
	};
	class tiling : concrete
	{
		files = "tasky*";
		soundEnviron = "tiling";
		character = "Empty";
		AIAvoidStance = 1;
	};
	class wavyMetal : steel
	{
		files = "vlnityplech*";
		character = "Empty";
		soundEnviron = "wavymetal";
	};
	class GdtVRsurface01 : Default
	{
		files = "gdt_vr_*";
		character = "Empty";
		soundEnviron = "virtual";
		soundHit = "soft_ground";
		rough = 0.010000;
		maxSpeedCoef = 1;
		dust = 0;
		lucidity = 0.300000;
		grassCover = 0.000000;
		impact = "hitVirtual";
		maxClutterColoringCoef = 1.350000;
	};
	class surf_metal : steel
	{
		files = "surf_metal*";
		soundEnviron = "metal";
		character = "Empty";
	};
	class surf_roadconcrete : GdtConcrete
	{
		files = "surf_roadconcrete*";
		soundEnviron = "concrete";
		character = "Empty";
	};
	class surf_roaddirt : GdtDirt
	{
		files = "surf_roaddirt*";
		soundEnviron = "dirt";
		character = "Empty";
	};
	class surf_roadtarmac : road
	{
		files = "surf_roadtarmac*";
		soundEnviron = "gravel";
		character = "Empty";
		surfaceFriction=2.5;
		maxSpeedCoef=1.0;
	};
	class surf_rooftiles : tiling
	{
		files = "surf_rooftiles*";
		soundEnviron = "tiling";
		character = "Empty";
	};
	class surf_rooftin : tiling
	{
		files = "surf_rooftin*";
		soundEnviron = "int_tiles";
		character = "Empty";
	};
	class surf_wood : GdtForestPine
	{
		files = "surf_wood*";
		soundEnviron = "wood";
		character = "Empty";
	};
	class surfint_concrete : GdtConcrete
	{
		files = "surfint_concrete*";
		soundEnviron = "int_concrete";
		character = "Empty";
		AIAvoidStance = 1;
	};
	class surfint_metal : steel
	{
		files = "surfint_metal*";
		soundEnviron = "int_metal";
		character = "Empty";
	};
	class surfint_tiles : tiling
	{
		files = "surfint_tiles*";
		soundEnviron = "int_tiles";
		character = "Empty";
	};
	class surfint_wood : GdtForestPine
	{
		files = "surfint_wood*";
		soundEnviron = "int_wood";
		character = "Empty";
		AIAvoidStance = 1;
	};
};
