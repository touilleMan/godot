#ifndef GODOT_TRANSFORM2D_H
#define GODOT_TRANSFORM2D_H

#include "../godot_core_api.h"

#ifdef __cplusplus
extern "C" {
#endif

void GDAPI godot_transform2d_new_identity(godot_transform2d *p_t);
void GDAPI godot_transform2d_new_elements(godot_transform2d *p_t, const godot_vector2 *p_a, const godot_vector2 *p_b, const godot_vector2 *p_c);
void GDAPI godot_transform2d_new(godot_transform2d *p_t, const godot_real p_rot, const godot_vector2 *p_pos);

/*
godot_real GDAPI godot_transform2d_tdotx(const godot_transform2d *p_t, const godot_vector2 *p_v);
godot_real GDAPI godot_transform2d_tdoty(const godot_transform2d *p_t, const godot_vector2 *p_v);
*/

godot_vector2 const GDAPI *godot_transform2d_const_index(const godot_transform2d *p_t, const godot_int p_idx);
godot_vector2 GDAPI *godot_transform2d_index(godot_transform2d *p_t, const godot_int p_idx);

godot_vector2 GDAPI godot_transform2d_get_axis(const godot_transform2d *p_t, const godot_int p_axis);
void GDAPI godot_transform2d_set_axis(godot_transform2d *p_t, const godot_int p_axis, const godot_vector2 *p_vec);

/*
void GDAPI godot_transform2d_invert(godot_transform2d *p_t);
godot_transform2d GDAPI godot_transform2d_inverse(const godot_transform2d *p_t);
*/


// @Incomplete
// I feel like it should be enough to expose get and set, the whole logic can be done in the bindings.

#ifdef __cplusplus
}
#endif

#endif // GODOT_TRANSFORM2D_H
