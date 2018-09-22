#include <iostream>
#include <csignal>

#include "src/routines/RestServer.h"
#include "src/controller/GenericController.h"
#include "src/emulator/VirtualController.h"

#include "libs/gopt/gopt.h"

int main(int argc, char **argv) {

//    struct option options[3];
//    options[0].long_name = "mode";
//    options[0].short_name = 'm';
//    options[0].flags = GOPT_ARGUMENT_OPTIONAL;
//    options[0].long_name = "controller";
//    options[0].short_name = 'c';
//    options[0].flags = GOPT_ARGUMENT_OPTIONAL;
//    options[2].flags = GOPT_LAST;
//    argc = gopt(argv, options);
//    gopt_errors(argv[0], options);

    std::unique_ptr<VirtualController> virtualController;
    std::unique_ptr<GenericController> controller;
    virtualController = std::make_unique<VirtualController>();
    controller = std::make_unique<GenericController>(virtualController.get());
    virtualController->setupKeyboardListener(controller.get());

    RestServer server(8080, "ledpwd", controller.get());

    while(virtualController->alive()) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    };

    return 0;
}
