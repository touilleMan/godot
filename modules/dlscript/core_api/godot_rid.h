#ifndef GODOT_DLSCRIPT_RID_H
#define GODOT_DLSCRIPT_RID_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_rid_new(godot_rid *p_rid);

void GDAPI godot_rid_destroy(godot_rid *p_rid);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_RID_H
