class CfgPatches
{
	class tS_Offroad_Rosche
	{
		units[] = {};
		weapons[] = {};
		version = "2";
		author = "RamZesIV & Tactical Shift";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"WL_Rosche"
		};
	};
};

class CfgSurfaces
{
	class Default;
	
	class wl_rosche_dirt_surface : Default
	{
		files = "wl_rosche_dirt*";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.090000;
		maxSpeedCoef = 0.6500000;
		dust = 0.900000;
		lucidity = 1;
		grassCover = 0.000000;
		surfaceFriction = 1.800000;
		impact = "hitGroundSoft";
		maxClutterColoringCoef = 1.350000;
	};
	class wl_rosche_dry_grass_surface : Default
	{
		files = "wl_rosche_dry_grass*";
		character = "wl_rosche_dry_grass_Character";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.090000;
		maxSpeedCoef = 0.600000;
		dust = 0.500000;
		lucidity = 1;
		grassCover = 0.000000;
		surfaceFriction = 2.100000;
		impact = "hitGroundSoft";
		maxClutterColoringCoef = 1.350000;
	};
	class wl_rosche_forest_surface : Default
	{
		files = "wl_rosche_forest*";
		character = "wl_rosche_forest_Character";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.190000;
		maxSpeedCoef = 0.300000;
		dust = 0.500000;
		lucidity = 1;
		grassCover = 0.000000;
		surfaceFriction = 1.800000;
		impact = "hitGroundSoft";
		maxClutterColoringCoef = 1.900000;
	};
	class wl_rosche_grass_long_surface : Default
	{
		files = "wl_rosche_grass_long*";
		character = "wl_rosche_long_grass_Character";
		soundEnviron = "grass";
		soundHit = "soft_ground";
		rough = 0.090000;
		maxSpeedCoef = 0.5500000;
		dust = 0.500000;
		lucidity = 1;
		grassCover = 0.000000;
		surfaceFriction = 1.800000;
		impact = "hitGroundSoft";
		maxClutterColoringCoef = 1.350000;
	};
	class wl_rosche_soil_surface : Default
	{
		files = "wl_rosche_soil*";
		character = "wl_rosche_soil_Character";
		rough = 0.090000;
		maxSpeedCoef = 0.4500000;
		surfaceFriction = 1.600000;
		dust = 0.900000;
		soundEnviron = "dirt";
		soundHit = "hard_ground";
		lucidity = 1;
		impact = "hitGroundSoft";
		grassCover = 0.000000;
	};
	class WL_Rosche_concrete_surface : Default
	{
		files = "WL_Rosche_concrete*";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "concrete";
		rough = 0.000000;
		maxSpeedCoef = 0.85;
		dust = 0.150000;
		lucidity = 0.300000;
		grassCover = 0.000000;
		impact = "hitConcrete";
		maxClutterColoringCoef = 1.350000;
	};
	class WL_Rosche_marsh_surface : Default
	{
		files = "WL_Rosche_marsh*";
		character = "Empty";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.090000;
		maxSpeedCoef = 0.200000;
		dust = 0.000000;
		lucidity = 1;
		grassCover = 0.000000;
		surfaceFriction = 0.800000;
		impact = "hitGroundSoft";
		maxClutterColoringCoef = 1.350000;
	};
	class WL_Rosche_asphalt_surface : Default
	{
		files = "WL_Rosche_asphalt*";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "concrete";
		rough = 0.000000;
		maxSpeedCoef = 1;
		surfaceFriction = 2.500000;
		dust = 0.150000;
		lucidity = 0.300000;
		grassCover = 0.000000;
		impact = "hitConcrete";
		maxClutterColoringCoef = 1.350000;
	};

};
