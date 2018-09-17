#include "Remote44.h"
#include "LircWrapper.h"
#include <string>
#include <thread>
#include <iostream>
#include "Controller44.h"

Remote44::Remote44(std::shared_ptr<VirtualController> virtualController) :
        virtualController(virtualController), lircWrapper(std::make_shared<LircWrapper>()) {
}

void Remote44::sendButtonPress(Button button, int n) {
    int millisecondsBetweenButtonPresses = 10;
    if (virtualController == nullptr) {
        for (int i = 0; i < n; i++) {
            lircWrapper->sendOnce(buttonCodes.at(button));
            std::this_thread::sleep_for(std::chrono::milliseconds(millisecondsBetweenButtonPresses));
        }
    } else {
        // send command to virtual controller
        virtualController->receiveRemoteCommand(button);
    }
}
