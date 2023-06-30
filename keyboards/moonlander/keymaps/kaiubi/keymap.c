#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  BR_LSPO,
  BR_RSPC,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_26,
  DANCE_27,
  DANCE_28,
  DANCE_29,
  DANCE_30,
  DANCE_31,
  DANCE_32,
  DANCE_33,
  DANCE_34,
  DANCE_35,
  DANCE_36,
  DANCE_37,
  DANCE_38,
  DANCE_39,
  DANCE_40,
  DANCE_41,
  DANCE_42,
  DANCE_43,
  DANCE_44,
  DANCE_45,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         TO(6),
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_MINUS,       KC_UNDS,
    KC_BSPACE,      KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           KC_TRANSPARENT,                                                                 KC_DELETE,      KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_ENTER,
    KC_LSHIFT,      KC_Z,           KC_X,           TD(DANCE_0),    KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       BR_KPDT,        BR_SCLN,        TD(DANCE_1),
    KC_LCTRL,       BR_QUOT,        KC_TRANSPARENT, BR_DQT,         MO(1),          MO(5),                                                                                                          TD(DANCE_3),    KC_SPACE,       KC_EQUAL,       KC_RABK,        KC_LABK,        TD(DANCE_2),
    MO(2),          MO(3),          KC_LGUI,                        KC_LGUI,        KC_LALT,        KC_LSHIFT
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        BR_DEG,                                         BR_FORD,        KC_AMPR,        KC_PLUS,        KC_ASTR,        TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),
    KC_BSPACE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, BR_LBRC,        BR_RBRC,        KC_LPRN,        KC_RPRN,        BR_PIPE,                                        BR_COLN,        BR_LCBR,        BR_RCBR,        KC_TRANSPARENT, BR_QUES,        TD(DANCE_7),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LCTRL
  ),
  [2] = LAYOUT_moonlander(
    LGUI(LSFT(KC_E)),LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LCTL(KC_4),     LCTL(KC_5),     LSFT(KC_W),                                     TD(DANCE_14),   KC_NO,          LGUI(KC_EQUAL), LGUI(KC_MINUS), KC_NO,          KC_NO,          KC_NO,
    LGUI(KC_TAB),   LGUI(KC_Q),     LGUI(KC_W),     LCTL(KC_TAB),   TD(DANCE_8),    LCTL(LSFT(KC_PGDOWN)),LCTL(LSFT(KC_PGUP)),                                KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_NO,          KC_NO,
    LGUI(LCTL(KC_S)),KC_NO,          LGUI(LCTL(KC_A)),LGUI(LCTL(KC_R)),LGUI(KC_T),     KC_NO,          KC_NO,                                                                          KC_HOME,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_END,         LGUI(KC_I),
    KC_LSHIFT,      TD(DANCE_9),    TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),   TD(DANCE_13),                                   KC_NO,          LGUI(KC_SPACE), LGUI(KC_F),     TD(DANCE_15),   KC_MS_UP,       KC_RSHIFT,
    KC_LCTRL,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          LGUI(KC_R),     KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,
    KC_TRANSPARENT, KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_LGUI
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          LGUI(KC_W),     LGUI(KC_F),     TD(DANCE_16),   LGUI(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_J),     LGUI(KC_L),     KC_TRANSPARENT, KC_D,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LGUI(KC_A),     LGUI(KC_R),     LGUI(KC_S),     LGUI(KC_T),     LGUI(KC_G),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_N),     LGUI(KC_E),     LGUI(KC_I),     LGUI(KC_O),     LALT(KC_ENTER),
    KC_TRANSPARENT, LGUI(KC_Z),     LGUI(KC_X),     LGUI(KC_C),     LGUI(LSFT(KC_C)),LGUI(KC_V),                                     LGUI(KC_K),     LGUI(KC_H),     KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, LGUI(BR_SLSH),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, LGUI(KC_SPACE), LGUI(KC_COMMA), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, RGUI(LSFT(KC_DOWN)),KC_TRANSPARENT, RGUI(LSFT(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 RESET,          KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_EQUAL,                                       KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         TO(0),
    KC_M,           KC_Q,           TD(DANCE_17),   TD(DANCE_18),   KC_P,           KC_B,           KC_DOT,                                         KC_BSPACE,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,
    KC_H,           KC_A,           KC_R,           KC_S,           TD(DANCE_19),   KC_G,           KC_COMMA,                                                                       KC_DELETE,      KC_LBRACKET,    KC_RBRACKET,    KC_MINUS,       KC_SCOLON,      KC_BSLASH,      KC_SLASH,
    MT(MOD_LSFT, KC_O),TD(DANCE_20),   TD(DANCE_21),   TD(DANCE_22),   KC_D,           KC_V,                                           KC_GRAVE,       KC_QUOTE,       KC_KP_ASTERISK, KC_KP_MINUS,    KC_NO,          KC_NO,
    KC_J,           KC_L,           KC_U,           KC_Y,           OSL(7),         MT(MOD_LALT, KC_SPACE),                                                                                                KC_TRANSPARENT, KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,
    LM(8,MOD_LSFT), KC_LCTRL,       KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_M,           KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_DOT,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_H,           KC_A,           TD(DANCE_23),   KC_S,           KC_NO,          KC_G,           KC_COMMA,                                                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_NO,          KC_L,           TD(DANCE_24),   TD(DANCE_25),   KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_NO,          TD(DANCE_26),   TD(DANCE_27),   TD(DANCE_28),   TD(DANCE_29),   TD(DANCE_30),   TD(DANCE_31),                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_NO,          TD(DANCE_32),   TD(DANCE_33),   TD(DANCE_34),   KC_T,           TD(DANCE_35),   TD(DANCE_36),                                                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_NO,          TD(DANCE_37),   TD(DANCE_38),   TD(DANCE_39),   TD(DANCE_40),   TD(DANCE_41),                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TD(DANCE_42),   TD(DANCE_43),   TD(DANCE_44),   TD(DANCE_45),   KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {41,156,200}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134}, {137,224,134} },

    [1] = { {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,156,200}, {41,156,200}, {41,156,200}, {41,156,200}, {41,255,255}, {41,156,200}, {41,156,200}, {41,156,200}, {41,156,200}, {41,255,255}, {41,156,200}, {41,156,200}, {41,156,200}, {41,156,200}, {41,255,255}, {41,156,200}, {41,156,200}, {41,156,200}, {41,255,255}, {41,255,255}, {41,156,200}, {41,156,200}, {41,156,200}, {41,255,255}, {41,156,200}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,156,200}, {41,255,255}, {41,156,200}, {41,255,255}, {41,255,255}, {41,255,255}, {41,156,200}, {41,156,200}, {41,255,255}, {41,255,255}, {41,156,200}, {41,156,200}, {41,156,200}, {41,255,255}, {41,255,255}, {41,156,200}, {41,156,200}, {41,156,200}, {41,255,255}, {41,255,255}, {41,255,255}, {41,156,200}, {41,156,200}, {41,255,255}, {41,255,255}, {41,156,200}, {41,156,200}, {41,156,200}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255} },

    [2] = { {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {83,218,204}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {83,218,204}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {83,218,204}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {83,218,204}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165}, {12,227,165} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {84,218,204}, {0,0,0}, {84,218,204}, {82,218,204}, {0,0,0}, {84,218,204}, {82,218,204}, {82,218,204}, {82,218,204}, {0,0,0}, {82,218,204}, {82,218,204}, {82,218,204}, {82,218,204}, {0,0,0}, {0,0,0}, {82,218,204}, {82,218,204}, {82,218,204}, {0,0,0}, {0,0,0}, {84,218,204}, {82,218,204}, {82,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {82,218,204}, {82,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {82,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {82,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {82,218,204}, {82,218,204}, {82,218,204}, {0,0,0}, {82,218,204}, {82,218,204}, {82,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {82,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,107}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {157,205,255}, {83,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {157,205,255}, {83,218,204}, {83,218,204}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,255,255}, {0,255,255}, {202,234,186}, {139,221,107}, {0,0,0}, {0,255,255}, {0,255,255}, {78,234,186}, {139,221,107}, {0,0,0}, {78,234,186}, {0,255,255}, {78,234,186}, {139,221,107}, {0,0,0}, {78,234,186}, {0,255,255}, {78,234,186}, {139,221,107}, {0,0,0}, {202,234,186}, {78,234,186}, {202,234,186}, {0,255,255}, {0,0,0}, {202,234,186}, {0,255,255}, {202,234,186}, {0,0,0}, {0,0,0}, {202,234,186}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {16,218,204}, {16,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {16,218,204}, {16,218,204}, {16,218,204}, {16,218,204}, {0,0,0}, {16,218,204}, {16,218,204}, {16,218,204}, {16,218,204}, {0,0,0}, {16,218,204}, {16,218,204}, {16,218,204}, {16,218,204}, {0,0,0}, {16,218,204}, {0,0,0}, {16,218,204}, {0,0,0}, {0,0,0}, {16,218,204}, {16,218,204}, {16,218,204}, {0,0,0}, {16,218,204}, {16,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return;
  }
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case OSL(7):
        if (record->event.pressed) {
           tap_code16(KC_K);
        }
        break;
    case TO(6):
        if (record->event.pressed) {
           tap_code16(KC_ESCAPE);
        }
        break;
    case TO(0):
        if (record->event.pressed) {
           tap_code16(KC_ENTER);
        }
        break;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[46];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_C);
        tap_code16(KC_C);
        tap_code16(KC_C);
    }
    if(state->count > 3) {
        tap_code16(KC_C);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_C); break;
        case SINGLE_HOLD: register_code16(BR_CCDL); break;
        case DOUBLE_TAP: register_code16(KC_C); register_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_C); break;
        case SINGLE_HOLD: unregister_code16(BR_CCDL); break;
        case DOUBLE_TAP: unregister_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BR_SLSH);
        tap_code16(BR_SLSH);
        tap_code16(BR_SLSH);
    }
    if(state->count > 3) {
        tap_code16(BR_SLSH);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(BR_SLSH); break;
        case SINGLE_HOLD: register_code16(BR_BSLS); break;
        case DOUBLE_TAP: register_code16(BR_SLSH); register_code16(BR_SLSH); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BR_SLSH); register_code16(BR_SLSH);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(BR_SLSH); break;
        case SINGLE_HOLD: unregister_code16(BR_BSLS); break;
        case DOUBLE_TAP: unregister_code16(BR_SLSH); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BR_SLSH); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BR_TILD);
        tap_code16(BR_TILD);
        tap_code16(BR_TILD);
    }
    if(state->count > 3) {
        tap_code16(BR_TILD);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(BR_TILD); break;
        case DOUBLE_TAP: register_code16(BR_NDTD); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BR_TILD); register_code16(BR_TILD);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(BR_TILD); break;
        case DOUBLE_TAP: unregister_code16(BR_NDTD); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BR_TILD); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_ENTER));
        tap_code16(LSFT(KC_ENTER));
        tap_code16(LSFT(KC_ENTER));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_ENTER));
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_ENTER)); break;
        case SINGLE_HOLD: register_code16(LALT(LSFT(KC_UP))); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_ENTER)); register_code16(LSFT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_ENTER)); register_code16(LSFT(KC_ENTER));
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_ENTER)); break;
        case SINGLE_HOLD: unregister_code16(LALT(LSFT(KC_UP))); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_ENTER)); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BR_GRAV);
        tap_code16(BR_GRAV);
        tap_code16(BR_GRAV);
    }
    if(state->count > 3) {
        tap_code16(BR_GRAV);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(BR_GRAV); break;
        case DOUBLE_TAP: register_code16(BR_NDGV); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BR_GRAV); register_code16(BR_GRAV);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(BR_GRAV); break;
        case DOUBLE_TAP: unregister_code16(BR_NDGV); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BR_GRAV); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BR_ACUT);
        tap_code16(BR_ACUT);
        tap_code16(BR_ACUT);
    }
    if(state->count > 3) {
        tap_code16(BR_ACUT);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(BR_ACUT); break;
        case DOUBLE_TAP: register_code16(BR_NDAC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BR_ACUT); register_code16(BR_ACUT);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(BR_ACUT); break;
        case DOUBLE_TAP: unregister_code16(BR_NDAC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BR_ACUT); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BR_CIRC);
        tap_code16(BR_CIRC);
        tap_code16(BR_CIRC);
    }
    if(state->count > 3) {
        tap_code16(BR_CIRC);
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(BR_CIRC); break;
        case DOUBLE_TAP: register_code16(BR_NDCR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BR_CIRC); register_code16(BR_CIRC);
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(BR_CIRC); break;
        case DOUBLE_TAP: unregister_code16(BR_NDCR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BR_CIRC); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(BR_SLSH);
        tap_code16(BR_SLSH);
        tap_code16(BR_SLSH);
    }
    if(state->count > 3) {
        tap_code16(BR_SLSH);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(BR_SLSH); break;
        case SINGLE_HOLD: register_code16(BR_BSLS); break;
        case DOUBLE_TAP: register_code16(BR_SLSH); register_code16(BR_SLSH); break;
        case DOUBLE_SINGLE_TAP: tap_code16(BR_SLSH); register_code16(BR_SLSH);
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(BR_SLSH); break;
        case SINGLE_HOLD: unregister_code16(BR_BSLS); break;
        case DOUBLE_TAP: unregister_code16(BR_SLSH); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(BR_SLSH); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(qk_tap_dance_state_t *state, void *user_data);
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_P));
        tap_code16(LGUI(KC_P));
        tap_code16(LGUI(KC_P));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_P));
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_P)); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_P)); register_code16(LGUI(KC_P)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_P)); register_code16(LGUI(KC_P));
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_P)); break;
        case SINGLE_HOLD: layer_off(4); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_P)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_P)); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_1));
        tap_code16(LGUI(KC_1));
        tap_code16(LGUI(KC_1));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_1));
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_1)); break;
        case SINGLE_HOLD: register_code16(LCTL(LGUI(LSFT(KC_1)))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_1)); register_code16(LGUI(KC_1)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_1)); register_code16(LGUI(KC_1));
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_1)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LGUI(LSFT(KC_1)))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_1)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_1)); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(qk_tap_dance_state_t *state, void *user_data);
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_2));
        tap_code16(LGUI(KC_2));
        tap_code16(LGUI(KC_2));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_2));
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_2)); break;
        case SINGLE_HOLD: register_code16(LCTL(LGUI(LSFT(KC_2)))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_2)); register_code16(LGUI(KC_2)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_2)); register_code16(LGUI(KC_2));
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_2)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LGUI(LSFT(KC_2)))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_2)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_2)); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(qk_tap_dance_state_t *state, void *user_data);
void dance_11_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_11_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_11(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_3));
        tap_code16(LGUI(KC_3));
        tap_code16(LGUI(KC_3));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_3));
    }
}

