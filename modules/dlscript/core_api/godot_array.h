#ifndef GODOT_DLSCRIPT_ARRAY_H
#define GODOT_DLSCRIPT_ARRAY_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_array_new(godot_array *p_arr);

void GDAPI godot_array_destroy(godot_array *p_arr);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_ARRAY_H
