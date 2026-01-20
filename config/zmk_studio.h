// Geeksville added zmk-studio support
// Only add extra reserved layers when ZMK Studio is actually enabled
#ifndef ZMK_STUDIO_H
#define ZMK_STUDIO_H

#ifdef CONFIG_ZMK_STUDIO
/ {
    keymap {
        compatible = "zmk,keymap";

        extra1 {
            status = "reserved";
        };

        extra2 {
            status = "reserved";
        };
    };
};
#endif

#endif