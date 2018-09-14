#include "LircWrapper.h"

#include <lirc_client.h>

LircWrapper::LircWrapper() : nameOfRemote("rgb44") {
    fd = lirc_get_local_socket(NULL, 0);
    if (fd < 0) {
        // TODO Process error i.e. raise exception
    }
}

void LircWrapper::sendOnce(std::string buttonCode) {
    if (lirc_send_one(fd, nameOfRemote.c_str(), buttonCode.c_str()) == -1) {
        // TODO Process errors i.e. raise exception
    };
}