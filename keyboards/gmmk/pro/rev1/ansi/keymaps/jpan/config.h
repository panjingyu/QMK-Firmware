#pragma once

#ifdef RGB_MATRIX_ENABLE

    #define RGB_DISABLE_TIMEOUT (20*60*1000)    // 20 minutes, by ms
    // Below added per: https://beta.docs.qmk.fm/using-qmk/hardware-features/lighting/feature_rgb_matrix#suspended-state-id-suspended-state
    #define RGB_DISABLE_WHEN_USB_SUSPENDED

    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200 // limits maximum brightness of LEDs to 200 out of 255. If not defined maximum brightness is set to 255
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_TYPING_HEATMAP // Sets the default mode, if none has been set
    #define RGB_MATRIX_STARTUP_HUE 177 // Sets the default hue value, if none has been set
    #define RGB_MATRIX_STARTUP_SAT 255 // Sets the default saturation value, if none has been set
    #define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS // Sets the default brightness value, if none has been set

// Effects
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS  // Heatmap, Rain
    #define RGB_MATRIX_KEYPRESSES           // REACTIVE, SPLASH modes
#endif
