#ifndef GODOT_DLSCRIPT_COLOR_H
#define GODOT_DLSCRIPT_COLOR_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_color_new(godot_color *p_color);
void GDAPI godot_color_destroy(godot_color *p_color);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_COLOR_H