void dance_11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_3)); break;
        case SINGLE_HOLD: register_code16(LCTL(LGUI(LSFT(KC_3)))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_3)); register_code16(LGUI(KC_3)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_3)); register_code16(LGUI(KC_3));
    }
}

void dance_11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_3)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LGUI(LSFT(KC_3)))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_3)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_3)); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(qk_tap_dance_state_t *state, void *user_data);
void dance_12_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_12_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_12(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_4));
        tap_code16(LGUI(KC_4));
        tap_code16(LGUI(KC_4));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_4));
    }
}

void dance_12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_4)); break;
        case SINGLE_HOLD: register_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_4)); register_code16(LGUI(KC_4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_4)); register_code16(LGUI(KC_4));
    }
}

void dance_12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_4)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_4)); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(qk_tap_dance_state_t *state, void *user_data);
void dance_13_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_13_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_13(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_5));
        tap_code16(LGUI(KC_5));
        tap_code16(LGUI(KC_5));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_5));
    }
}

void dance_13_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_5)); break;
        case SINGLE_HOLD: register_code16(LCTL(LGUI(LSFT(KC_5)))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_5)); register_code16(LGUI(KC_5)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_5)); register_code16(LGUI(KC_5));
    }
}

void dance_13_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_5)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LGUI(LSFT(KC_5)))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_5)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_5)); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(qk_tap_dance_state_t *state, void *user_data);
void dance_14_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_14_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_14(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(LSFT(KC_C)));
        tap_code16(LGUI(LSFT(KC_C)));
        tap_code16(LGUI(LSFT(KC_C)));
    }
    if(state->count > 3) {
        tap_code16(LGUI(LSFT(KC_C)));
    }
}

