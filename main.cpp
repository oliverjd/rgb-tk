#include <iostream>
#include <memory>
#include <csignal>

#include "src/controller/GenericController.h"
#include "src/emulator/VirtualController.h"
#include <thread>

int main() {
    std::unique_ptr<VirtualController> virtualController;
    std::unique_ptr<GenericController> controller;

    virtualController = std::make_unique<VirtualController>();
    controller = std::make_unique<GenericController>(virtualController.get());
    virtualController->setupKeyboardListener(controller.get());

    return 0;
}