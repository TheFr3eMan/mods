class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

	#include "items.hpp"

	class Rifle_Base_F;
    //class Rifle_Short_Base_F : Rifle_Base_F {};

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
    class rhs_weap_m21s : rhs_weap_m21_base {
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
    class rhs_weap_m21a_pr : rhs_weap_m21_base {};
    class rhs_weap_m21s_pr : rhs_weap_m21a_pr {
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
    class UGL_F;
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

    class rhs_weap_g36a1 : rhs_weap_g36_base {};
    class rhs_weap_g36a1_ag36 : rhs_weap_g36a1 {};

    class rhs_weap_mg36 : rhs_weap_g36_base {
		modes[] = {
            "Single", "FullAuto",
            "AI_long", "AI_close", "AI_short", "AI_medium", "AI_far",
            "AI_far_optic1",
            "AI_far_optic2"
        };
		__AI_MG_MODES(FullAuto,FullAuto,Single);
    };
    class rhs_weap_g36ka1 : rhs_weap_g36a1 {
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
    class rhs_weap_g36c : rhs_weap_g36_base {
		modes[] = {"Single", "Burst2", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2"};
		__AI_RIFLE_SMALL_CQB_MODES(Mode_SemiAuto,Mode_FullAuto);
    };

    class rhs_weap_g36e1 : rhs_weap_g36a1 {
		modes[] = {"Single", "Burst2", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
    };
    class rhs_weap_g36e1_ag36 : rhs_weap_g36a1_ag36 {
		modes[] = {"Single", "Burst2", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
    };
    class rhs_weap_g36ke1 : rhs_weap_g36ka1 {
		modes[] = {"Single", "Burst2", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
    };
    class rhs_weap_g36kv;
    class rhs_weap_g36ka1_ksk : rhs_weap_g36kv {
		modes[] = {"Single", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
    };

    class rhs_weap_g36_mlic : rhs_weap_g36_base {
		modes[] = {"Single", "Burst2", "FullAuto", "AI_Burst_close", "AI_Single_optics1", "AI_Single_optics2", "AI_far"};
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
    class rhs_weap_g36k_mlic : rhs_weap_g36_mlic {
		__AI_RIFLE_SMALL_MODES(Single,FullAuto);
    };
    class rhs_weap_g36c_mlic : rhs_weap_g36_mlic {
		__AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
    };

    class Rifle_Long_Base_F;
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