#ifndef GODOT_DLSCRIPT_DICTIONARY_H
#define GODOT_DLSCRIPT_DICTIONARY_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_dictionary_new(godot_dictionary *p_dict);

void GDAPI godot_dictionary_destroy(godot_dictionary *p_dict);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_DICTIONARY_H
