#include "godot_variant.h"

#include "../godot_core_api.h"

#include "core/variant.h"

#ifdef __cplusplus
extern "C" {
#endif

void _variant_api_anchor() {

}

void GDAPI godot_variant_new(godot_variant *p_v) {
	Variant *v = (Variant *) p_v;
	memnew_placement(v, Variant);
	*v = Variant();
}

void GDAPI godot_variant_new_string(godot_variant *p_v, const godot_string *p_s) {
	Variant *v = (Variant *) p_v;
}

void GDAPI godot_variant_new_object(godot_variant *p_v, const godot_object **p_o) {
	Variant *v = (Variant *) p_v;
}

void GDAPI godot_variant_new_vector2(godot_variant *p_v, const godot_vector2 *p_v2) {
	Variant *v = (Variant *) p_v;
}

void GDAPI godot_variant_new_vector3(godot_variant *p_v, const godot_vector3 *p_v3) {
	Variant *v = (Variant *) p_v;
}



void GDAPI godot_variant_get_int(const godot_variant *p_v, godot_int *p_i) {
	Variant *v = (Variant *) p_v;
	godot_int *i = (godot_int *) p_i;
	*i = (int) *v;
}

void GDAPI godot_variant_get_string(const godot_variant *p_v, godot_string *p_s) {
	Variant *v = (Variant *) p_v;
	String *s = (String *) p_s;
	*s = (String) *v;
}

void GDAPI godot_variant_get_object(const godot_variant *p_v, godot_object **p_o) {
	Variant *v = (Variant *) p_v;
	*p_o = (godot_object *) ((Object*) *v);
}

void GDAPI godot_variant_get_vector2(const godot_variant *p_v, godot_vector2 *p_v2) {
	Variant *v = (Variant *) p_v;
	Vector2 *v2 = (Vector2 *) p_v2;
	*v2 = *v;
}

void GDAPI godot_variant_get_vector3(const godot_variant *p_v, godot_vector3 *p_v3) {
	Variant *v = (Variant *) p_v;
}



void GDAPI godot_variant_destroy(godot_variant *p_v) {
	(*(Variant *) p_v).~Variant();
}


#ifdef __cplusplus
}
#endif