void dance_14_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(LGUI(LSFT(KC_C))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_R))); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_C))); register_code16(LGUI(LSFT(KC_C))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(LSFT(KC_C))); register_code16(LGUI(LSFT(KC_C)));
    }
}

void dance_14_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_C))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_R))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_C))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_C))); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(qk_tap_dance_state_t *state, void *user_data);
void dance_15_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_15_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_15(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_BTN1);
    }
}

void dance_15_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: register_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: register_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1);
    }
}

void dance_15_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(qk_tap_dance_state_t *state, void *user_data);
void dance_16_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_16_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_16(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LGUI(KC_P)));
        tap_code16(LCTL(LGUI(KC_P)));
        tap_code16(LCTL(LGUI(KC_P)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LGUI(KC_P)));
    }
}

void dance_16_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(LCTL(LGUI(KC_P))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_P))); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(KC_P))); register_code16(LCTL(LGUI(KC_P))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LGUI(KC_P))); register_code16(LCTL(LGUI(KC_P)));
    }
}

void dance_16_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LGUI(KC_P))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_P))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(KC_P))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LGUI(KC_P))); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(qk_tap_dance_state_t *state, void *user_data);
void dance_17_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_17_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_17(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_17_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case SINGLE_HOLD: register_code16(LALT(KC_1)); break;
        case DOUBLE_TAP: register_code16(KC_1); register_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_17_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_1)); break;
        case DOUBLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(qk_tap_dance_state_t *state, void *user_data);
