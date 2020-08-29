
class CfgPatches {
	class tS_UGLSmokeBounceReduce
 	{
		units[] = {};
		weapons[] = {};
		author = "Tactical Shift & Abbi";
 		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Weapons_F","rhs_c_weapons","rhsusf_c_weapons" };
 	};
};

#define __NO_BOUNCE { simulation = "shotSmoke"; deflectionSlowDown = 0.25; }


class CfgAmmo {
	class SmokeShell;
	class SmokeShellRed;
	class SmokeShellGreen;
	class SmokeShellYellow;

	// vanilla 40mm smoke nades
	class G_40mm_Smoke: SmokeShell                  __NO_BOUNCE;

	// RHS USAF
	class rhs_40mm_m714_white: SmokeShell           __NO_BOUNCE;
	class rhs_40mm_m713_red: SmokeShellRed          __NO_BOUNCE;
	class rhs_40mm_m715_green: SmokeShellGreen      __NO_BOUNCE;
	class rhs_40mm_m716_yellow: SmokeShellYellow    __NO_BOUNCE;
	
	// RHS AFRF
	class rhs_g_vog25;	
	class rhs_g_gdm40;
	class rhs_g_vg40md: rhs_g_gdm40                 __NO_BOUNCE;
	class rhs_g_vg40md_white: rhs_g_vog25           __NO_BOUNCE;
	class rhs_g_vg40md_green: rhs_g_vg40md_white    __NO_BOUNCE;
	class rhs_g_vg40md_red: rhs_g_vg40md_white      __NO_BOUNCE;
};