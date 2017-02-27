#ifndef GODOT_DLSCRIPT_COLOR_H
#define GODOT_DLSCRIPT_COLOR_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_color_new(godot_color *p_color);
void GDAPI godot_color_new_rgba(godot_color *p_color, const godot_real r, const godot_real g, const godot_real b, const godot_real a);

uint32_t GDAPI godot_color_get_32(const godot_color *p_color);

float GDAPI *godot_color_index(godot_color *p_color, const godot_int idx);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_COLOR_H
