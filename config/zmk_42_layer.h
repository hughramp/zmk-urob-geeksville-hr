
// Provides a 3x6 + 3 layout to make it easy to use those extra keys if you wish

#ifndef ZMK_42_LAYER
#define ZMK_42_LAYER(name, LT, RT, LM, RM, LB, RB, LH, RH, OLT, OLM, OLB, ORT, ORM, ORB, OLH, ORH)     \
    ZMK_LAYER(                                                   \
        name,                                                    \
        OLT LT                       RT ORT               \
        OLM LM                       RM ORM               \
        OLB LB                       RB ORB               \
        OLH LH RH ORH  )
#endif

// Default urob layout if not specified otherwise
#ifndef ZMK_BASE_LAYER
#define ZMK_BASE_LAYER(name, LT, RT, LM, RM, LB, RB, LH, RH)     \
    ZMK_42_LAYER(name, LT, RT, LM, RM, LB, RB, LH, RH, \
        ___, ___, ___,                          \
        ___, ___, ___,                     \
        ___, &smart_mouse                       \
    )
#endif

#ifndef ZMK_MOUSE_LAYER
#define ZMK_MOUSE_LAYER(name, LT, RT, LM, RM, LB, RB, LH, RH) ZMK_BASE_LAYER(name, LT, RT, LM, RM, LB, RB, LH, RH)
#endif