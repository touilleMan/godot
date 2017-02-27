#ifndef GODOT_DLSCRIPT_INPUT_EVENT_H
#define GODOT_DLSCRIPT_INPUT_EVENT_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_input_event_new(godot_input_event *p_ie);

void GDAPI godot_input_event_destroy(godot_input_event *p_ie);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_INPUT_EVENT_H
