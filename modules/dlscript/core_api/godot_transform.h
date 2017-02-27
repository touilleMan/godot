#ifndef GODOT_DLSCRIPT_TRANSFORM_H
#define GODOT_DLSCRIPT_TRANSFORM_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_transform_new(godot_transform *p_trans);
void GDAPI godot_transform_new_with_basis(godot_transform *p_trans, const godot_basis *p_basis);
void GDAPI godot_transform_new_with_basis_origin(godot_transform *p_trans, const godot_basis *p_basis, const godot_vector3 *p_origin);

godot_basis GDAPI *godot_transform_get_basis(godot_transform *p_trans);
godot_vector3 GDAPI *godot_transform_get_origin(godot_transform *p_trans);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_TRANSFORM_H
