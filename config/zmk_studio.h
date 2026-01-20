// Geeksville added zmk-studio support
#ifndef ZMK_STUDIO_H
#define ZMK_STUDIO_H

/ {
    keymap {
        compatible = "zmk,keymap";

        extra1 {
            status = "reserved";
            label = "Extra1";  // Needed to keep cpp macros happy
        };

        extra2 {
            status = "reserved";
            label = "Extra2";  // Needed to keep cpp macros happy
        };
    };
};

#endif