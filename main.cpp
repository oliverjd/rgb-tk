#include <iostream>
#include <csignal>

#include "src/controller/GenericController.h"
#include "src/emulator/VirtualController.h"

int main() {
    std::unique_ptr<VirtualController> virtualController;
    std::unique_ptr<GenericController> controller;
    virtualController = std::make_unique<VirtualController>();
    controller = std::make_unique<GenericController>(virtualController.get());
    virtualController->setupKeyboardListener(controller.get());

    while(virtualController->alive()) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    };

    return 0;
}