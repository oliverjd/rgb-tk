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
    Button buttonCodeToSend;
    for (auto const& [key, val] : presets) {
        if (val.presetColour == colour and val.presetNumber == number) {
            buttonCodeToSend = key;
        }
    }
    remote44->sendButtonPress(buttonCodeToSend);
}

void GenericController::switchToDiy(char number) {
    Button buttonCodeToSend;
    for (auto const& [key, val] : diyNumbers) {
        if (val.presetColour == 'd' and val.presetNumber == number) {
            buttonCodeToSend = key;
        }
    }
    remote44->sendButtonPress(buttonCodeToSend);
}

void GenericController::modifyCurrentDiy(int colour, bool increase) {
    Button buttonCodeToSend;
    if (colour == 'r') {
        if (increase) {
            buttonCodeToSend = button_redUp;
        } else {
            buttonCodeToSend = button_redDown;
        }
    } else if (colour == 'g') {
        if (increase) {
            buttonCodeToSend = button_greenUp;
        } else {
            buttonCodeToSend = button_greenDown;
        }
    } else if (colour == 'b') {
        if (increase) {
            buttonCodeToSend = button_blueUp;
        } else {
            buttonCodeToSend = button_blueDown;
        }
    }
    remote44->sendButtonPress(buttonCodeToSend);
}

void GenericController::changeBrightness(bool increase) {
    if (increase) {
        remote44->sendButtonPress(button_brightnessUp);
    } else {
        remote44->sendButtonPress(button_brightnessDown);
    }
}


