#ifndef KEYCODE_LOOKUP
    #define KEYCODE_LOOKUP

#include "quantum_keycodes.h"
#include "info_config.h"
#define KEY_OFFSET_SIZE 26
#define KEY_OFFSET_COUNT 30
extern uint8_t key_offsets[KEY_OFFSET_COUNT];
extern uint8_t key_positions[MATRIX_ROWS][MATRIX_COLS];
enum my_keycodes {
  KC_ENC = SAFE_RANGE
};

#endif // KEYCODE_LOOKUP