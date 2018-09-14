#ifndef RGB_ME_BUTTONS_H
#define RGB_ME_BUTTONS_H

#include <map>

enum Button {
    button_power, button_pause, button_brightnessUp, button_brightnessDown,
    button_red0, button_red1, button_red2, button_red3, button_red4,
    button_green0, button_green1, button_green2, button_green3, button_green4,
    button_blue0, button_blue1, button_blue2, button_blue3, button_blue4,
    button_white0, button_white1, button_white2, button_white3, button_white4,
    button_redUp, button_redDown, button_greenUp, button_greenDown, button_blueUp, button_blueDown,
    button_diy1, button_diy2, button_diy3, button_diy4, button_diy5, button_diy6,
    button_quick, button_slow, button_auto, button_flash, button_fade3, button_fade7, button_jump3, button_jump7
};

static const std::map<Button, std::string> buttonCodes = {
    {button_power,          "POWER"},
    {button_pause,          "PLAY"},
    {button_brightnessUp,    "BRIGHTNESS_UP"},
    {button_brightnessDown, "BRIGHTNESS_DOWN"},
    {button_red0,           "RED_0"},
    {button_red1,           "RED_1"},
    {button_red2,           "RED_2"},
    {button_red3,           "RED_3"},
    {button_red4,           "RED_4"},
    {button_green0,         "GREEN_0"},
    {button_green1,         "GREEN_1"},
    {button_green2,         "GREEN_2"},
    {button_green3,         "GREEN_3"},
    {button_green4,         "GREEN_4"},
    {button_blue0,          "BLUE_0"},
    {button_blue1,          "BLUE_1"},
    {button_blue2,          "BLUE_2"},
    {button_blue3,          "BLUE_3"},
    {button_blue4,          "BLUE_4"},
    {button_white0,         "WHITE_0"},
    {button_white1,         "WHITE_1"},
    {button_white2,         "WHITE_2"},
    {button_white3,         "WHITE_3"},
    {button_white4,         "WHITE_4"},
    {button_redUp,          "RED_UP"},
    {button_redDown,        "RED_DOWN"},
    {button_greenUp,        "GREEN_UP"},
    {button_greenDown,      "GREEN_DOWN"},
    {button_blueUp,         "BLUE_UP"},
    {button_blueDown,       "BLUE_DOWN"},
    {button_diy1,           "DIY_1"},
    {button_diy2,           "DIY_2"},
    {button_diy3,           "DIY_3"},
    {button_diy4,           "DIY_4"},
    {button_diy5,           "DIY_5"},
    {button_diy6,           "DIY_6"},
    {button_quick,          "QUICK"},
    {button_slow,           "SLOW"},
    {button_auto,          "AUTO"},
    {button_flash,          "FLASH"},
    {button_fade3,          "FADE_3"},
    {button_fade7,          "FADE_7"},
    {button_jump3,          "JUMP_3"},
    {button_jump7,          "JUMP_7"}};

enum Mode {
    mode_preset, mode_diy, mode_auto, mode_flash, mode_fade3, mode_fade7, mode_jump3, mode_jump7
};

struct Colour {
    Colour(int r, int g, int b) : red(r), green(g), blue(b) {
    }

    Colour(int r, int g, int b, char pC, char pN) : red(r), green(g), blue(b), presetColour(pC), presetNumber(pN) {
    }

    int red;
    int green;
    int blue;
    char presetColour;
    char presetNumber;
};

static const std::map<Button, Colour> presets = {
        {button_red0,   Colour(255, 0, 0, 'r', '0')},
        {button_red1,   Colour(255, 136, 0, 'r', '1')},
        {button_red2,   Colour(255, 182, 0, 'r', '2')},
        {button_red3,   Colour(250, 255, 0, 'r', '3')},
        {button_red4,   Colour(148, 255, 0, 'r', '4')},
        {button_green0, Colour(0, 255, 0, 'g', '0')},
        {button_green1, Colour(0, 255, 140, 'g', '1')},
        {button_green2, Colour(0, 255, 165, 'g', '2')},
        {button_green3, Colour(0, 255, 191, 'g', '3')},
        {button_green4, Colour(0, 216, 255, 'g', '4')},
        {button_blue0,  Colour(0, 0, 255, 'b', '0')},
        {button_blue1,  Colour(72, 0, 255, 'b', '1')},
        {button_blue2,  Colour(119, 0, 255, 'b', '2')},
        {button_blue3,  Colour(178, 0, 255, 'b', '3')},
        {button_blue4,  Colour(225, 0, 255, 'b', '4')},
        {button_white0, Colour(255, 255, 255, 'w', '0')},
        {button_white1, Colour(246, 224, 255, 'w', '1')},
        {button_white2, Colour(241, 135, 255, 'w', '2')},
        {button_white3, Colour(214, 225, 255, 'w', '3')},
        {button_white4, Colour(173, 230, 255, 'w', '4')}
};

static const std::map<Button, Colour> diyNumbers = {
        {button_diy1, Colour(0,0,0, 'd', '1')},
        {button_diy2, Colour(0,0,0, 'd', '2')},
        {button_diy3, Colour(0,0,0, 'd', '3')},
        {button_diy4, Colour(0,0,0, 'd', '4')},
        {button_diy5, Colour(0,0,0, 'd', '5')},
        {button_diy6, Colour(0,0,0, 'd', '6')},
};

#endif //RGB_ME_BUTTONS_H
