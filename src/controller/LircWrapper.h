#ifndef RGB_TK_LIRCWRAPPER_H
#define RGB_TK_LIRCWRAPPER_H


#include <string>

class LircWrapper {
public:
    LircWrapper();

    void sendOnce(std::string);

private:
    int fd;
    std::string nameOfRemote;
};


#endif //RGB_TK_LIRCWRAPPER_H
