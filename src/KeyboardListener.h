#ifndef RGB_ME_KEYBOARDLISTENER_H
#define RGB_ME_KEYBOARDLISTENER_H


#include "ncurses.h"
#include "Rgb44.h"
#include "GenericController.h"
#include <string>

class GenericController;

class KeyboardListener {
public:
    KeyboardListener(std::shared_ptr<GenericController>);
    void listenForKeypress();
private:
    const std::string KEY_WAITING_MESSAGE = "Press keys to control LED.\n";
    static const int DIY_KEY = 'd';
    static const int PRESET_KEY = 'c';
    static const int POWER_KEY = 'x';
    static const int PAUSE_KEY = 'p';
    static const int SPEED_UP_KEY = KEY_RIGHT;
    static const int SPEED_DOWN_KEY = KEY_LEFT;
    static const int BRIGHTNESS_UP_KEY = KEY_UP;
    static const int BRIGHTNESS_DOWN_KEY = KEY_DOWN;
    static const int AUTO_KEY = 'a';
    static const int FLASH_KEY = 's';
    static const int DIY_RED_KEY = 'r';
    static const int DIY_BLUE_KEY = 'b';
    static const int DIY_GREEN_KEY = 'g';
    
    void keyPressed(int);
    void getSecondKeypress(int);
    void presetChoice(int);
    void diyChoice(int);
    void diyModifyMode(int);
    std::shared_ptr<GenericController> genericController;
    
};


#endif //RGB_ME_KEYBOARDLISTENER_H
