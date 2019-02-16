#pragma once

#include <memory>
#include <mutex>

#include "../emulator/VirtualController.h"
#include "Controller44.h"
#include "Remote44.h"

class VirtualController;
class Remote44;

class GenericController: public Controller44 {
public:
    explicit GenericController(VirtualController*);

    void togglePower();
    void turnPower(bool);
    void switchToPreset(char, char);
    void switchToDiy(char);
    void modifyCurrentDiy(int, bool);
    void changeBrightness(bool);

private:
    std::unique_ptr<Remote44> remote44;
    std::mutex m;

};

