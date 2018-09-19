#include "Remote44.h"
#include "LircWrapper.h"
#include <string>
#include <thread>
#include <iostream>
#include "Controller44.h"

Remote44::Remote44(VirtualController* virtualController) :
        virtualController(virtualController), lircWrapper(std::make_unique<LircWrapper>()) {
}

void Remote44::sendButtonPress(Button button) {
    lircWrapper->sendOnce(buttonCodes.at(button));
    //std::this_thread::sleep_for(std::chrono::milliseconds(millisecondsBetweenButtonPresses));
    virtualController->receiveRemoteCommand(button);
}
