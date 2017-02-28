#ifndef GODOT_VARIANT_H
#define GODOT_VARIANT_H



#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#ifndef GODOT_CORE_API_GODOT_VARIANT_TYPE_DEFINED
typedef struct godot_variant {
	uint8_t _dont_touch_that[24];
} godot_variant;
#endif


#include "../godot_core_api.h"

void GDAPI godot_variant_new(godot_variant *p_v);

void GDAPI godot_variant_new_int(godot_variant *p_v, const godot_int *p_i);
void GDAPI godot_variant_new_string(godot_variant *p_v, const godot_string *p_s);
void GDAPI godot_variant_new_object(godot_variant *p_v, const godot_object **p_o);
void GDAPI godot_variant_new_vector2(godot_variant *p_v, const godot_vector2 *p_v2);
void GDAPI godot_variant_new_vector3(godot_variant *p_v, const godot_vector3 *p_v3);

void GDAPI godot_variant_get_int(const godot_variant *p_v, godot_int *p_i);
void GDAPI godot_variant_get_string(const godot_variant *p_v, godot_string *p_s);
void GDAPI godot_variant_get_object(const godot_variant *p_v, godot_object **p_o);
void GDAPI godot_variant_get_vector2(const godot_variant *p_v, godot_vector2 *p_v2);
void GDAPI godot_variant_get_vector3(const godot_variant *p_v, godot_vector3 *p_v3);

void GDAPI godot_variant_destroy(godot_variant *p_v);


#ifdef __cplusplus
}
#endif

#endif
