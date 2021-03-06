/** @file
 * This file is very simple: undef everything 
 * which was defined in keylayouts.h 
 * @see keyboard.c for explanation*/

///@cond DONOTUSETHISFILE
#undef KEYLAYOUTS_H__

#undef LAYOUT_US_ENGLISH
#undef LAYOUT_CANADIAN_FRENCH
#undef LAYOUT_CANADIAN_MULTILINGUAL
#undef LAYOUT_DANISH
#undef LAYOUT_FINNISH
#undef LAYOUT_FRENCH
#undef LAYOUT_FRENCH_BELGIAN
#undef LAYOUT_FRENCH_SWISS
#undef LAYOUT_GERMAN
#undef LAYOUT_GERMAN_MAC
#undef LAYOUT_GERMAN_SWISS
#undef LAYOUT_ICELANDIC
#undef LAYOUT_IRISH
#undef LAYOUT_ITALIAN
#undef LAYOUT_NORWEGIAN
#undef LAYOUT_PORTUGUESE
#undef LAYOUT_PORTUGUESE_BRAZILIAN
#undef LAYOUT_SPANISH
#undef LAYOUT_SPANISH_LATIN_AMERICA
#undef LAYOUT_SWEDISH
#undef LAYOUT_TURKISH
#undef LAYOUT_UNITED_KINGDOM	
#undef LAYOUT_US_INTERNATIONAL
#undef LAYOUT_SERBIAN_LATIN_ONLY
#undef LAYOUT_CZECH

#undef SHIFT_MASK
#undef ALTGR_MASK
#undef DEADKEYS_MASK
#undef CIRCUMFLEX_BITS
#undef ACUTE_ACCENT_BITS
#undef GRAVE_ACCENT_BITS
#undef TILDE_BITS
#undef DIAERESIS_BITS
#undef KEYCODE_TYPE
#undef KEYCODE_MASK
#undef DEADKEY_CIRCUMFLEX
#undef DEADKEY_ACUTE_ACCENT
#undef DEADKEY_GRAVE_ACCENT
#undef DEADKEY_TILDE
#undef DEADKEY_DIAERESIS
#undef DEADKEY_RING_ABOVE
#undef DEADKEY_DEGREE_SIGN
#undef RING_ABOVE_BITS
#undef CARON_BITS
#undef DEADKEY_CARON
#undef BREVE_BITS
#undef DEADKEY_BREVE
#undef DEGREE_SIGN_BITS
#undef DOT_ABOVE_BITS
#undef DEADKEY_DOT_ABOVE

#undef UNICODE_20AC
#undef UNICODE_EXTRA00
#undef UNICODE_EXTRA01
#undef UNICODE_EXTRA02
#undef UNICODE_EXTRA03
#undef UNICODE_EXTRA04
#undef UNICODE_EXTRA05
#undef UNICODE_EXTRA06
#undef UNICODE_EXTRA07
#undef UNICODE_EXTRA08
#undef UNICODE_EXTRA09
#undef KEYCODE_EXTRA00
#undef KEYCODE_EXTRA01
#undef KEYCODE_EXTRA02
#undef KEYCODE_EXTRA03
#undef KEYCODE_EXTRA04
#undef KEYCODE_EXTRA05
#undef KEYCODE_EXTRA06
#undef KEYCODE_EXTRA07
#undef KEYCODE_EXTRA08
#undef KEYCODE_EXTRA09
#undef CEDILLA_BITS
#undef DEADKEY_CEDILLA

#undef MODIFIERKEY_CTRL
#undef MODIFIERKEY_SHIFT
#undef MODIFIERKEY_ALT
#undef MODIFIERKEY_GUI
#undef MODIFIERKEY_LEFT_CTRL
#undef MODIFIERKEY_LEFT_SHIFT
#undef MODIFIERKEY_LEFT_ALT
#undef MODIFIERKEY_LEFT_GUI
#undef MODIFIERKEY_RIGHT_CTRL
#undef MODIFIERKEY_RIGHT_SHIFT
#undef MODIFIERKEY_RIGHT_ALT
#undef MODIFIERKEY_RIGHT_GUI

#undef KEY_SYSTEM_POWER_DOWN
#undef KEY_SYSTEM_SLEEP
#undef KEY_SYSTEM_WAKE_UP

#undef KEY_MEDIA_PLAY
#undef KEY_MEDIA_PAUSE
#undef KEY_MEDIA_RECORD
#undef KEY_MEDIA_FAST_FORWARD
#undef KEY_MEDIA_REWIND
#undef KEY_MEDIA_NEXT_TRACK
#undef KEY_MEDIA_PREV_TRACK
#undef KEY_MEDIA_STOP
#undef KEY_MEDIA_EJECT
#undef KEY_MEDIA_RANDOM_PLAY
#undef KEY_MEDIA_PLAY_PAUSE
#undef KEY_MEDIA_PLAY_SKIP
#undef KEY_MEDIA_MUTE
#undef KEY_MEDIA_VOLUME_INC
#undef KEY_MEDIA_VOLUME_DEC

