#include <iostream>
#include <memory>
#include <csignal>

#include "src/GenericController.h"
#include "src/VirtualController.h"

int main() {

    std::shared_ptr<VirtualController> virtualController = std::make_shared<VirtualController>();
    std::shared_ptr<GenericController> controller = std::make_shared<GenericController>();
    controller->createRemoteObjects(virtualController);
    virtualController->initialise(controller);

    return 0;
}