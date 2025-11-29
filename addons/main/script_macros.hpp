#include "\z\ace\addons\main\script_macros.hpp"

#define AUTHOR "European Tactical Realism"

// ace macros
#define ACE_GVAR(var1,var2) TRIPLES(ace,var1,var2)
#define ACE_QGVAR(var1,var2) QUOTE(ACE_GVAR(var1,var2))
#define ACE_FUNC_INNER(var1,var2) TRIPLES(DOUBLES(ace,var1),fnc,var2)
#define ACE_FUNC(var1,var2) ACE_FUNC_INNER(var1,var2)
#define ACE_QFUNC(var1,var2) QUOTE(ACE_FUNC(var1,var2))