#undef KEY_A
#undef KEY_B
#undef KEY_C
#undef KEY_D
#undef KEY_E
#undef KEY_F
#undef KEY_G
#undef KEY_H
#undef KEY_I
#undef KEY_J
#undef KEY_K
#undef KEY_L
#undef KEY_M
#undef KEY_N
#undef KEY_O
#undef KEY_P
#undef KEY_Q
#undef KEY_R
#undef KEY_S
#undef KEY_T
#undef KEY_U
#undef KEY_V
#undef KEY_W
#undef KEY_X
#undef KEY_Y
#undef KEY_Z
#undef KEY_1
#undef KEY_2
#undef KEY_3
#undef KEY_4
#undef KEY_5
#undef KEY_6
#undef KEY_7
#undef KEY_8
#undef KEY_9
#undef KEY_0
#undef KEY_ENTER
#undef KEY_ESC
#undef KEY_BACKSPACE
#undef KEY_TAB
#undef KEY_SPACE
#undef KEY_MINUS
#undef KEY_EQUAL
#undef KEY_LEFT_BRACE
#undef KEY_RIGHT_BRACE
#undef KEY_BACKSLASH
#undef KEY_NON_US_NUM
#undef KEY_SEMICOLON
#undef KEY_QUOTE
#undef KEY_TILDE
#undef KEY_COMMA
#undef KEY_PERIOD
#undef KEY_SLASH
#undef KEY_CAPS_LOCK
#undef KEY_F1
#undef KEY_F2
#undef KEY_F3
#undef KEY_F4
#undef KEY_F5
#undef KEY_F6
#undef KEY_F7
#undef KEY_F8
#undef KEY_F9
#undef KEY_F10
#undef KEY_F11
#undef KEY_F12
#undef KEY_PRINTSCREEN
#undef KEY_SCROLL_LOCK
#undef KEY_PAUSE
#undef KEY_INSERT
#undef KEY_HOME
#undef KEY_PAGE_UP
#undef KEY_DELETE
#undef KEY_END
#undef KEY_PAGE_DOWN
#undef KEY_RIGHT
#undef KEY_LEFT
#undef KEY_DOWN
#undef KEY_UP
#undef KEY_NUM_LOCK
#undef KEYPAD_SLASH
#undef KEYPAD_ASTERIX
#undef KEYPAD_MINUS
#undef KEYPAD_PLUS
#undef KEYPAD_ENTER
#undef KEYPAD_1
#undef KEYPAD_2
#undef KEYPAD_3
#undef KEYPAD_4
#undef KEYPAD_5
#undef KEYPAD_6
#undef KEYPAD_7
#undef KEYPAD_8
#undef KEYPAD_9
#undef KEYPAD_0
#undef KEYPAD_PERIOD
#undef KEY_NON_US_BS
#undef KEY_MENU
#undef KEY_F13
#undef KEY_F14
#undef KEY_F15
#undef KEY_F16
#undef KEY_F17
#undef KEY_F18
#undef KEY_F19
#undef KEY_F20
#undef KEY_F21
#undef KEY_F22
#undef KEY_F23
#undef KEY_F24

// for compatibility with Leonardo's slightly different names
#undef KEY_UP_ARROW
#undef KEY_DOWN_ARROW
#undef KEY_LEFT_ARROW
#undef KEY_RIGHT_ARROW
#undef KEY_RETURN
#undef KEY_LEFT_CTRL
#undef KEY_LEFT_SHIFT
#undef KEY_LEFT_ALT
#undef KEY_LEFT_GUI
#undef KEY_RIGHT_CTRL
#undef KEY_RIGHT_SHIFT
#undef KEY_RIGHT_ALT
#undef KEY_RIGHT_GUI

