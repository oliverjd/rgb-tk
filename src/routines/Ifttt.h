#ifndef RGBTK_IFTTT_H
#define RGBTK_IFTTT_H

#include "../controller/GenericController.h"

class Ifttt {
public:
    explicit Ifttt(GenericController*);

private:
    GenericController* gc;
};


#endif //RGBTK_IFTTT_H
