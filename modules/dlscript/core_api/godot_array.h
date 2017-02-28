#ifndef GODOT_DLSCRIPT_ARRAY_H
#define GODOT_DLSCRIPT_ARRAY_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#ifndef GODOT_CORE_API_GODOT_ARRAY_TYPE_DEFINED
typedef struct godot_array {
	uint8_t _dont_touch_that[8];
} godot_array;
#endif

#include "../godot_core_api.h"

void GDAPI godot_array_new(godot_array *p_arr);

void GDAPI godot_array_destroy(godot_array *p_arr);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_ARRAY_H