#undef ASCII_20
#undef ASCII_21
#undef ASCII_22
#undef ASCII_23
#undef ASCII_24
#undef ASCII_25
#undef ASCII_26
#undef ASCII_27
#undef ASCII_28
#undef ASCII_29
#undef ASCII_2A
#undef ASCII_2B
#undef ASCII_2C
#undef ASCII_2D
#undef ASCII_2E
#undef ASCII_2F
#undef ASCII_30
#undef ASCII_31
#undef ASCII_32
#undef ASCII_33
#undef ASCII_34
#undef ASCII_35
#undef ASCII_36
#undef ASCII_37
#undef ASCII_38
#undef ASCII_39
#undef ASCII_3A
#undef ASCII_3B
#undef ASCII_3C
#undef ASCII_3D
#undef ASCII_3E
#undef ASCII_3F
#undef ASCII_40
#undef ASCII_41
#undef ASCII_42
#undef ASCII_43
#undef ASCII_44
#undef ASCII_45
#undef ASCII_46
#undef ASCII_47
#undef ASCII_48
#undef ASCII_49
#undef ASCII_4A
#undef ASCII_4B
#undef ASCII_4C
#undef ASCII_4D
#undef ASCII_4E
#undef ASCII_4F
#undef ASCII_50
#undef ASCII_51
#undef ASCII_52
#undef ASCII_53
#undef ASCII_54
#undef ASCII_55
#undef ASCII_56
#undef ASCII_57
#undef ASCII_58
#undef ASCII_59
#undef ASCII_5A
#undef ASCII_5B
#undef ASCII_5C
#undef ASCII_5D
#undef ASCII_5E
#undef ASCII_5F
#undef ASCII_60
#undef ASCII_61
#undef ASCII_62
#undef ASCII_63
#undef ASCII_64
#undef ASCII_65
#undef ASCII_66
#undef ASCII_67
#undef ASCII_68
#undef ASCII_69
#undef ASCII_6A
#undef ASCII_6B
#undef ASCII_6C
#undef ASCII_6D
#undef ASCII_6E
#undef ASCII_6F
#undef ASCII_70
#undef ASCII_71
#undef ASCII_72
#undef ASCII_73
#undef ASCII_74
#undef ASCII_75
#undef ASCII_76
#undef ASCII_77
#undef ASCII_78
#undef ASCII_79
#undef ASCII_7A
#undef ASCII_7B
#undef ASCII_7C
#undef ASCII_7D
#undef ASCII_7E
#undef ASCII_7F

#undef ISO_8859_1_A0
#undef ISO_8859_1_A1
#undef ISO_8859_1_A2
#undef ISO_8859_1_A3
#undef ISO_8859_1_A4
#undef ISO_8859_1_A5
#undef ISO_8859_1_A6
#undef ISO_8859_1_A7
#undef ISO_8859_1_A8
#undef ISO_8859_1_A9
#undef ISO_8859_1_AA
#undef ISO_8859_1_AB
#undef ISO_8859_1_AC
#undef ISO_8859_1_AD
#undef ISO_8859_1_AE
#undef ISO_8859_1_AF
#undef ISO_8859_1_B0
#undef ISO_8859_1_B1
#undef ISO_8859_1_B2
#undef ISO_8859_1_B3
#undef ISO_8859_1_B4
#undef ISO_8859_1_B5
#undef ISO_8859_1_B6
#undef ISO_8859_1_B7
#undef ISO_8859_1_B8
#undef ISO_8859_1_B9
#undef ISO_8859_1_BA
#undef ISO_8859_1_BB
#undef ISO_8859_1_BC
#undef ISO_8859_1_BD
#undef ISO_8859_1_BE
#undef ISO_8859_1_BF
#undef ISO_8859_1_C0
#undef ISO_8859_1_C1
#undef ISO_8859_1_C2
#undef ISO_8859_1_C3
#undef ISO_8859_1_C4
#undef ISO_8859_1_C5
#undef ISO_8859_1_C6
#undef ISO_8859_1_C7
#undef ISO_8859_1_C8
#undef ISO_8859_1_C9
#undef ISO_8859_1_CA
#undef ISO_8859_1_CB
#undef ISO_8859_1_CC
#undef ISO_8859_1_CD
#undef ISO_8859_1_CE
#undef ISO_8859_1_CF
#undef ISO_8859_1_D0
#undef ISO_8859_1_D1
#undef ISO_8859_1_D2
#undef ISO_8859_1_D3
#undef ISO_8859_1_D4
#undef ISO_8859_1_D5
#undef ISO_8859_1_D6
#undef ISO_8859_1_D7
#undef ISO_8859_1_D8
#undef ISO_8859_1_D9
#undef ISO_8859_1_DA
#undef ISO_8859_1_DB
#undef ISO_8859_1_DC
#undef ISO_8859_1_DD
#undef ISO_8859_1_DE
#undef ISO_8859_1_DF
#undef ISO_8859_1_E0
#undef ISO_8859_1_E1
#undef ISO_8859_1_E2
#undef ISO_8859_1_E3
#undef ISO_8859_1_E4
#undef ISO_8859_1_E5
#undef ISO_8859_1_E6
#undef ISO_8859_1_E7
#undef ISO_8859_1_E8
#undef ISO_8859_1_E9
#undef ISO_8859_1_EA
#undef ISO_8859_1_EB
#undef ISO_8859_1_EC
#undef ISO_8859_1_ED
#undef ISO_8859_1_EE
#undef ISO_8859_1_EF
#undef ISO_8859_1_F0
#undef ISO_8859_1_F1
#undef ISO_8859_1_F2
#undef ISO_8859_1_F3
#undef ISO_8859_1_F4
#undef ISO_8859_1_F5
#undef ISO_8859_1_F6
#undef ISO_8859_1_F7
#undef ISO_8859_1_F8
#undef ISO_8859_1_F9
#undef ISO_8859_1_FA
#undef ISO_8859_1_FB
#undef ISO_8859_1_FC
#undef ISO_8859_1_FD
#undef ISO_8859_1_FE
#undef ISO_8859_1_FF

///@endcond
