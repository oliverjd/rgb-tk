#ifndef RGB_ME_REMOTE44KEY_H
#define RGB_ME_REMOTE44KEY_H

#include "LircWrapper.h"
#include "../emulator/VirtualController.h"
#include <map>
#include <memory>
#include "Controller44.h"

class VirtualController;

class Remote44 : public Controller44 {
public:
    explicit Remote44(std::shared_ptr<VirtualController> virtualController);
    void sendButtonPress(Controller44::Button, int = 1);

private:
    std::shared_ptr<VirtualController> virtualController;
    std::shared_ptr<LircWrapper> lircWrapper;
};


#endif //RGB_ME_REMOTE44KEY_H