void dance_18_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_18_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_18(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_18_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case SINGLE_HOLD: register_code16(LALT(KC_2)); break;
        case DOUBLE_TAP: register_code16(KC_2); register_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_18_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_2)); break;
        case DOUBLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(qk_tap_dance_state_t *state, void *user_data);
void dance_19_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_19_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_19(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_T);
        tap_code16(KC_T);
        tap_code16(KC_T);
    }
    if(state->count > 3) {
        tap_code16(KC_T);
    }
}

void dance_19_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(KC_T); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_T)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_T); register_code16(KC_T);
    }
}

void dance_19_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(KC_T); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_T)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_T); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(qk_tap_dance_state_t *state, void *user_data);
void dance_20_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_20_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_20(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_20_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: register_code16(LALT(KC_5)); break;
        case DOUBLE_TAP: register_code16(KC_5); register_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_20_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_5)); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(qk_tap_dance_state_t *state, void *user_data);
void dance_21_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_21_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_21(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_21_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case SINGLE_HOLD: register_code16(LALT(KC_3)); break;
        case DOUBLE_TAP: register_code16(KC_3); register_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_21_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_3)); break;
        case DOUBLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(qk_tap_dance_state_t *state, void *user_data);
void dance_22_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_22_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_22(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_22_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case SINGLE_HOLD: register_code16(LALT(KC_4)); break;
        case DOUBLE_TAP: register_code16(KC_4); register_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_22_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_4)); break;
        case DOUBLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(qk_tap_dance_state_t *state, void *user_data);
