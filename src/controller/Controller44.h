#ifndef RGBTK_CONTROLLER44KEY_H
#define RGBTK_CONTROLLER44KEY_H


#include <vector>
#include <map>
#include <string>
#include "../Colour.h"

class Controller44 {
public:
    Controller44();

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

    enum Mode {
        mode_preset, mode_diy, mode_auto, mode_flash, mode_fade3, mode_fade7, mode_jump3, mode_jump7
    };

    const std::map<Button, std::string> buttonCodes;
    const std::map<Button, Colour> presets;
    const std::map<Button, Colour> diyNumbers;

protected:
    const int DIY_LEVELS = 64;
    const int DIY_STEP = int(256.0/DIY_LEVELS);
    const int BRIGHTNESS_LEVELS = 8;
    bool powerIsOn;
    int speed;
    int brightness;
    bool pausedTransient;

    Button presetTransient;
    Button diySelectTransient;
    Mode currentMode;
    Colour colour;
    std::map<Button, Colour> diyColours;

private:
    void initialiseKnownState();
};


#endif //RGBTK_CONTROLLER44KEY_H
