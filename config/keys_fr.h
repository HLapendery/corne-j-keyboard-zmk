/* French aliases for a host using XKB fr(azerty).
 * Reference: /usr/share/X11/xkb/symbols/fr, section "azerty".
 * These names describe the resulting character, not the US HID key name.
 * Keep the host on French AZERTY. This does not localize ZMK Studio.
 */
#pragma once
#include <dt-bindings/zmk/keys.h>

/* Letters */
#define FR_A Q
#define FR_B B
#define FR_C C
#define FR_D D
#define FR_E E
#define FR_F F
#define FR_G G
#define FR_H H
#define FR_I I
#define FR_J J
#define FR_K K
#define FR_L L
#define FR_M SEMI
#define FR_N N
#define FR_O O
#define FR_P P
#define FR_Q A
#define FR_R R
#define FR_S S
#define FR_T T
#define FR_U U
#define FR_V V
#define FR_W Z
#define FR_X X
#define FR_Y Y
#define FR_Z W

/* Number row: Shift is included so these aliases produce digits. */
#define FR_N0 LS(N0)
#define FR_N1 LS(N1)
#define FR_N2 LS(N2)
#define FR_N3 LS(N3)
#define FR_N4 LS(N4)
#define FR_N5 LS(N5)
#define FR_N6 LS(N6)
#define FR_N7 LS(N7)
#define FR_N8 LS(N8)
#define FR_N9 LS(N9)

/* Accents */
#define FR_E_ACUTE N2       /* é */
#define FR_E_GRAVE N7       /* è */
#define FR_A_GRAVE N0       /* à */
#define FR_U_GRAVE SQT      /* ù */
#define FR_C_CEDILLA N9     /* ç */
#define FR_DEAD_CIRCUMFLEX LBKT
#define FR_DEAD_DIAERESIS LS(LBKT)

/* Symbols */
#define FR_AMPERSAND N1
#define FR_DOUBLE_QUOTES N3
#define FR_APOSTROPHE N4
#define FR_LEFT_PARENTHESIS N5
#define FR_RIGHT_PARENTHESIS MINUS
#define FR_MINUS N6
#define FR_UNDERSCORE N8
#define FR_EQUAL EQUAL
#define FR_PLUS LS(EQUAL)
#define FR_COMMA M
#define FR_SEMICOLON COMMA
#define FR_COLON DOT
#define FR_PERIOD LS(COMMA)
#define FR_SLASH LS(DOT)
#define FR_EXCLAMATION FSLH
#define FR_SECTION LS(FSLH)
#define FR_QUESTION LS(M)
#define FR_PERCENT LS(SQT)
#define FR_DOLLAR RBKT
#define FR_ASTERISK BSLH
#define FR_LESS_THAN NUBS
#define FR_GREATER_THAN LS(NUBS)
#define FR_HASH RA(N3)
#define FR_LEFT_BRACE RA(N4)
#define FR_LEFT_BRACKET RA(N5)
#define FR_PIPE RA(N6)
#define FR_GRAVE RA(N7)
#define FR_BACKSLASH RA(N8)
#define FR_CARET RA(N9)     /* ^, not a dead key in XKB fr(azerty) */
#define FR_AT_SIGN RA(N0)
#define FR_RIGHT_BRACKET RA(MINUS)
#define FR_RIGHT_BRACE RA(EQUAL)
#define FR_TILDE RA(N2)
#define FR_EURO RA(E)
