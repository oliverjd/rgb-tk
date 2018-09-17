#ifndef RGB_ME_LIRCWRAPPER_H
#define RGB_ME_LIRCWRAPPER_H


#include <string>

class LircWrapper {
public:
    LircWrapper();

    void sendOnce(std::string);

private:
    int fd;
    std::string nameOfRemote;
};


#endif //RGB_ME_LIRCWRAPPER_H
