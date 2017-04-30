class Extended_PreInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_preInit));
};

class Extended_PostInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_postInit));
};

class Extended_InitPost_EventHandlers {
	class SoldierWB {
		class ADDON {
            serverInit = QUOTE((GVAR(cfgQ)) pushBack (_this select 0));
		};
	};
	class SoldierEB {
		class ADDON {
            serverInit = QUOTE((GVAR(cfgQ)) pushBack (_this select 0));
		};
	};
	class SoldierGB {
		class ADDON {
            serverInit = QUOTE((GVAR(cfgQ)) pushBack (_this select 0));
		};
	};
	class LandVehicle {
		class ADDON {
            serverInit = QUOTE((_this select 0) call FUNC(pt_vehicle_setup));
		};
	};
};

class Extended_Killed_EventHandlers {
	class SoldierWB {
		class ADDON {
			killed = QUOTE(_this spawn FUNC(killedEH));
		};
	};
	class SoldierEB {
		class ADDON {
			killed = QUOTE(_this spawn FUNC(killedEH));
		};
	};
	class SoldierGB {
		class ADDON {
			killed = QUOTE(_this spawn FUNC(killedEH));
		};
	};
};

class Extended_Hit_EventHandlers {
	class SoldierWB {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
	class SoldierEB {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
	class SoldierGB {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
    class StaticWeapon {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
	class LandVehicle
	{
		class ADDON
		{
			hit=QUOTE(_this call FUNC(pt_handleHitVehicle));
		};
	};
};

class Extended_Explosion_EventHandlers {
	class SoldierWB {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
	class SoldierEB {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
	class SoldierGB {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
	class StaticWeapon {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
};

class Extended_InventoryClosed_EventHandlers {
	class SoldierWB {
		ADDON = QUOTE(_this call FUNC(inventoryClosed));
	};
	class SoldierEB {
		ADDON = QUOTE(_this call FUNC(inventoryClosed));
	};
	class SoldierGB {
		ADDON = QUOTE(_this call FUNC(inventoryClosed));
	};
};

class Extended_Take_EventHandlers {
	class SoldierWB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
	class SoldierEB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
	class SoldierGB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
};
class Extended_Put_EventHandlers {
	class SoldierWB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
	class SoldierEB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
	class SoldierGB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
};
