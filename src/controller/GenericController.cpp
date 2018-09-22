#include "GenericController.h"
#include "../emulator/VirtualController.h"

GenericController::GenericController(VirtualController* virtualController) {
    remote44 = std::make_unique<Remote44>(virtualController);
};

void GenericController::togglePower() {
    std::lock_guard<std::mutex> lock(m);
    powerIsOn = !powerIsOn;
    remote44->sendButtonPress(button_power);
}

void GenericController::turnPower(bool newState) {
    std::lock_guard<std::mutex> lock(m);
    if ((!powerIsOn and newState) or (powerIsOn and !newState)) {
        powerIsOn = newState;
        remote44->sendButtonPress(button_power);
    }
}

void GenericController::switchToPreset(char colour, char number) {
    std::lock_guard<std::mutex> lock(m);
    for (auto const& [key, val] : presets) {
        if (val.presetColour == colour and val.presetNumber == number) {
            currentMode = mode_preset;
            presetTransient = key;
            remote44->sendButtonPress(key);
        }
    }
}

void GenericController::switchToDiy(char number) {
    std::lock_guard<std::mutex> lock(m);
    for (auto const& [key, val] : diyNumbers) {
        if (val.presetColour == 'd' and val.presetNumber == number) {
            currentMode = mode_diy;
            diySelectTransient = key;
            remote44->sendButtonPress(key);
        }
    }
}

void GenericController::modifyCurrentDiy(int colour, bool increase) {
    std::lock_guard<std::mutex> lock(m);
    if (colour == 'r') {
        if (increase) {
            remote44->sendButtonPress(button_redUp);
        } else {
            remote44->sendButtonPress(button_redDown);
        }
    } else if (colour == 'g') {
        if (increase) {
            remote44->sendButtonPress(button_greenUp);
        } else {
            remote44->sendButtonPress(button_greenDown);
        }
    } else if (colour == 'b') {
        if (increase) {
            remote44->sendButtonPress(button_blueUp);
        } else {
            remote44->sendButtonPress(button_blueDown);
        }
    }
}

void GenericController::changeBrightness(bool increase) {
    std::lock_guard<std::mutex> lock(m);
    if (increase) {
        brightness = std::min(BRIGHTNESS_LEVELS, brightness + 1);
        remote44->sendButtonPress(button_brightnessUp);
    } else {
        brightness = std::max(1, brightness - 1);
        remote44->sendButtonPress(button_brightnessDown);
    }
}
