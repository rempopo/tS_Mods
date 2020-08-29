class CfgPatches
{
	class tS_Magazines_Compatibility
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","cba_common"};
		author[] = {"Tactical Shift"};
		version = "1";
	};
};

class CfgMagazineWells
{
	class PK_762x54R
	{
		tS_mags[] =
		{
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"
		};
	};
	
	class CBA_762x54R_LINKS
	{
		tS_mags[] =
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR_7N13",
			"rhs_100Rnd_762x54mmR_7N26",
			"rhs_100Rnd_762x54mmR_7BZ3"
		};  
	};
	
	class CBA_556x45_MINIMI
	{
		tS_mags[] = 
		{
			"rhs_200rnd_556x45_M_SAW"
			,"rhs_200rnd_556x45_T_SAW"
			,"rhs_200rnd_556x45_B_SAW"
		};
	};
	
	class CBA_40mm_M203
	{
		tS_mags[] =
		{
			"rhs_mag_M441_HE",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M781_Practice",
			"rhs_mag_M397_HET",
			"rhs_mag_M4009",
			"rhs_mag_m576",
			"rhs_mag_M585_white",
			"rhs_mag_M661_green",
			"rhs_mag_M662_red",
			"rhs_mag_M713_red",
			"rhs_mag_M714_white",
			"rhs_mag_M715_green",
			"rhs_mag_M716_yellow"
		};
	};
	
	class CBA_40mm_GP
	{
		tS_mags[] = 
		{
			"rhs_VOG25",
			"rhs_VOG25p",
			"rhs_vg40tb",
			"rhs_vg40sz",
			"rhs_vg40op_white",
			"rhs_vg40op_green",
			"rhs_vg40op_red",
			"rhs_GRD40_white",
			"rhs_GRD40_green",
			"rhs_GRD40_red",
			"rhs_VG40MD",
			"rhs_VG40MD_White",
			"rhs_VG40MD_Green",
			"rhs_VG40MD_Red",
			"rhs_GDM40"
		};
	};
};