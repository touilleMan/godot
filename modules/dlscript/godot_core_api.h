/*************************************************************************/
/*  godot_c.h                                                            */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                    http://www.godotengine.org                         */
/*************************************************************************/
/* Copyright (c) 2007-2017 Juan Linietsky, Ariel Manzur.                 */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/
#ifndef GODOT_C_H
#define GODOT_C_H

#ifdef __cplusplus
extern "C" {
#endif


#if defined(GDAPI_BUILT_IN) || !defined(WINDOWS_ENABLED)
#define GDAPI
#elif defined(GDAPI_EXPORTS)
#define GDAPI __declspec(dllexport)
#else
#define GDAPI __declspec(dllimport)
#endif

#include <stdbool.h>
#include <stdint.h>

#define GODOT_API_VERSION 1



////// Error

enum godot_error {
	GODOT_OK,
	GODOT_FAILED, ///< Generic fail error
	GODOT_ERR_UNAVAILABLE, ///< What is requested is unsupported/unavailable
	GODOT_ERR_UNCONFIGURED, ///< The object being used hasnt been properly set up yet
	GODOT_ERR_UNAUTHORIZED, ///< Missing credentials for requested resource
	GODOT_ERR_PARAMETER_RANGE_ERROR, ///< Parameter given out of range (5)
	GODOT_ERR_OUT_OF_MEMORY, ///< Out of memory
	GODOT_ERR_FILE_NOT_FOUND,
	GODOT_ERR_FILE_BAD_DRIVE,
	GODOT_ERR_FILE_BAD_PATH,
	GODOT_ERR_FILE_NO_PERMISSION,	// (10)
	GODOT_ERR_FILE_ALREADY_IN_USE,
	GODOT_ERR_FILE_CANT_OPEN,
	GODOT_ERR_FILE_CANT_WRITE,
	GODOT_ERR_FILE_CANT_READ,
	GODOT_ERR_FILE_UNRECOGNIZED, // (15)
	GODOT_ERR_FILE_CORRUPT,
	GODOT_ERR_FILE_MISSING_DEPENDENCIES,
	GODOT_ERR_FILE_EOF,
	GODOT_ERR_CANT_OPEN, ///< Can't open a resource/socket/file
	GODOT_ERR_CANT_CREATE,		// (20)
	GODOT_ERR_QUERY_FAILED,
	GODOT_ERR_ALREADY_IN_USE,
	GODOT_ERR_LOCKED, ///< resource is locked
	GODOT_ERR_TIMEOUT,
	GODOT_ERR_CANT_CONNECT,		// (25)
	GODOT_ERR_CANT_RESOLVE,
	GODOT_ERR_CONNECTION_ERROR,
	GODOT_ERR_CANT_AQUIRE_RESOURCE,
	GODOT_ERR_CANT_FORK,
	GODOT_ERR_INVALID_DATA, ///< Data passed is invalid	(30)
	GODOT_ERR_INVALID_PARAMETER, ///< Parameter passed is invalid
	GODOT_ERR_ALREADY_EXISTS, ///< When adding, item already exists
	GODOT_ERR_DOES_NOT_EXIST, ///< When retrieving/erasing, it item does not exist
	GODOT_ERR_DATABASE_CANT_READ, ///< database is full
	GODOT_ERR_DATABASE_CANT_WRITE, ///< database is full	(35)
	GODOT_ERR_COMPILATION_FAILED,
	GODOT_ERR_METHOD_NOT_FOUND,
	GODOT_ERR_LINK_FAILED,
	GODOT_ERR_SCRIPT_FAILED,
	GODOT_ERR_CYCLIC_LINK,		// (40)
	GODOT_ERR_INVALID_DECLARATION,
	GODOT_ERR_DUPLICATE_SYMBOL,
	GODOT_ERR_PARSE_ERROR,
	GODOT_ERR_BUSY,
	GODOT_ERR_SKIP,			// (45)
	GODOT_ERR_HELP, ///< user requested help!!
	GODOT_ERR_BUG, ///< a bug in the software certainly happened, due to a double check failing or unexpected behavior.
	GODOT_ERR_PRINTER_ON_FIRE, /// the parallel port printer is engulfed in flames
	GODOT_ERR_OMFG_THIS_IS_VERY_VERY_BAD, ///< shit happens, has never been used, though
	GODOT_ERR_WTF = GODOT_ERR_OMFG_THIS_IS_VERY_VERY_BAD ///< short version of the above
};
typedef enum godot_error godot_error;


////// bool

typedef bool godot_bool;

#define GODOT_TRUE 1
#define GODOT_FALSE 0

/////// int

typedef int godot_int;

/////// real

typedef float godot_real;

typedef double godot_real64; // for Variant in 3.0

/////// Object (forward declared)
typedef void godot_object;

/////// String

#ifndef GODOT_CORE_API_GODOT_STRING_TYPE_DEFINED
typedef struct godot_string {
	uint8_t _dont_touch_that[8];
} godot_string;
#endif

#include "core_api/godot_string.h"


////// Vector2

#ifndef GODOT_CORE_API_GODOT_VECTOR2_TYPE_DEFINED
#define GODOT_CORE_API_GODOT_VECTOR2_TYPE_DEFINED
typedef struct godot_vector2 {
	uint8_t _dont_touch_that[8];
} godot_vector2;
#endif

#include "core_api/godot_vector2.h"

////// Vector3

#ifndef GODOT_CORE_API_GODOT_VECTOR3_TYPE_DEFINED
typedef struct godot_vector3 {
	uint8_t _dont_touch_that[12];
} godot_vector3;
#endif

#include "core_api/godot_vector3.h"


////// Transform2D

#ifndef GODOT_CORE_API_GODOT_TRANSFORM2D_TYPE_DEFINED
typedef struct godot_transform2d {
	uint8_t _dont_touch_that[24];
} godot_transform2d;
#endif

#include "core_api/godot_transform2d.h"


/////// Plane

#ifndef GODOT_CORE_API_GODOT_PLANE_TYPE_DEFINED
typedef struct godot_plane {
	uint8_t _dont_touch_that[16];
} godot_plane;
#endif

#include "core_api/godot_plane.h"

/////// Quat

#ifndef GODOT_CORE_API_GODOT_QUAT_TYPE_DEFINED
typedef struct godot_quat {
	uint8_t _dont_touch_that[16];
} godot_quat;
#endif

#include "core_api/godot_quat.h"

/////// Rect3

#ifndef GODOT_CORE_API_GODOT_RECT3_TYPE_DEFINED
typedef struct godot_rect3 {
	uint8_t _dont_touch_that[24];
} godot_rect3;
#endif

#include "core_api/godot_rect3.h"

/////// Basis

#ifndef GODOT_CORE_API_GODOT_BASIS_TYPE_DEFINED
typedef struct godot_basis {
	uint8_t _dont_touch_that[36];
} godot_basis;
#endif

#include "core_api/godot_basis.h"

/////// Transform

#ifndef GODOT_CORE_API_GODOT_TRANSFORM_TYPE_DEFINED
typedef struct godot_transform {
	uint8_t _dont_touch_that[48];
} godot_transform;
#endif

#include "core_api/godot_transform.h"

/////// Color

#ifndef GODOT_CORE_API_GODOT_COLOR_TYPE_DEFINED
typedef struct godot_color {
	uint8_t _dont_touch_that[16];
} godot_color;
#endif

#include "core_api/godot_color.h"

/////// Image

#include "core_api/godot_image.h"

/////// NodePath

#include "core_api/godot_node_path.h"

/////// RID

#include "core_api/godot_rid.h"

/////// InputEvent

#include "core_api/godot_input_event.h"

/////// Dictionary

#ifndef GODOT_CORE_API_GODOT_DICITIONARY_TYPE_DEFINED
typedef struct godot_dictionary {
	uint8_t _dont_touch_that[8];
} godot_dictionary;
#endif

#include "core_api/godot_dictionary.h"

/////// Array

#ifndef GODOT_CORE_API_GODOT_ARRAY_TYPE_DEFINED
typedef struct godot_array {
	uint8_t _dont_touch_that[8];
} godot_array;
#endif

#include "core_api/godot_array.h"



// single API file for Pool*Array
#include "core_api/godot_pool_arrays.h"






void GDAPI godot_object_destroy(godot_object **p_o);


////// Variant

#ifndef GODOT_CORE_API_GODOT_VARIANT_TYPE_DEFINED
typedef struct godot_variant {
	uint8_t _dont_touch_that[24];
} godot_variant;

#include "core_api/godot_variant.h"

#endif

////// InputEvent

/*

#define INPUT_EVENT_BUTTON_LEFT 1
#define INPUT_EVENT_BUTTON_RIGHT 2
#define INPUT_EVENT_BUTTON_MIDDLE 3
#define INPUT_EVENT_BUTTON_WHEEL_UP 4
#define INPUT_EVENT_BUTTON_WHEEL_DOWN 5
#define INPUT_EVENT_BUTTON_WHEEL_LEFT 6
#define INPUT_EVENT_BUTTON_WHEEL_RIGHT 7
#define INPUT_EVENT_BUTTON_MASK_LEFT (1<<(INPUT_EVENT_BUTTON_LEFT-1))
#define INPUT_EVENT_BUTTON_MASK_RIGHT (1<<(INPUT_EVENT_BUTTON_RIGHT-1))
#define INPUT_EVENT_BUTTON_MASK_MIDDLE (1<<(INPUT_EVENT_BUTTON_MIDDLE-1))

#define INPUT_EVENT_TYPE_NONE 0
#define INPUT_EVENT_TYPE_KEY 1
#define INPUT_EVENT_TYPE_MOUSE_MOTION 2
#define INPUT_EVENT_TYPE_MOUSE_BUTTON 3
#define INPUT_EVENT_TYPE_JOYPAD_MOTION 4
#define INPUT_EVENT_TYPE_JOYPAD_BUTTON 5
#define INPUT_EVENT_TYPE_SCREEN_TOUCH 6
#define INPUT_EVENT_TYPE_SCREEN_DRAG 7
#define INPUT_EVENT_TYPE_ACTION 8

typedef void* godot_input_event;


godot_input_event GDAPI godot_input_event_new();
godot_input_event GDAPI godot_input_event_copy(godot_input_event p_input_event);
void GDAPI godot_input_event_free(godot_input_event p_input_event);

int GDAPI godot_input_event_get_type(godot_input_event p_event);
int GDAPI godot_input_event_get_device(godot_input_event p_event);

godot_bool GDAPI godot_input_event_mod_has_alt(godot_input_event p_event);
godot_bool GDAPI godot_input_event_mod_has_ctrl(godot_input_event p_event);
godot_bool GDAPI godot_input_event_mod_has_command(godot_input_event p_event);
godot_bool GDAPI godot_input_event_mod_has_shift(godot_input_event p_event);
godot_bool GDAPI godot_input_event_mod_has_meta(godot_input_event p_event);

int GDAPI godot_input_event_key_get_scancode(godot_input_event p_event);
int GDAPI godot_input_event_key_get_unicode(godot_input_event p_event);
godot_bool GDAPI godot_input_event_key_is_pressed(godot_input_event p_event);
godot_bool GDAPI godot_input_event_key_is_echo(godot_input_event p_event);

int GDAPI godot_input_event_mouse_get_x(godot_input_event p_event);
int GDAPI godot_input_event_mouse_get_y(godot_input_event p_event);
int GDAPI godot_input_event_mouse_get_global_x(godot_input_event p_event);
int GDAPI godot_input_event_mouse_get_global_y(godot_input_event p_event);
int GDAPI godot_input_event_mouse_get_button_mask(godot_input_event p_event);

int GDAPI godot_input_event_mouse_button_get_button_index(godot_input_event p_event);
godot_bool GDAPI godot_input_event_mouse_button_is_pressed(godot_input_event p_event);
godot_bool GDAPI godot_input_event_mouse_button_is_doubleclick(godot_input_event p_event);

int GDAPI godot_input_event_mouse_motion_get_relative_x(godot_input_event p_event);
int GDAPI godot_input_event_mouse_motion_get_relative_y(godot_input_event p_event);

int GDAPI godot_input_event_mouse_motion_get_speed_x(godot_input_event p_event);
int GDAPI godot_input_event_mouse_motion_get_speed_y(godot_input_event p_event);

int GDAPI godot_input_event_joypad_motion_get_axis(godot_input_event p_event);
float GDAPI godot_input_event_joypad_motion_get_axis_value(godot_input_event p_event);

int GDAPI godot_input_event_joypad_button_get_button_index(godot_input_event p_event);
godot_bool GDAPI godot_input_event_joypad_button_is_pressed(godot_input_event p_event);
float GDAPI godot_input_event_joypad_button_get_pressure(godot_input_event p_event);


int GDAPI godot_input_event_screen_touch_get_index(godot_input_event p_event);
int GDAPI godot_input_event_screen_touch_get_x(godot_input_event p_event);
int GDAPI godot_input_event_screen_touch_get_y(godot_input_event p_event);
int GDAPI godot_input_event_screen_touch_is_pressed(godot_input_event p_event);

int GDAPI godot_input_event_screen_drag_get_index(godot_input_event p_event);
int GDAPI godot_input_event_screen_drag_get_x(godot_input_event p_event);
int GDAPI godot_input_event_screen_drag_get_y(godot_input_event p_event);
int GDAPI godot_input_event_screen_drag_get_relative_x(godot_input_event p_event);
int GDAPI godot_input_event_screen_drag_get_relative_y(godot_input_event p_event);
int GDAPI godot_input_event_screen_drag_get_speed_x(godot_input_event p_event);
int GDAPI godot_input_event_screen_drag_get_speed_y(godot_input_event p_event);

int GDAPI godot_input_event_is_action(godot_input_event p_event,char *p_action);
int GDAPI godot_input_event_is_action_pressed(godot_input_event p_event,char *p_action);

*/


////// Class
/*
char GDAPI **godot_class_get_list(); //get list of classes in array to array of strings, must be freed, use godot_list_free()

int GDAPI godot_class_get_base(char* p_class,char *p_base,int p_max_len);

char GDAPI **godot_class_get_method_list(char* p_class); //free with godot_list_free()
int GDAPI godot_class_method_get_argument_count(char* p_class,char *p_method);
int GDAPI godot_class_method_get_argument_type(char* p_class,char *p_method,int p_argument);
godot_variant GDAPI godot_class_method_get_argument_default_value(char* p_class,char *p_method,int p_argument);

char GDAPI **godot_class_get_constant_list(char* p_class); //free with godot_list_free()
int GDAPI godot_class_constant_get_value(char* p_class,char *p_constant);
*/



////// Object

/*typedef struct godot_object {
	uint8_t _dont_touch_that[136]; // will only be accessed by pointer, so it doesn't matter
} godot_object;
*/

////// Singleton API

godot_object *GDAPI godot_global_get_singleton(char* p_name); // result shouldn't be freed

////// MethodBind API

typedef struct godot_method_bind {
	uint8_t _dont_touch_that[1]; // TODO
} godot_method_bind;

godot_method_bind *GDAPI godot_method_bind_get_method(const char *p_classname, const char *p_methodname);
void GDAPI godot_method_bind_ptrcall(godot_method_bind *p_method_bind, godot_object *p_instance, const void **p_args, void *p_ret);

////// Script API

enum godot_method_rpc_mode {
	GODOT_METHOD_RPC_MODE_DISABLED,
	GODOT_METHOD_RPC_MODE_REMOTE,
	GODOT_METHOD_RPC_MODE_SYNC,
	GODOT_METHOD_RPC_MODE_MASTER,
	GODOT_METHOD_RPC_MODE_SLAVE,
};
typedef enum godot_method_rpc_mode godot_method_rpc_mode;

typedef struct godot_method_attributes {
	godot_method_rpc_mode rpc_type;
} godot_method_attributes;

typedef struct godot_property_attributes {
	godot_method_rpc_mode rset_type;

	godot_bool listed;
	godot_int type;
	godot_int hint;
	godot_string hint_string;
	godot_int usage;
	godot_variant default_value;
} godot_property_attributes;

typedef void* (godot_script_instance_func)(godot_object*); //passed an instance, return a pointer to your userdata
typedef void (godot_script_destroy_func)(godot_object*,void*); //passed an instance, please free your userdata

void GDAPI godot_script_register(const char* p_name,const char* p_base,godot_script_instance_func p_instance_func,godot_script_destroy_func p_free_func);


typedef GDAPI godot_variant (godot_script_func)(godot_object*,void*,godot_variant**,int); //instance,userdata,arguments,argument count. Return something or NULL. Arguments must not be freed.

void GDAPI godot_script_add_method(const char* p_name,const char* p_function_name,godot_method_attributes *p_attr, godot_script_func p_func);
void GDAPI godot_script_add_validated_method(const char* p_name,const char* p_function_name,godot_method_attributes *p_attr, godot_script_func p_func,int* p_arg_types,int p_arg_count,godot_variant** p_default_args,int p_default_arg_count);


typedef void (godot_set_property_func)(godot_object*,void*,godot_variant); //instance,userdata,value. Value must not be freed.
typedef godot_variant (godot_get_property_func)(godot_object*,void*); //instance,userdata. Return a value

void GDAPI godot_script_add_property(const char* p_name,const char* p_path,godot_property_attributes *p_attr, godot_set_property_func p_set_func,godot_get_property_func p_get_func);

////// System Functions

//using these will help Godot track how much memory is in use in debug mode
void GDAPI *godot_alloc(int p_bytes);
void GDAPI *godot_realloc(void* p_ptr,int p_bytes);
void GDAPI godot_free(void* p_ptr);


#ifdef __cplusplus
}
#endif


#endif // GODOT_C_H
