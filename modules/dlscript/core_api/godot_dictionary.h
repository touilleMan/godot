#ifndef GODOT_DLSCRIPT_DICTIONARY_H
#define GODOT_DLSCRIPT_DICTIONARY_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#ifndef GODOT_CORE_API_GODOT_DICITIONARY_TYPE_DEFINED
typedef struct godot_dictionary {
	uint8_t _dont_touch_that[8];
} godot_dictionary;
#endif


#include "../godot_core_api.h"

void GDAPI godot_dictionary_new(godot_dictionary *p_dict);

void GDAPI godot_dictionary_destroy(godot_dictionary *p_dict);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_DICTIONARY_H
