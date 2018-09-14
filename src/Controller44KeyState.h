#ifndef RGB_ME_CONTROLLER44KEY_H
#define RGB_ME_CONTROLLER44KEY_H


#include "Rgb44.h"
#include <vector>

class Controller44KeyState {
public:
    Controller44KeyState();

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


#endif //RGB_ME_CONTROLLER44KEY_H