void dance_23_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_23_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_23(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_R);
        tap_code16(KC_R);
        tap_code16(KC_R);
    }
    if(state->count > 3) {
        tap_code16(KC_R);
    }
}

void dance_23_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(KC_R); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_R)); break;
        case DOUBLE_TAP: register_code16(KC_R); register_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_R); register_code16(KC_R);
    }
}

void dance_23_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(KC_R); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_R)); break;
        case DOUBLE_TAP: unregister_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_R); break;
    }
    dance_state[23].step = 0;
}
void on_dance_24(qk_tap_dance_state_t *state, void *user_data);
void dance_24_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_24_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_24(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_U);
        tap_code16(KC_U);
        tap_code16(KC_U);
    }
    if(state->count > 3) {
        tap_code16(KC_U);
    }
}

void dance_24_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: register_code16(KC_U); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_U)); break;
        case DOUBLE_TAP: register_code16(KC_U); register_code16(KC_U); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_U); register_code16(KC_U);
    }
}

void dance_24_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_TAP: unregister_code16(KC_U); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_U)); break;
        case DOUBLE_TAP: unregister_code16(KC_U); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_U); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(qk_tap_dance_state_t *state, void *user_data);
void dance_25_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_25_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_25(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Y);
        tap_code16(KC_Y);
        tap_code16(KC_Y);
    }
    if(state->count > 3) {
        tap_code16(KC_Y);
    }
}

void dance_25_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(KC_Y); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: register_code16(KC_Y); register_code16(KC_Y); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Y); register_code16(KC_Y);
    }
}

void dance_25_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(KC_Y); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: unregister_code16(KC_Y); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Y); break;
    }
    dance_state[25].step = 0;
}
void on_dance_26(qk_tap_dance_state_t *state, void *user_data);
void dance_26_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_26_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_26(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Q);
        tap_code16(KC_Q);
        tap_code16(KC_Q);
    }
    if(state->count > 3) {
        tap_code16(KC_Q);
    }
}

void dance_26_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[26].step = dance_step(state);
    switch (dance_state[26].step) {
        case SINGLE_TAP: register_code16(KC_Q); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_Q)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Q); register_code16(KC_Q);
    }
}

