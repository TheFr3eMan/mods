
#include "script_component.hpp"
private _unit = _this select 0;
private _dangerCausedBy = _this select 1;
private _dangerCause = _this select 2;

if(_unit == leader _unit) then {
    _unit  setVariable [QGVAR(AT),time + GVAR(AT_INSIDE),false];
    _unit  setVariable [QGVAR(AD),GVAR(AD_INSIDE),false];
};

if(_dangerCause == 2) then {

    [_unit, "ducking"] call FUNC(pt_setStatusText);
    [_unit, true] call FUNC(pt_downPos);
    _unit  setVariable [QGVAR(DT),time + GVAR(DT_INSIDE),false];

}else {
    [_unit, "not ducking"] call FUNC(pt_setStatusText);
    _unit  setVariable [QGVAR(DT),time + GVAR(DT_INSIDE),false];
};