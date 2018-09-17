#include <iostream>
#include <memory>
#include <csignal>

#include "src/controller/GenericController.h"
#include "src/emulator/VirtualController.h"
#include <thread>

int main() {
    std::shared_ptr<VirtualController> virtualController;
    std::shared_ptr<GenericController> controller;

    virtualController = std::make_shared<VirtualController>();
    controller = std::make_shared<GenericController>(virtualController);
    virtualController->initialise(controller);

    return 0;
}