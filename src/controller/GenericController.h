#ifndef RGBTK_GENERICCONTROLLER_H
#define RGBTK_GENERICCONTROLLER_H


#include <memory>
#include "../emulator/VirtualController.h"
#include "Controller44.h"
#include "Remote44.h"

class VirtualController;
class Remote44;

class GenericController: public Controller44 {
public:
    explicit GenericController(VirtualController*);

    void togglePower();
    void turnPowerOn();
    void turnPowerOff();
    void switchToPreset(char, char);
    void switchToDiy(char);
    void modifyCurrentDiy(int, bool);
    void changeBrightness(bool);

private:
    std::unique_ptr<Remote44> remote44;

};


#endif //RGBTK_GENERICCONTROLLER_H
