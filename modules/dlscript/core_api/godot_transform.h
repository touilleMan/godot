#ifndef GODOT_DLSCRIPT_TRANSFORM_H
#define GODOT_DLSCRIPT_TRANSFORM_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_transform_new(godot_transform *p_trans);

void GDAPI godot_transform_destroy(godot_transform *p_trans);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_TRANSFORM_H
