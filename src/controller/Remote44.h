#ifndef RGBTK_REMOTE44KEY_H
#define RGBTK_REMOTE44KEY_H

#include "LircWrapper.h"
#include "../emulator/VirtualController.h"
#include <map>
#include <memory>
#include "Controller44.h"

class VirtualController;

class Remote44 : public Controller44 {
public:
    explicit Remote44(VirtualController* virtualController);
    void sendButtonPress(Controller44::Button);

private:
    VirtualController* virtualController;
    std::unique_ptr<LircWrapper> lircWrapper;
};


#endif //RGBTK_REMOTE44KEY_H
