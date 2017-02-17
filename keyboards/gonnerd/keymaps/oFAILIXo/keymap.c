#include "gonnerd.h"

// Keymap layers
#define BASE_LAYER 0
#define FUNCTION_LAYER 1
#define GAMING_LAYER 2
#define SYSTEM_LAYER 3
#define SPACE_LAYER 4
// Key aliases
#define __x__ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
[BASE_LAYER] = KEYMAP_60(
    KC_ESC,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,              KC_MINS,    KC_EQL,    KC_BSLS,    KC_GRV,\
    KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,              KC_LBRC,    KC_RBRC,               TD(TD_DEL_CBSP),\
    OSL(1),        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    TD(TD_COLN_SCLN),  KC_QUOT,    __x__,                 KC_ENT,\
    OSM(MOD_LSFT), __x__,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,            KC_SLSH,    MT(MOD_LSFT,KC_RALT),  TO(2), \
    OSM(MOD_LCTL), KC_LGUI, OSM(MOD_LALT),                      LT(4, KC_SPC),                      KC_RALT,           KC_APP,     MO(3),                 KC_RCTL),

	
[FUNCTION_LAYER] = KEYMAP_60(
    KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,     KC_F10,   KC_F11,   KC_F12,   KC_TRNS,  KC_TRNS,\
    KC_TRNS,   KC_PGDN, KC_UP,   KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_UP,   KC_PGDN,   KC_PSCR,  KC_SLCK,  KC_PAUS,            KC_BSPC,\
    KC_TRNS,   KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT,  KC_DEL,   KC_INS,   __x__,              KC_TRNS,\
    KC_TRNS,   __x__,   KC_TRNS, KC_DEL,  KC_TRNS, KC_TRNS, KC_TRNS, KC_END,  KC_MUTE, KC_VOLD,   KC_VOLU,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
    KC_TRNS,   KC_TRNS, KC_TRNS,                        KC_BSPC,                                            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

	
[GAMING_LAYER] = KEYMAP_60( 
    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
    KC_CAPS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,__x__,  KC_TRNS,\
    KC_TRNS,__x__,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_UP,  KC_TRNS,\
    KC_TRNS,KC_TRNS,KC_TRNS,                        KC_SPC,                         KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT),

	
[SYSTEM_LAYER] = KEYMAP_60( 
    RESET,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
    KC_CAPS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,__x__,  KC_TRNS,\
    KC_TRNS,__x__,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
    KC_TRNS,KC_TRNS,KC_TRNS,                        KC_SPC,                         KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS),


[SPACE_LAYER] = KEYMAP_60( 
    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
    KC_TRNS,KC_TRNS,KC_TRNS,  KC_UP,KC_TRNS,KC_TRNS,KC_TRNS,KC_BTN1,KC_MS_U,KC_BTN2,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
    KC_CAPS,KC_BSPC,KC_LEFT,KC_DOWN,KC_RGHT,KC_TRNS,KC_TRNS,KC_MS_L,KC_MS_D,KC_MS_R,KC_DEL, KC_TRNS,__x__,  KC_TRNS,\
    KC_TRNS,__x__,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
    KC_TRNS,KC_TRNS,KC_TRNS,                        KC_SPC,                         KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS),
};

//Tap Dance Declarations
enum {
	TD_COLN_SCLN = 0,
	TD_DEL_CBSP,
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
//Tap once for Colon, twice for Semicolon
[TD_COLN_SCLN]  = ACTION_TAP_DANCE_DOUBLE(KC_COLN, KC_SCLN);
//Tap once for Del, twice for LCTL+BSPC
[TD_DEL_CBSP]  = ACTION_TAP_DANCE_DOUBLE(KC_DEL, LCTL(KC_BSPC))
// Other declarations would go here, separated by commas, if you have them
};

