#ifndef GODOT_DLSCRIPT_POOL_ARRAYS_H
#define GODOT_DLSCRIPT_POOL_ARRAYS_H

#ifdef __cplusplus
extern "C" {
#endif


/////// PoolByteArray

#ifndef GODOT_CORE_API_GODOT_POOL_BYTE_ARRAY_TYPE_DEFINED
typedef struct godot_pool_byte_array {
	uint8_t _dont_touch_that[8];
} godot_pool_byte_array;
#endif

/////// PoolIntArray

#ifndef GODOT_CORE_API_GODOT_POOL_INT_ARRAY_TYPE_DEFINED
typedef struct godot_pool_int_array {
	uint8_t _dont_touch_that[8];
} godot_pool_int_array;
#endif

/////// PoolRealArray

#ifndef GODOT_CORE_API_GODOT_POOL_REAL_ARRAY_TYPE_DEFINED
typedef struct godot_pool_real_array {
	uint8_t _dont_touch_that[8];
} godot_pool_real_array;
#endif

/////// PoolStringArray

#ifndef GODOT_CORE_API_GODOT_POOL_STRING_ARRAY_TYPE_DEFINED
typedef struct godot_pool_string_array {
	uint8_t _dont_touch_that[8];
} godot_pool_string_array;
#endif

/////// PoolVector2Array

#ifndef GODOT_CORE_API_GODOT_POOL_VECTOR2_ARRAY_TYPE_DEFINED
typedef struct godot_pool_vector2_array {
	uint8_t _dont_touch_that[8];
} godot_pool_vector2_array;
#endif

/////// PoolVector3Array

#ifndef GODOT_CORE_API_GODOT_POOL_VECTOR3_ARRAY_TYPE_DEFINED
typedef struct godot_pool_vector3_array {
	uint8_t _dont_touch_that[8];
} godot_pool_vector3_array;
#endif

/////// PoolColorArray

#ifndef GODOT_CORE_API_GODOT_POOL_COLOR_ARRAY_TYPE_DEFINED
typedef struct godot_pool_color_array {
	uint8_t _dont_touch_that[8];
} godot_pool_color_array;
#endif

#include "../godot_core_api.h"

// byte

void GDAPI godot_pool_byte_array_new(godot_pool_byte_array *p_pba);

void GDAPI godot_pool_byte_array_destroy(godot_pool_byte_array *p_pba);

// int

void GDAPI godot_pool_int_array_new(godot_pool_int_array *p_pia);

void GDAPI godot_pool_int_array_destroy(godot_pool_int_array *p_pia);

// real

void GDAPI godot_pool_real_array_new(godot_pool_real_array *p_pra);

void GDAPI godot_pool_real_array_destroy(godot_pool_real_array *p_pra);

// string

void GDAPI godot_pool_string_array_new(godot_pool_string_array *p_psa);

void GDAPI godot_pool_string_array_destroy(godot_pool_string_array *p_psa);

// vector2

void GDAPI godot_pool_vector2_array_new(godot_pool_vector2_array *p_pv2a);

void GDAPI godot_pool_vector2_array_destroy(godot_pool_vector2_array *p_pv2a);

// vector3

void GDAPI godot_pool_vector3_array_new(godot_pool_vector3_array *p_pv3a);

void GDAPI godot_pool_vector3_array_destroy(godot_pool_vector3_array *p_pv3a);

// color

void GDAPI godot_pool_color_array_new(godot_pool_color_array *p_pca);

void GDAPI godot_pool_color_array_destroy(godot_pool_color_array *p_pca);

#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_POOL_ARRAYS_H
