#ifndef GODOT_DLSCRIPT_IMAGE_H
#define GODOT_DLSCRIPT_IMAGE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../godot_core_api.h"

void GDAPI godot_image_new(godot_image *p_img);

void GDAPI godot_image_destroy(godot_image *p_img);


#ifdef __cplusplus
}
#endif

#endif // GODOT_DLSCRIPT_IMAGE_H
