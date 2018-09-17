#ifndef RGB_ME_GENERICCONTROLLER_H
#define RGB_ME_GENERICCONTROLLER_H


#include <memory>
#include "../emulator/VirtualController.h"
#include "Controller44.h"
#include "Remote44.h"

class VirtualController;
class Remote44;

class GenericController: public Controller44 {
public:
    GenericController(std::shared_ptr<VirtualController>);

    void togglePower();
    void turnPowerOn();
    void turnPowerOff();
    void switchToPreset(char colour, char number);
    void switchToDiy(char number);
    void modifyCurrentDiy(int colour, bool increase);
    void changeBrightness(bool increase);

private:
    std::shared_ptr<Remote44> remote44;

};


#endif //RGB_ME_GENERICCONTROLLER_H
