
#include "script_component.hpp"
private ["_unit", "_dangerCause", "_dangerCausedBy"];
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;
[_unit, _dangerCausedBy, _dangerCause] spawn {

private ["_unit", "_dangerCause", "_dangerCausedBy", "_grp", "_exit", "_dir", "_oldDir", "_dirDist"];
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;
_grp = group _unit;
        //format ["react danger, reacting on %1, against %2, because %3", _unit, _dangerCausedBy, _dangerCause] call BIS_fnc_log;
//format ["danger, was asleep %1, was ready %2 and time time %3", _unit getVariable[QGVAR(PT_SLEEP), 0], unitReady _unit, time > (_unit getVariable [QGVAR(DT),0])] call BIS_fnc_log;
 
 
if (_unit getVariable[QGVAR(PT_SLEEP), 0] == 0 && {!isPlayer _unit} && {time > (_unit getVariable [QGVAR(DT),0])}) then {
    
    _unit setVariable [QGVAR(PT_SLEEP), 1, false];
    //sleep half a second to let the AI find its attacker before making decisions
    sleep 0.5;
    
    _unit setVariable [QGVAR(PT_SLEEP), 0, false];
    //if the AI knows where we are within 6m (AIs usually know where you are within 5m, or they don't know where in which case it returns 1000m)
    if(_unit == leader _unit  && ((_unit targetKnowledge _dangerCausedBy select 5) < 6)) then {
        _unit  setVariable [QGVAR(ATTACKER_POS),(getPosASL _dangerCausedBy),false];
    };
    
    //This is wacky
    //so every 5 seconds or so react danger will be called with either enemy detected or enemy near.
    //in order to prevent overcalling we will save the direction that the enemy last came from and stop processing if it is too close to the 
    //dir this time
    _exit = false;
    _oldDir = _unit getVariable  [QGVAR(DANGER_DIR), 361];
    _dir = [_unit, _dangerCausedBy] call BIS_fnc_dirTo;
    if(_oldDir != 361 && (_dangerCause == 0 || _dangerCause == 3)) then {
        _dirDist = (abs (_dir - _oldDir)) % 360;
        if(_dirDist > 180) then {
            _dirDist = 360 - _dirDist;
        };
        
        if(_dirDist < GVAR(ALLOWABLE_ANGLE_FOR_IGNORE)) then {
            _exit = true;
        };
        
    };
    
    
    if(_exit) exitWith {
    };
    
    _unit setVariable [QGVAR(DANGER_DIR),_dir,false];
    
    if(_unit call FUNC(isUnderRoof)) then {
        //format ["inStruct"] call BIS_fnc_log;
        [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_reactDanger_inStruct);
    } else {
        //format ["outStruct"] call BIS_fnc_log;
        [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_reactDanger_outStruct);
    };

    if(_unit == leader _unit && _unit getVariable [QGVAR(ATK_PEND), 0] == 0 && ((_unit targetKnowledge _dangerCausedBy select 5) < 6)) then {
        _unit  setVariable [QGVAR(ATK_PEND),1,false];
        //format ["attackCalled"] call BIS_fnc_log;
        [_unit, getPosATL _dangerCausedBy] call FUNC(pt_reactDanger_attack);
    };
};
};
