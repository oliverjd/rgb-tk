#ifndef RGB_ME_REMOTE44KEY_H
#define RGB_ME_REMOTE44KEY_H

#include "LircWrapper.h"
#include "VirtualController.h"
#include "Rgb44.h"
#include <map>
#include <memory>


class VirtualController;

class Remote44Key {
public:
    explicit Remote44Key(std::shared_ptr<VirtualController> virtualController);
    void sendButtonPress(Button, int = 1);

private:
    std::shared_ptr<VirtualController> virtualController;
    std::shared_ptr<LircWrapper> lircWrapper;
};


#endif //RGB_ME_REMOTE44KEY_H
