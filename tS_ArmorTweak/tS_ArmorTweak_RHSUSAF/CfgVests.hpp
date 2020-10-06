
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};


	class rhsusf_iotv_ocp_base: Vest_Camo_Base
	{
		__VEST_H_Neck;
	};
	class rhsusf_iotv_ocp_Grenadier: rhsusf_iotv_ocp_base
	{
		__VEST_H_Neck;
	};
	class rhsusf_iotv_ocp_Rifleman: rhsusf_iotv_ocp_base
	{
		__VEST_H_Neck;
	};
	class rhsusf_iotv_ocp_SAW: rhsusf_iotv_ocp_base
	{
		__VEST_H_Neck;
	};
	class rhsusf_iotv_ocp_Squadleader: rhsusf_iotv_ocp_base
	{
		__VEST_H_Neck;
	};
	class rhsusf_iotv_ocp_Teamleader: rhsusf_iotv_ocp_base
	{
		__VEST_H_Neck;
	};

	class rhsusf_iotv_ucp_base: rhsusf_iotv_ocp_base
	{
		class ItemInfo;
	}
	class rhsusf_iotv_ucp_Grenadier: rhsusf_iotv_ucp_base
	{
		__VEST_H_Neck;
	};
	class rhsusf_iotv_ucp_Medic: rhsusf_iotv_ucp_base
	{
		__VEST_H_Neck;
	};
	class rhsusf_iotv_ucp_Repair: rhsusf_iotv_ucp_base
	{
		__VEST_H_Neck;
	};
	class rhsusf_iotv_ucp_Rifleman: rhsusf_iotv_ucp_base
	{
		__VEST_H_Neck;
	};
	class rhsusf_iotv_ucp_SAW: rhsusf_iotv_ucp_base
	{
		__VEST_H_Neck;
	};
	class rhsusf_iotv_ucp_Squadleader: rhsusf_iotv_ucp_base
	{
		__VEST_H_Neck;
	};
	class rhsusf_iotv_ucp_Teamleader: rhsusf_iotv_ucp_base
	{
		__VEST_H_Neck;
	};


	class rhsusf_spc: rhsusf_iotv_ocp_base
	{
		__VEST_M_Plates;
	};
	class rhsusf_spc_rifleman: rhsusf_spc
	{
		__VEST_M_Plates;
	};
	class rhsusf_spc_iar: rhsusf_spc_rifleman
	{
		__VEST_M_Plates;
	};
	class rhsusf_spc_corpsman: rhsusf_spc_rifleman
	{
		__VEST_M_Plates;
	};
	class rhsusf_spc_crewman: rhsusf_spc_rifleman
	{
		__VEST_M_Plates;
	};
	class rhsusf_spc_light: rhsusf_spc_rifleman
	{
		__VEST_M_Plates;
	};
	class rhsusf_spc_marksman: rhsusf_spc_rifleman
	{
		__VEST_M_Plates;
	};
	class rhsusf_spc_mg: rhsusf_spc_rifleman
	{
		__VEST_M_Plates;
	};
	class rhsusf_spc_sniper: rhsusf_spc_rifleman
	{
		__VEST_M_Plates;
	};
	class rhsusf_spc_squadleader: rhsusf_spc_rifleman
	{
		__VEST_M_Plates;
	};

	class rhsusf_spcs_ocp: rhsusf_iotv_ocp_base
	{
		__VEST_L_Plates;
	};

	class rhsusf_mbav: rhsusf_iotv_ocp_base
	{
		__VEST_L_Plates;
	};
	class rhsusf_mbav_light: rhsusf_mbav
	{
		__VEST_L_Plates;
	};
	class rhsusf_mbav_grenadier: rhsusf_mbav_light
	{
		__VEST_L_Plates;
	};

	class rhsusf_plateframe_sapi: rhsusf_iotv_ocp_base
	{
		__VEST_EL_SAPI;
	};
	class rhsusf_plateframe_light: rhsusf_plateframe_sapi
	{
		__VEST_EL;
	};
	class rhsusf_plateframe_rifleman: rhsusf_plateframe_sapi
	{
		__VEST_EL_SAPI;
	};
