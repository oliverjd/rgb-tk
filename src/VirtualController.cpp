#include "VirtualController.h"
#include "KeyboardListener.h"
#include "Controller44KeyState.h"
#include "Remote44Key.h"
#include <ncurses.h>
#include <iostream>
#include <cmath>

VirtualController::VirtualController() = default;

void VirtualController::initialise(std::shared_ptr<GenericController> gc) {
    brightnessFraction = 1;
    currentMode = mode_preset;
    presetTransient = button_red0;
    genericController = gc;

    keyboardListener = std::make_shared<KeyboardListener>(gc);
    colourDisplay = std::make_shared<ColourDisplay>();

    ncursesSetup();

    colourDisplay->initColourDisplay();
    keyboardListener->listenForKeypress();
}

void VirtualController::ncursesSetup() {
    initscr();
    clear();
    noecho();
    cbreak();
    start_color();
    keypad(stdscr, true);
    curs_set(0);
    scrollok(stdscr,TRUE);
}

void VirtualController::receiveRemoteCommand(Button buttonCode) {
    printw("Received\n");

    if (presets.count(buttonCode) > 0) {
        presetTransient = buttonCode;
        currentMode = mode_preset;
    } else if (diyNumbers.count(buttonCode) > 0) {
        printw("Received DIY change button\n");
        currentMode = mode_diy;
        diySelectTransient = buttonCode;
    }


    if (currentMode == mode_diy) {
        printw("Changing DIY colour.\n");
        changeDiyColour(buttonCode);
    } else if (currentMode == mode_preset) {
        changePresetBrightness(buttonCode);
    }

    if (buttonCode == button_power) {
        printw("Power toggle.\n");
        powerIsOn = !powerIsOn;
    }

    Colour col = calculateCurrentColour();
    setColour(col);
}

void VirtualController::changeDiyColour(Button buttonCode) {
    if (buttonCode == button_redUp) {
        diyColours.at(diySelectTransient).red = std::min(255, diyColours.at(diySelectTransient).red + DIY_STEP);
    } else if (buttonCode == button_redDown) {
        diyColours.at(diySelectTransient).red = std::max(0, diyColours.at(diySelectTransient).red - DIY_STEP);
    } else if (buttonCode == button_greenUp) {
        diyColours.at(diySelectTransient).green = std::min(255, diyColours.at(diySelectTransient).green + DIY_STEP);
    } else if (buttonCode == button_greenDown) {
        diyColours.at(diySelectTransient).green = std::max(0, diyColours.at(diySelectTransient).green - DIY_STEP);
    } else if (buttonCode == button_blueUp) {
        diyColours.at(diySelectTransient).blue = std::min(255, diyColours.at(diySelectTransient).blue + DIY_STEP);
    } else if (buttonCode == button_blueDown) {
        diyColours.at(diySelectTransient).blue = std::max(0, diyColours.at(diySelectTransient).blue - DIY_STEP);
    }
}

void VirtualController::changePresetBrightness(Button buttonCode) {
    if (buttonCode == button_brightnessUp) {
        brightness = std::min(brightness + 1, BRIGHTNESS_LEVELS);
    } else if (buttonCode == button_brightnessDown) {
        brightness = std::max(brightness - 1, 1);
    }
}

Colour VirtualController::calculateCurrentColour() {
    auto colour = BLACK;
    if (currentMode == mode_preset) {
        colour = calculatePresetColour();
    } else if (currentMode == mode_diy) {
        colour = diyColours.at(diySelectTransient);
    }

    switch (currentMode) {
        case mode_auto:
            break;
        case mode_flash:
            break;
        case mode_fade3:
            break;
        case mode_fade7:
            break;
        case mode_jump3:
            break;
        case mode_jump7:
            break;
        default:
            break;
    }
    if (!powerIsOn) {
        colour = BLACK;
    }
    return colour;
}

Colour VirtualController::calculatePresetColour() {
    Colour colour = presets.at(presetTransient);
    brightnessFraction = double(brightness) / BRIGHTNESS_LEVELS;
    colour.red = int(std::round(colour.red * brightnessFraction));
    colour.green = int(std::round(colour.green * brightnessFraction));
    colour.blue = int(std::round(colour.blue * brightnessFraction));
    return colour;
}


void VirtualController::setColour(Colour col) {
    printw("Set colour\n");
    colourDisplay->updateDisplayedColour(col.red, col.green, col.blue);
}


