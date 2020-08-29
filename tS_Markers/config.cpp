class CfgPatches
{
	class tS_Markers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		magazines[] = {};
		ammo[] = {};
		
		version = "V0.1";
		author = "Tactical Shift";
	};
};

class CfgMarkers {
	class mil_objective;
	class mrk_ts_abf : mil_objective {
		name = "ABF";
		icon = "\ts_markers\paa\ts_abf.paa";
		shadow = true;
		scope = 2;
	};
	class mrk_ts_bof : mil_objective {
		name = "BOF";
		icon = "\ts_markers\paa\ts_bof.paa";
		shadow = true;
		scope = 2;
	};
	class mrk_ts_fup : mil_objective {
		name = "FUP";
		icon = "\ts_markers\paa\ts_fup.paa";
		shadow = false;
		scope = 2;
	};
	class mrk_ts_wp : mil_objective {
		name = "WP";
		icon = "\ts_markers\paa\ts_wp.paa";
		shadow = false;
		scope = 2;
	};
	class mrk_ts_cp : mil_objective {
		name = "CP";
		icon = "\ts_markers\paa\ts_cp.paa";
		shadow = false;
		scope = 2;
	};
	class mrk_ts_trp : mil_objective {
		name = "TRP";
		icon = "\ts_markers\paa\ts_trp.paa";
		shadow = false;
		scope = 2;
	};
	class mrk_ts_desc : mil_objective {
		name = "DESC";
		icon = "\ts_markers\paa\ts_desc.paa";
		shadow = false;
		scope = 2;
	};
};
