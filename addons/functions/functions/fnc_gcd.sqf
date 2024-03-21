#include "script_component.hpp"
/*
 * Author: JasperRab
 * Returns the Greatest Common Divisor (GCD).
 *
 * Arguments:
 * 0: a <NUMBER>
 * 1: b <NUMBER>
 *
 * Return Value:
 * Number of the GCD.
 *
 * Example:
 * [[bob, ted], false] call etr_ranks_functions_fnc_gcd
 *
 * Public: No
 */

params ["_a", "_b"];

if (_b isEqualTo 0) then {
    _a
} else {
    [_b, _a mod _b] call FUNC(gcd);
};