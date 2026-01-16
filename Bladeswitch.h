// ProffieOS7 Config File
#ifdef CONFIG_TOP
#include "proffieboard_v3_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 2
const unsigned int maxLedsPerStrip = 144;
#define EXTRA_COLOR_BUFFER_SPACE 60
#define VOLUME 1000
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define MOTION_TIMEOUT 60 * 15 * 1000
#define IDLE_OFF_TIME 60 * 15 * 1000
#define DISABLE_BASIC_PARSER_STYLES
#define DISABLE_DIAGNOSTIC_COMMANDS
#define SHARED_POWER_PINS

#define NO_REPEAT_RANDOM
#define COLOR_CHANGE_DIRECT
#define BLADE_DETECT_PIN blade4Pin

#define FETT263_MANUAL_BLADE_ARRAY
#define SAVE_STATE
#define SAVE_PRESET

#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif


#ifdef CONFIG_PRESETS

Preset presets[] = {
{ "VADER;common",  "tracks/track.wav",
//BLADE
StyleNormalPtr<CYAN, WHITE, 300, 800>(),
//MOTOR
StyleNormalPtr<CYAN, WHITE, 300, 800>(),
"preset0"
},
{ "ANH;common",  "tracks/track.wav",
//BLADE
StyleNormalPtr<RED, WHITE, 300, 800>(),
//MOTOR
StyleNormalPtr<CYAN, WHITE, 300, 800>(),
"preset0"
},

};

Preset presets1[] = {
{ "QUIGON;common",  "tracks/track.wav",
//BLADE
StyleNormalPtr<CYAN, WHITE, 300, 800>(),
//MOTOR
StyleNormalPtr<CYAN, WHITE, 300, 800>(),
"preset0"
},
{ "ANH;common",  "tracks/track.wav",
//BLADE
StyleNormalPtr<RED, WHITE, 300, 800>(),
//MOTOR
StyleNormalPtr<CYAN, WHITE, 300, 800>(),
},


};

Preset presets2[] = {
{ "OBI;common",  "tracks/track.wav",
StyleNormalPtr<CYAN, WHITE, 300, 800>(),

},

{ "ANH;common",  "tracks/track.wav",
//BLADE
StyleNormalPtr<CYAN, WHITE, 300, 800>(),
//MOTOR

},

};

BladeConfig blades[] = {
{ NO_BLADE, 
//BLADE
WS281XBladePtr<132, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), 
//MOTOR
SimpleBladePtr<CH1LED, NoLED, NoLED, NoLED, bladePowerPin1, -1, -1, -1>(), 
CONFIGARRAY(presets), "nb_save"  },

{ NO_BLADE+1, 
//BLADE
WS281XBladePtr<132, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), 
//MOTOR
SimpleBladePtr<CH1LED, NoLED, NoLED, NoLED, bladePowerPin1, -1, -1, -1>(),
CONFIGARRAY(presets1), "nb_save"  },

{ 0, 
//BLADE
WS281XBladePtr<132, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), 
//MOTOR
SimpleBladePtr<CH1LED, NoLED, NoLED, NoLED, bladePowerPin1, -1, -1, -1>(), 
CONFIGARRAY(presets2)},

};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif

 /* Generated with Fett263 Config Helper v3.10d */
