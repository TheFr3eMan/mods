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
	class Pistol_Base_F;
    class UGL_F;
	class Launcher_Base_F;

    class cannon_120mm;
    class rhs_weap_m256 : cannon_120mm {
		__AI_DISPERSION_THIRDCOEF;
    };
    class autocannon_30mm_CTWS;
    class RHS_weap_M242BC : autocannon_30mm_CTWS {
		__AI_DISPERSION_HALFCOEF;
    };
    class LMG_M200;
    class rhs_weap_m240veh : LMG_M200 {
		__AI_DISPERSION_COEF;
    };
    class gatling_30mm;
    class rhs_weap_M197 : gatling_30mm {
		__AI_DISPERSION_HALFCOEF;
    };
    class rhs_weap_M230 : rhs_weap_M197 {
		__AI_DISPERSION_HALFCOEF;
    };
    class HMG_127;
    class RHS_weap_gau19 : HMG_127 {
        __AI_DISPERSION_HALFCOEF;
    };
    class GMG_20mm;
    class RHS_MK19 : GMG_20mm {
        __AI_DISPERSION_COEF;
    };
    class weapon_Fighter_Gun20mm_AA;
    class rhsusf_M61A2 : weapon_Fighter_Gun20mm_AA {
		__AI_DISPERSION_HALFCOEF;
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

	class rhs_weap_XM2010_Base_F: Rifle_Base_F {
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUMSEMI_MODES(Mode_SemiAuto);
		__AI_DISPERSION_COEF;
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
		modes[] = {"Single", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUMSEMI_MODES(Mode_SemiAuto);
	};
	class rhs_weap_sr25 : rhs_weap_m14ebrri {
 		__AI_RIFLE_MEDIUMSEMI_MODES(Mode_SemiAuto);
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
};
