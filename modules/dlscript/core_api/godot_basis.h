#ifndef GODOT_DLSCRIPT_BASIS_H
#define GODOT_DLSCRIPT_BASIS_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_basis_new(godot_basis *p_basis);

void GDAPI godot_basis_destroy(godot_string *p_basis);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_BASIS_H