void dance_26_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[26].step) {
        case SINGLE_TAP: unregister_code16(KC_Q); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_Q)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Q); break;
    }
    dance_state[26].step = 0;
}
void on_dance_27(qk_tap_dance_state_t *state, void *user_data);
void dance_27_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_27_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_27(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_W);
        tap_code16(KC_W);
        tap_code16(KC_W);
    }
    if(state->count > 3) {
        tap_code16(KC_W);
    }
}

void dance_27_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[27].step = dance_step(state);
    switch (dance_state[27].step) {
        case SINGLE_TAP: register_code16(KC_W); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_W)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_W); register_code16(KC_W);
    }
}

void dance_27_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[27].step) {
        case SINGLE_TAP: unregister_code16(KC_W); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_W)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_W); break;
    }
    dance_state[27].step = 0;
}
void on_dance_28(qk_tap_dance_state_t *state, void *user_data);
void dance_28_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_28_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_28(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if(state->count > 3) {
        tap_code16(KC_F);
    }
}

void dance_28_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[28].step = dance_step(state);
    switch (dance_state[28].step) {
        case SINGLE_TAP: register_code16(KC_F); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_F)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F); register_code16(KC_F);
    }
}

void dance_28_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[28].step) {
        case SINGLE_TAP: unregister_code16(KC_F); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_F)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F); break;
    }
    dance_state[28].step = 0;
}
void on_dance_29(qk_tap_dance_state_t *state, void *user_data);
void dance_29_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_29_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_29(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_P);
        tap_code16(KC_P);
        tap_code16(KC_P);
    }
    if(state->count > 3) {
        tap_code16(KC_P);
    }
}

void dance_29_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[29].step = dance_step(state);
    switch (dance_state[29].step) {
        case SINGLE_TAP: register_code16(KC_P); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_P)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_P); register_code16(KC_P);
    }
}

void dance_29_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[29].step) {
        case SINGLE_TAP: unregister_code16(KC_P); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_P)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_P); break;
    }
    dance_state[29].step = 0;
}
void on_dance_30(qk_tap_dance_state_t *state, void *user_data);
void dance_30_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_30_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_30(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_B);
        tap_code16(KC_B);
        tap_code16(KC_B);
    }
    if(state->count > 3) {
        tap_code16(KC_B);
    }
}

void dance_30_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[30].step = dance_step(state);
    switch (dance_state[30].step) {
        case SINGLE_TAP: register_code16(KC_B); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_B)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_B); register_code16(KC_B);
    }
}

void dance_30_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[30].step) {
        case SINGLE_TAP: unregister_code16(KC_B); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_B)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_B); break;
    }
    dance_state[30].step = 0;
}
void on_dance_31(qk_tap_dance_state_t *state, void *user_data);
void dance_31_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_31_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_31(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if(state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_31_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[31].step = dance_step(state);
    switch (dance_state[31].step) {
        case SINGLE_TAP: register_code16(KC_DOT); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_DOT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOT); register_code16(KC_DOT);
    }
}

void dance_31_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[31].step) {
        case SINGLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_DOT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOT); break;
    }
    dance_state[31].step = 0;
}
void on_dance_32(qk_tap_dance_state_t *state, void *user_data);
void dance_32_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_32_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_32(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_A);
        tap_code16(KC_A);
        tap_code16(KC_A);
    }
    if(state->count > 3) {
        tap_code16(KC_A);
    }
}

void dance_32_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[32].step = dance_step(state);
    switch (dance_state[32].step) {
        case SINGLE_TAP: register_code16(KC_A); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_A)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_A); register_code16(KC_A);
    }
}

void dance_32_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[32].step) {
        case SINGLE_TAP: unregister_code16(KC_A); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_A)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_A); break;
    }
    dance_state[32].step = 0;
}
void on_dance_33(qk_tap_dance_state_t *state, void *user_data);
void dance_33_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_33_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_33(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_R);
        tap_code16(KC_R);
        tap_code16(KC_R);
    }
    if(state->count > 3) {
        tap_code16(KC_R);
    }
}

void dance_33_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[33].step = dance_step(state);
    switch (dance_state[33].step) {
        case SINGLE_TAP: register_code16(KC_R); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_R)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_R); register_code16(KC_R);
    }
}

