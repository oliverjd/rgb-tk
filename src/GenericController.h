#ifndef RGB_ME_GENERICCONTROLLER_H
#define RGB_ME_GENERICCONTROLLER_H


#include <memory>
#include "VirtualController.h"
#include "Controller44KeyState.h"
#include "Remote44Key.h"

class VirtualController;
class Remote44Key;

class GenericController: public Controller44KeyState {
public:
    GenericController();
    void createRemoteObjects(std::shared_ptr<VirtualController> = nullptr);

    void togglePower();
    void turnPowerOn();
    void turnPowerOff();
    void switchToPreset(char colour, char number);
    void switchToDiy(char number);
    void modifyCurrentDiy(int colour, bool increase);
    void changeBrightness(bool increase);

private:
    std::shared_ptr<Remote44Key> remote44;

};


#endif //RGB_ME_GENERICCONTROLLER_H
