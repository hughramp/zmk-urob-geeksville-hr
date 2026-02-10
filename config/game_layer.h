// Geeksville add game layer

#ifdef SCROLL
// A nop layer just so wheht SCROLL_CMD is held down we can change the touchpad to instead generate
// scroll events.
#define SCROLL_CMD &mo SCROLL
#else
#define SCROLL_CMD ___
#endif

// Game layer: Replaces left 3x6 + three thumb keys with gaming layout.
// Number keys 1-5 shift to 6-0 when shift is held.
SIMPLE_MORPH(game_1_6, SFT, &kp N1, &kp N6)
SIMPLE_MORPH(game_2_7, SFT, &kp N2, &kp N7)
SIMPLE_MORPH(game_3_8, SFT, &kp N3, &kp N8)
SIMPLE_MORPH(game_4_9, SFT, &kp N4, &kp N9)
SIMPLE_MORPH(game_5_0, SFT, &kp N5, &kp N0)
// SIMPLEx_MORPH(game_esc_tab, SFT, &kp ESC, &kp TAB)

// Morphs to mirror right half alpha to left side shifted
SIMPLE_MORPH(k_r_f, SFT, &kp R, &kp F)
SIMPLE_MORPH(k_e_g, SFT, &kp E, &kp G)
SIMPLE_MORPH(k_w_h, SFT, &kp W, &kp H)
SIMPLE_MORPH(k_q_j, SFT, &kp Q, &kp J)
SIMPLE_MORPH(k_z_k, SFT, &kp Z, &kp K)

SIMPLE_MORPH(k_c_v, SFT, &kp C, &kp V)
SIMPLE_MORPH(k_d_b, SFT, &kp D, &kp B)
SIMPLE_MORPH(k_s_n, SFT, &kp S, &kp N)
SIMPLE_MORPH(k_a_m, SFT, &kp A, &kp M)

ZMK_42_LAYER(Game,
//╭──────┬──────┬──────┬──────┬──────╮         ╭──────┬──────┬──────┬──────┬──────╮
  &game_1_6 &game_2_7 &game_3_8 &game_4_9 &game_5_0, &kp T  &kp Y  &kp U   &kp I  &kp O,
//├──────┼──────┼──────┼──────┼──────┤         ├──────┼──────┼──────┼──────┼──────┤
   &k_z_k &k_q_j  &k_w_h &k_e_g &k_r_f,          &kp F &kp G  &kp H   &kp J  &kp K,
//├──────┼──────┼──────┼──────┼──────┤         ├──────┼──────┼──────┼──────┼──────┤
    &kp X &k_a_m  &k_s_n &k_d_b &k_c_v,         &kp V &kp B  &kp N   &kp M  &kp BSPC,
//╰──────┴──────┼──────┼──────┼──────┤         ├──────┼──────┼──────┼──────┴──────╯
           &kp SPACE &kp LSHFT,                        &mkp LCLK &mkp RCLK,
//              ╰──────┴──────┴                       ╰──────┴──────┴
// Outer keys:  OLT        OLM        OLB       ORT      ORM     ORB         OLH       ORH
              &kp ESC, &kp TAB,   &kp LCTRL,   &kp P,   &kp L,  &to DEF,  &kp LALT,  SCROLL_CMD
)

#ifdef SCROLL
// A nop layer just so wheht SCROLL_CMD is held down we can change the touchpad to instead generate
// scroll events.

ZMK_42_LAYER(Scrl,
    ___ ___ ___ ___ ___,    ___    ___    ___    ___    ___,
    ___ ___ ___ ___ ___,    ___    ___    ___    ___    ___,
    ___ ___ ___ ___ ___,    ___    ___    ___    ___    ___,
           ___ ___,            ___    ___,
           ___, ___, ___, ___, ___, ___, ___, ___)
#endif