void dance_33_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[33].step) {
        case SINGLE_TAP: unregister_code16(KC_R); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_R)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_R); break;
    }
    dance_state[33].step = 0;
}
void on_dance_34(qk_tap_dance_state_t *state, void *user_data);
void dance_34_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_34_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_34(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_S);
        tap_code16(KC_S);
        tap_code16(KC_S);
    }
    if(state->count > 3) {
        tap_code16(KC_S);
    }
}

void dance_34_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[34].step = dance_step(state);
    switch (dance_state[34].step) {
        case SINGLE_TAP: register_code16(KC_S); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_S)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_S); register_code16(KC_S);
    }
}

void dance_34_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[34].step) {
        case SINGLE_TAP: unregister_code16(KC_S); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_S)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_S); break;
    }
    dance_state[34].step = 0;
}
void on_dance_35(qk_tap_dance_state_t *state, void *user_data);
void dance_35_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_35_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_35(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_G);
        tap_code16(KC_G);
        tap_code16(KC_G);
    }
    if(state->count > 3) {
        tap_code16(KC_G);
    }
}

void dance_35_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[35].step = dance_step(state);
    switch (dance_state[35].step) {
        case SINGLE_TAP: register_code16(KC_G); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_G)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
    }
}

void dance_35_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[35].step) {
        case SINGLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_G)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
    }
    dance_state[35].step = 0;
}
void on_dance_36(qk_tap_dance_state_t *state, void *user_data);
void dance_36_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_36_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_36(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
    }
    if(state->count > 3) {
        tap_code16(KC_COMMA);
    }
}

void dance_36_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[36].step = dance_step(state);
    switch (dance_state[36].step) {
        case SINGLE_TAP: register_code16(KC_COMMA); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_COMMA)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COMMA); register_code16(KC_COMMA);
    }
}

void dance_36_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[36].step) {
        case SINGLE_TAP: unregister_code16(KC_COMMA); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_COMMA)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COMMA); break;
    }
    dance_state[36].step = 0;
}
void on_dance_37(qk_tap_dance_state_t *state, void *user_data);
void dance_37_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_37_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_37(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Z);
        tap_code16(KC_Z);
        tap_code16(KC_Z);
    }
    if(state->count > 3) {
        tap_code16(KC_Z);
    }
}

void dance_37_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[37].step = dance_step(state);
    switch (dance_state[37].step) {
        case SINGLE_TAP: register_code16(KC_Z); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_Z)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Z); register_code16(KC_Z);
    }
}

void dance_37_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[37].step) {
        case SINGLE_TAP: unregister_code16(KC_Z); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Z); break;
    }
    dance_state[37].step = 0;
}
void on_dance_38(qk_tap_dance_state_t *state, void *user_data);
void dance_38_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_38_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_38(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_X);
        tap_code16(KC_X);
        tap_code16(KC_X);
    }
    if(state->count > 3) {
        tap_code16(KC_X);
    }
}

void dance_38_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[38].step = dance_step(state);
    switch (dance_state[38].step) {
        case SINGLE_TAP: register_code16(KC_X); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_X); register_code16(KC_X);
    }
}

void dance_38_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[38].step) {
        case SINGLE_TAP: unregister_code16(KC_X); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_X); break;
    }
    dance_state[38].step = 0;
}
void on_dance_39(qk_tap_dance_state_t *state, void *user_data);
void dance_39_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_39_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_39(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_C);
        tap_code16(KC_C);
        tap_code16(KC_C);
    }
    if(state->count > 3) {
        tap_code16(KC_C);
    }
}

void dance_39_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[39].step = dance_step(state);
    switch (dance_state[39].step) {
        case SINGLE_TAP: register_code16(KC_C); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
    }
}

void dance_39_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[39].step) {
        case SINGLE_TAP: unregister_code16(KC_C); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
    }
    dance_state[39].step = 0;
}
void on_dance_40(qk_tap_dance_state_t *state, void *user_data);
void dance_40_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_40_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_40(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_D);
        tap_code16(KC_D);
        tap_code16(KC_D);
    }
    if(state->count > 3) {
        tap_code16(KC_D);
    }
}

void dance_40_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[40].step = dance_step(state);
    switch (dance_state[40].step) {
        case SINGLE_TAP: register_code16(KC_D); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_D)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_D); register_code16(KC_D);
    }
}

