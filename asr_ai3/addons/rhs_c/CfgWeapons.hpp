class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

	#include "items.hpp"
	#include "uniforms.hpp"
	#include "vests.hpp"

    class Default;
    class rhs_weap_MASTERSAFE : Default {
        minRangeProbab = 0;
        midRangeProbab = 0;
        maxRangeProbab = 0;
    };

	class Rifle_Base_F;
    class Rifle_Short_Base_F;
	class Rifle_Long_Base_F;
	class Pistol_Base_F;
    class MGun;
    class UGL_F;
	class Launcher_Base_F;

    class cannon_120mm;
    class rhs_weap_m256 : cannon_120mm {
		__AI_DISPERSION_THIRDCOEF;
    };
    class autocannon_30mm_CTWS;
    class RHS_weap_M242BC : autocannon_30mm_CTWS {
		__AI_DISPERSION_THIRDCOEF;
    };
    class LMG_M200;
    class rhs_weap_m240veh : LMG_M200 {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_M197;
    class rhs_weap_M230 : rhs_weap_M197 {
		__AI_DISPERSION_THIRDCOEF;
    };
    class HMG_127;
    class RHS_weap_gau19 : HMG_127 {
        __AI_DISPERSION_THIRDCOEF;
    };
    class GMG_20mm;
    class RHS_MK19 : GMG_20mm {
        __AI_DISPERSION_THIRDCOEF;
    };
    class Cannon_30mm_Plane_CAS_02_F;
    class rhsusf_M61A2 : Cannon_30mm_Plane_CAS_02_F {
		__AI_DISPERSION_THIRDCOEF;
    };
    class gatling_30mm;
    class RHS_weap_zpl20 : gatling_30mm {
		__AI_DISPERSION_THIRDCOEF;
    };
    class PKT;
    class rhs_weap_pkt : PKT {
		__AI_DISPERSION_THIRDCOEF;
    };
    class LMG_RCWS;
    class rhs_weap_DSHKM : LMG_RCWS {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_nsvt : rhs_weap_DSHKM {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_kpvt : MGun {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_yakB : gatling_30mm {
		__AI_DISPERSION_THIRDCOEF;
    };
    class RHS_weap_Ags30 : GMG_20mm {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_pkm_tigr : rhs_weap_pkt {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_d81 : cannon_120mm {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_2a26 : rhs_weap_d81 {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_2a46_2 : rhs_weap_d81 {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_2a46m_2 : rhs_weap_d81 {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_2a46m : rhs_weap_2a46m_2 {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_2a46m_4 : rhs_weap_2a46m_2 {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_2a46m_5 : rhs_weap_2a46m_2 {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_2a42_base : autocannon_30mm_CTWS {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_2a70 : rhs_weap_d81 {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_2a75 : rhs_weap_d81 {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rhs_weap_2a28_base : cannon_120mm {
		__AI_DISPERSION_THIRDCOEF;
    };
    class rockets_Skyfire;
    class rhs_weap_s5 : rockets_Skyfire {
        __AI_DISPERSION_THIRDCOEF;
    };

    class RHS_SAFE_BASE : Rifle_Base_F {
        class Safe : Mode_SemiAuto {
            minRangeProbab = 0;
            midRangeProbab = 0;
            maxRangeProbab = 0;
        };
    };

	class GP25_Base: UGL_F {
		class Single: Mode_SemiAuto {
            __AI_ROF_GL_SINGLE;
        };
    };

    class rhs_weap_ak74m_Base_F : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_ak74m : rhs_weap_ak74m_Base_F {};
    class rhs_weap_asval : rhs_weap_ak74m {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
        __AI_DISPERSION_COEF;
    };
    class rhs_weap_ak105 : rhs_weap_ak74m {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };
    class rhs_weap_akm : rhs_weap_ak74m {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_ak103_base : rhs_weap_akm {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_ak104 : rhs_weap_ak103_base {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };
    class rhs_weap_ak103_1 : rhs_weap_ak103_base {
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_ak103_2 : rhs_weap_ak103_base {
		modes[] = {"Single", "Burst3", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,FullAuto);
    };
    class rhs_weap_ak74 : rhs_weap_ak74m {};
    class rhs_weap_aks74 : rhs_weap_ak74 {};
    class rhs_weap_aks74u : rhs_weap_aks74 {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_svd : rhs_weap_ak74m {
 		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_svdp : rhs_weap_svd {
 		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_orsis_Base_F : Rifle_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2", "AI_Single_far_optics2"};
		__AI_BIGSNIPER_MODES(Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };
    class pdw2000_base_F : Rifle_Short_Base_F {
        class Single;
        class FullAuto;
    };
    class hgun_PDW2000_F : pdw2000_base_F {};

    class rhs_weap_pp2000 : hgun_PDW2000_F {
        modes[] = {"Single", "FullAuto", "AI_Burst_close"};
		class Single: Single {
			__AI_ROF_SMG_SINGLE;
		};
		class FullAuto: FullAuto {
			__AI_ROF_SMG_FULLAUTO;
		};
		class AI_Burst_close: FullAuto {
			showToPlayer = 0;
            aiBurstTerminable = 1;
			burst = 4;
			__AI_ROF_SMG_BURST;
		};
    };
    class hgun_Rook40_F;
    class rhs_weap_pya : hgun_Rook40_F {
		__AI_ROF_PISTOL_SEMI;
    };
    class rhs_weap_makarov_pm : rhs_weap_pya {
		__AI_ROF_PISTOL_SEMI;
    };
    class rhs_pkp_base : Rifle_Long_Base_F {
		modes[] = {
            "FullAuto",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_pkp : rhs_pkp_base {};
    class rhs_weap_pkm : rhs_weap_pkp {
		modes[] = {
            "manual",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar"
        };
		__AI_MG_MODES(manual,FullAuto,manual);
    };
    class rhs_weap_rpk74m : rhs_weap_pkp {
		modes[] = {
            "manual", "Single",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far",
            "AI_far_optic1",
            "AI_far_optic2"
        };
		__AI_MG_MODES(manual,Mode_FullAuto,Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_rpg26 : Launcher_Base_F {
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 200;
		midRangeProbab = 0.8;
		maxRange = 400;
		maxRangeProbab = 0.1;
    };
    class rhs_weap_rpg7 : Launcher_Base_F {
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 200;
		midRangeProbab = 0.8;
		maxRange = 400;
		maxRangeProbab = 0.1;
    };

    class rhs_weap_kar98k_Base_F : Rifle_Base_F {
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_m38_Base_F : Rifle_Base_F {
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_m38 : rhs_weap_m38_Base_F {};
    class rhs_weap_m38_rail : rhs_weap_m38 {};
    class rhs_weap_mosin_sbr : rhs_weap_m38_rail {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };

	class rhs_weap_XM2010_Base_F: Rifle_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUMSEMI_MODES(Mode_SemiAuto);
		__AI_DISPERSION_COEF;
	};

    class rhs_weap_m70_base : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_m92 : rhs_weap_m70_base {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };
    class rhs_weap_m76 : rhs_weap_m70_base {
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_m21_base : rhs_weap_m70_base {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
	class rhs_weap_m21a_pr: rhs_weap_m21_base {};
    class rhs_weap_m21s : rhs_weap_m21_base {
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
    class rhs_weap_m21s_pr : rhs_weap_m21a_pr {
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };

    class SMG_01_Base : Rifle_Short_Base_F {
        class Single;
        class FullAuto;
    };
    class SMG_01_F : SMG_01_Base {};

    class rhs_weap_savz61 : SMG_01_F {
        modes[] = {"Single", "FullAuto", "AI_Burst_close"};
		class Single: Single {
			__AI_ROF_SMG_SINGLE;
		};
		class FullAuto: FullAuto {
			__AI_ROF_SMG_FULLAUTO;
		};
		class AI_Burst_close: FullAuto {
			showToPlayer = 0;
            aiBurstTerminable = 1;
			burst = 2;
            burstRangeMax = 7;
			__AI_ROF_SMG_BURST;
		};
    };
    class rhs_weap_savz58_base : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Burst_far", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_AK_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_Izh18 : Rifle_Base_F {
        class Single : Mode_SemiAuto {
            __AI_ROF_SHOTGUN_SEMI;
		};
    };
    class rhs_weap_stgw57_base : Rifle_Base_F {
 		modes[] = {"Single", "FullAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };

    class rhs_weap_tt33 : rhs_weap_pya {
        class Single : Mode_SemiAuto {
            __AI_ROF_PISTOL_SEMI;
		};
    };

    class RHSUSF_SAFE_BASE : Rifle_Base_F {
        class Safe : Mode_SemiAuto {
            minRangeProbab = 0;
            midRangeProbab = 0;
            maxRangeProbab = 0;
        };
    };

	class rhs_weap_M320_Base_F : Pistol_Base_F {
		modes[] = {"Single"};
		class Single : Mode_SemiAuto {
			__AI_ROF_GL_SINGLE;
		};
        __AI_DISPERSION_2XCOEF;
	};

    class rhs_weap_m24sws : rhs_weap_XM2010_Base_F {
 		__AI_RIFLE_MEDIUMSEMI_MODES(Single);
	};
    class rhs_weap_m40a5 : rhs_weap_XM2010_Base_F {
 		__AI_RIFLE_MEDIUMSEMI_MODES(Single);
	};

	class arifle_MX_Base_F;

	class rhs_weap_m4_Base : arifle_MX_Base_F {
		modes[] = {"Single", "Burst3", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
        class M203_GL : UGL_F {
            class Single : Mode_SemiAuto {
                __AI_ROF_GL_SINGLE;
            };
        };
        class M320_GL : M203_GL {
            class Single : Mode_SemiAuto {
                __AI_ROF_GL_SINGLE;
            };
        };
	};

	class rhs_weap_m4a1 : rhs_weap_m4_Base {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
	};
    class rhs_weap_m4a1_blockII : rhs_weap_m4a1 {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
	};
	class rhs_weap_mk18 : rhs_weap_m4a1_blockII {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
	};
	class rhs_weap_m16a4 : rhs_weap_m4_Base {
		modes[] = {"Single", "Burst3", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
	};
    class rhs_weap_hk416d10 : rhs_weap_m4a1 {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
	};
    class rhs_weap_hk416d145 : rhs_weap_hk416d10 {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
	};

    class rhs_weap_m27iar : rhs_weap_m4a1 {
		modes[] = {
            "Single", "FullAuto",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far",
            "AI_far_optic1",
            "AI_far_optic2"
        };
		__AI_MG_MODES(FullAuto,FullAuto,Single);
	};

    class LMG_Mk200_F;
    class rhs_weap_M249_base : LMG_Mk200_F {
		modes[] = {
            "FullAuto",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
	};

	class rhs_weap_saw_base : Rifle_Base_F {
		modes[] = {
            "FullAuto",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
		__AI_DISPERSION_COEF;
	};
	class rhs_weap_lmg_minimipara : rhs_weap_saw_base {
		__AI_MG_MODES(FullAuto,FullAuto,Mode_SemiAuto);
		__AI_DISPERSION_COEF;
	};

	class rhs_weap_m240_base : rhs_weap_M249_base {
		modes[] = {
            "manual",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(manual,Mode_FullAuto,manual);
		__AI_DISPERSION_COEF;
	};

	class srifle_EBR_F;
	class rhs_weap_m14ebrri : srifle_EBR_F {
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
	};
	class rhs_weap_sr25 : rhs_weap_m14ebrri {
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

    class GM6_base_F;
    class rhs_weap_M107_Base_F : GM6_base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2", "AI_Single_far_optics2"};
		__AI_BIGSNIPER_MODES(Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };

	class rhs_weap_M590_5RD : Rifle_Base_F {
		class Single : Mode_SemiAuto {
			__AI_ROF_SHOTGUN_SEMI;
		};
	};

    class rhs_weap_m32_Base_F : Rifle_Base_F {
		modes[] = {"Single"};
		class Single : Mode_SemiAuto {
			__AI_ROF_GL_SINGLE;
		};
		__AI_DISPERSION_2XCOEF;
    };

    class SMG_02_base_F : Rifle_Short_Base_F {
        class Single;
        class FullAuto;
    };

    class rhsusf_weap_MP7A1_base_f : SMG_02_base_F {
        modes[] = {"Single", "FullAuto", "AI_Burst_close"};
		class Single: Single {
			__AI_ROF_SMG_SINGLE;
		};
		class FullAuto: FullAuto {
			__AI_ROF_SMG_FULLAUTO;
		};
		class AI_Burst_close: FullAuto {
			showToPlayer = 0;
            aiBurstTerminable = 1;
			burst = 2;
            burstRangeMax = 10;
			__AI_ROF_SMG_BURST;
		};
		__AI_DISPERSION_COEF;
    };

	class rhs_weap_M136 : Launcher_Base_F {
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 200;
		midRangeProbab = 0.8;
		maxRange = 400;
		maxRangeProbab = 0.1;
	};

	class hgun_ACPC2_F;
	class rhsusf_weap_m1911a1 : hgun_ACPC2_F {
        class Single : Mode_SemiAuto {
            __AI_ROF_PISTOL_SEMI;
        };
	};

    class rhs_weap_scorpion : SMG_01_F {
        modes[] = {"Single", "FullAuto", "AI_Burst_close"};
		class Single: Single {
			__AI_ROF_SMG_SINGLE;
		};
		class FullAuto: FullAuto {
			__AI_ROF_SMG_FULLAUTO;
		};
		class AI_Burst_close: FullAuto {
			showToPlayer = 0;
            aiBurstTerminable = 1;
			burst = 2;
            burstRangeMax = 7;
			__AI_ROF_SMG_BURST;
		};
    };

    class rhs_weap_ag36_base : UGL_F {
        class Single : Mode_SemiAuto {
			__AI_ROF_GL_SINGLE;
        };
    };
    class rhs_weap_g36_base : Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
    class rhs_weap_g36c : rhs_weap_g36_base {
		modes[] = {"Single", "Burst2", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Mode_SemiAuto,Mode_FullAuto);
    };
    class rhs_weap_g36kv : rhs_weap_g36_base {
		modes[] = {"Single", "Burst2", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
    };

    class rhs_weap_m84 : Rifle_Long_Base_F {
		modes[] = {
            "FullAuto",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far", "AI_toofar",
            "AI_far_optic1", "AI_toofar_optic1",
            "AI_far_optic2", "AI_toofar_optic2"
        };
		__AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
		__AI_DISPERSION_COEF;
    };
};