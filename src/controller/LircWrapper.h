#pragma once

#include <string>

class LircWrapper {
public:
    LircWrapper();

    void sendOnce(std::string);

private:
    int fd;
    std::string nameOfRemote;
};

