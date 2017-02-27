#ifndef GODOT_DLSCRIPT_QUAT_H
#define GODOT_DLSCRIPT_QUAT_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_quat_new(godot_quat *p_quat);

void GDAPI godot_quat_destroy(godot_string *p_quat);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_QUAT_H
