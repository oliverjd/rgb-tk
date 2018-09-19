#include "GenericController.h"
#include "../emulator/VirtualController.h"

GenericController::GenericController(VirtualController* virtualController) {
    remote44 = std::make_unique<Remote44>(virtualController);
};

void GenericController::togglePower() {
    powerIsOn = !powerIsOn;
    remote44->sendButtonPress(button_power);
}

void GenericController::turnPowerOn() {
    if (!powerIsOn) {
        powerIsOn = true;
        remote44->sendButtonPress(button_power);
    }
}

void GenericController::turnPowerOff() {
    if (powerIsOn) {
        powerIsOn = false;
        remote44->sendButtonPress(button_power);
    }
}

void GenericController::switchToPreset(char colour, char number) {
    for (auto const& [key, val] : presets) {
        if (val.presetColour == colour and val.presetNumber == number) {
            remote44->sendButtonPress(key);
        }
    }
}

void GenericController::switchToDiy(char number) {
    for (auto const& [key, val] : diyNumbers) {
        if (val.presetColour == 'd' and val.presetNumber == number) {
            remote44->sendButtonPress(key);
        }
    }

}

void GenericController::modifyCurrentDiy(int colour, bool increase) {
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
    if (increase) {
        remote44->sendButtonPress(button_brightnessUp);
    } else {
        remote44->sendButtonPress(button_brightnessDown);
    }
}
