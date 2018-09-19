#include "LircWrapper.h"

#include <ncurses.h>
#include <lirc_client.h>

LircWrapper::LircWrapper() : nameOfRemote("rgb44") {
    fd = lirc_get_local_socket(nullptr, 0);
    if (fd < 0) {
        // TODO Process error i.e. raise exception
        printw("LIRC error initialising.\n");
    } else {
        printw("LIRC initialised.\n");
    }
}

void LircWrapper::sendOnce(std::string buttonCode) {
    if (lirc_send_one(fd, nameOfRemote.c_str(), buttonCode.c_str()) == -1) {
        printw("LIRC error sending command.\n");
    } else {
        printw("LIRC sent command.\n");
    }
}