void dance_40_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[40].step) {
        case SINGLE_TAP: unregister_code16(KC_D); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_D)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_D); break;
    }
    dance_state[40].step = 0;
}
void on_dance_41(qk_tap_dance_state_t *state, void *user_data);
void dance_41_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_41_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_41(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_41_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[41].step = dance_step(state);
    switch (dance_state[41].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_41_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[41].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[41].step = 0;
}
void on_dance_42(qk_tap_dance_state_t *state, void *user_data);
void dance_42_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_42_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_42(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_J);
        tap_code16(KC_J);
        tap_code16(KC_J);
    }
    if(state->count > 3) {
        tap_code16(KC_J);
    }
}

void dance_42_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[42].step = dance_step(state);
    switch (dance_state[42].step) {
        case SINGLE_TAP: register_code16(KC_J); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_J)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_J); register_code16(KC_J);
    }
}

void dance_42_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[42].step) {
        case SINGLE_TAP: unregister_code16(KC_J); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_J)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_J); break;
    }
    dance_state[42].step = 0;
}
void on_dance_43(qk_tap_dance_state_t *state, void *user_data);
void dance_43_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_43_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_43(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_L);
        tap_code16(KC_L);
        tap_code16(KC_L);
    }
    if(state->count > 3) {
        tap_code16(KC_L);
    }
}

void dance_43_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[43].step = dance_step(state);
    switch (dance_state[43].step) {
        case SINGLE_TAP: register_code16(KC_L); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_L)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_L); register_code16(KC_L);
    }
}

void dance_43_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[43].step) {
        case SINGLE_TAP: unregister_code16(KC_L); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_L)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_L); break;
    }
    dance_state[43].step = 0;
}
void on_dance_44(qk_tap_dance_state_t *state, void *user_data);
void dance_44_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_44_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_44(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_U);
        tap_code16(KC_U);
        tap_code16(KC_U);
    }
    if(state->count > 3) {
        tap_code16(KC_U);
    }
}

void dance_44_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[44].step = dance_step(state);
    switch (dance_state[44].step) {
        case SINGLE_TAP: register_code16(KC_U); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_U)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_U); register_code16(KC_U);
    }
}

void dance_44_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[44].step) {
        case SINGLE_TAP: unregister_code16(KC_U); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_U)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_U); break;
    }
    dance_state[44].step = 0;
}
void on_dance_45(qk_tap_dance_state_t *state, void *user_data);
void dance_45_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_45_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_45(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Y);
        tap_code16(KC_Y);
        tap_code16(KC_Y);
    }
    if(state->count > 3) {
        tap_code16(KC_Y);
    }
}

void dance_45_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[45].step = dance_step(state);
    switch (dance_state[45].step) {
        case SINGLE_TAP: register_code16(KC_Y); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_Y)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Y); register_code16(KC_Y);
    }
}

void dance_45_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[45].step) {
        case SINGLE_TAP: unregister_code16(KC_Y); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_Y)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Y); break;
    }
    dance_state[45].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
        [DANCE_24] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_24, dance_24_finished, dance_24_reset),
        [DANCE_25] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_25, dance_25_finished, dance_25_reset),
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_26, dance_26_finished, dance_26_reset),
        [DANCE_27] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_27, dance_27_finished, dance_27_reset),
        [DANCE_28] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_28, dance_28_finished, dance_28_reset),
        [DANCE_29] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_29, dance_29_finished, dance_29_reset),
        [DANCE_30] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_30, dance_30_finished, dance_30_reset),
        [DANCE_31] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_31, dance_31_finished, dance_31_reset),
        [DANCE_32] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_32, dance_32_finished, dance_32_reset),
        [DANCE_33] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_33, dance_33_finished, dance_33_reset),
        [DANCE_34] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_34, dance_34_finished, dance_34_reset),
        [DANCE_35] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_35, dance_35_finished, dance_35_reset),
        [DANCE_36] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_36, dance_36_finished, dance_36_reset),
        [DANCE_37] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_37, dance_37_finished, dance_37_reset),
        [DANCE_38] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_38, dance_38_finished, dance_38_reset),
        [DANCE_39] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_39, dance_39_finished, dance_39_reset),
        [DANCE_40] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_40, dance_40_finished, dance_40_reset),
        [DANCE_41] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_41, dance_41_finished, dance_41_reset),
        [DANCE_42] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_42, dance_42_finished, dance_42_reset),
        [DANCE_43] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_43, dance_43_finished, dance_43_reset),
        [DANCE_44] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_44, dance_44_finished, dance_44_reset),
        [DANCE_45] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_45, dance_45_finished, dance_45_reset),
};
