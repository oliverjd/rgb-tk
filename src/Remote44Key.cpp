#include "Remote44Key.h"
#include "LircWrapper.h"
#include <string>
#include <thread>
#include <iostream>

Remote44Key::Remote44Key(std::shared_ptr<VirtualController> virtualController) :
        virtualController(virtualController), lircWrapper(std::make_shared<LircWrapper>()) {
}

void Remote44Key::sendButtonPress(Button button, int n) {
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
