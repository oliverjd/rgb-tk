#include "KeyboardListener.h"
#include <ncurses.h>

KeyboardListener::KeyboardListener(GenericController* genericController) :
        genericController(genericController) {
    listenForKeypress();
}

void KeyboardListener::listenForKeypress() {
    int gotKey;
    printw(KEY_WAITING_MESSAGE.c_str());
    const int ESC_KEY = 27;

    while(true) {
        gotKey = getch();
        if (gotKey == ESC_KEY) {
            nodelay(stdscr, true);
            int altModifier = getch();
            if (altModifier == -1) {
                endwin();
                return;
            }
            nodelay(stdscr, false);
        }
        keyPressed(gotKey);
    }
}

void KeyboardListener::keyPressed(int c) {
    if (c == POWER_KEY) {
        genericController->togglePower();
    } else if (c == BRIGHTNESS_UP_KEY) {
        genericController->changeBrightness(true);
    } else if (c == BRIGHTNESS_DOWN_KEY) {
        genericController->changeBrightness(false);
    } else if (c == DIY_KEY) {
        getSecondKeypress(DIY_KEY);
    } else if (c == DIY_RED_KEY) {
        getSecondKeypress(DIY_RED_KEY);
    } else if (c == DIY_GREEN_KEY) {
        getSecondKeypress(DIY_GREEN_KEY);
    } else if (c == DIY_BLUE_KEY) {
        getSecondKeypress(DIY_BLUE_KEY);
    } else if (c == PRESET_KEY) {
        getSecondKeypress(PRESET_KEY);
    }

    switch(c) {
        case PAUSE_KEY:
            //sendRemoteButton(button_pause);
            break;
        case SPEED_UP_KEY:
            //sendRemoteButton(button_quick);
            break;
        case SPEED_DOWN_KEY:
            //sendRemoteButton(button_slow);
            break;
        case AUTO_KEY:
            //sendRemoteButton(button_auto);
            break;
        case FLASH_KEY:
            //sendRemoteButton(button_flash);
            break;
        default:
            break;
    }
}

void KeyboardListener::getSecondKeypress(int c) {
    printw("Waiting for second key...\n");
    if (c == DIY_RED_KEY or c == DIY_GREEN_KEY or c == DIY_BLUE_KEY) {
        diyModifyMode(c);
    } else if (c == PRESET_KEY) {
        int secondKey = getch();
        presetChoice(secondKey);
    } else if (c == DIY_KEY) {
        int secondKey = getch();
        diyChoice(secondKey);
    }
}

void KeyboardListener::diyModifyMode(int c) {
    printw("Changing DIY color...\n");
    while(true) {
        int x = getch();
        switch (x) {
            case KEY_UP:
                genericController->modifyCurrentDiy(char(c), true);
                break;
            case KEY_DOWN:
                genericController->modifyCurrentDiy(c, false);
                break;
            default:
                printw(KEY_WAITING_MESSAGE.c_str());
                return;
        }
    }
}

void KeyboardListener::presetChoice(int colour) {
    printw("Waiting for third key...\n");
    int number = getch();
    genericController->switchToPreset(char(colour), char(number));
    printw(KEY_WAITING_MESSAGE.c_str());
}

void KeyboardListener::diyChoice(int number) {
    genericController->switchToDiy(char(number));
    printw(KEY_WAITING_MESSAGE.c_str());
}
