#ifndef GODOT_DLSCRIPT_NODE_PATH_H
#define GODOT_DLSCRIPT_NODE_PATH_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_node_path_new(godot_node_path *p_np);

void GDAPI godot_node_path_destroy(godot_node_path *p_np);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_NODE_PATH_H
