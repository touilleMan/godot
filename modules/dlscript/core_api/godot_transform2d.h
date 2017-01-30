#ifndef GODOT_TRANSFORM2D_H
#define GODOT_TRANSFORM2D_H

#include "../godot_core_api.h"

#ifdef __cplusplus
extern "C" {
#endif

void GDAPI godot_transform2d_new_identity(godot_transform2d *p_t);
void GDAPI godot_transform2d_new_elements(godot_transform2d *p_t, const godot_vector2 *p_a, const godot_vector2 *p_b, const godot_vector2 *p_c);
void GDAPI godot_transform2d_new(godot_transform2d *p_t, const godot_real p_rot, const godot_vector2 *p_pos);

godot_real GDAPI godot_transform2d_tdotx(const godot_transform2d *p_t, const godot_vector2 *p_v);
godot_real GDAPI godot_transform2d_tdoty(const godot_transform2d *p_t, const godot_vector2 *p_v);

#ifdef __cplusplus
}
#endif

#endif // GODOT_TRANSFORM2D_H
