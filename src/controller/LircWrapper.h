#ifndef RGBTK_LIRCWRAPPER_H
#define RGBTK_LIRCWRAPPER_H


#include <string>

class LircWrapper {
public:
    LircWrapper();

    void sendOnce(std::string);

private:
    int fd;
    std::string nameOfRemote;
};


#endif //RGBTK_LIRCWRAPPER_H
