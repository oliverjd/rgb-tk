#ifndef RGB_ME_VIRTUALCONTROLLER_H
#define RGB_ME_VIRTUALCONTROLLER_H

#include "../controller/Remote44.h"
#include "../controller/Controller44.h"
#include "KeyboardListener.h"
#include "ColourDisplay.h"
#include "../controller/GenericController.h"
#include <memory>
#include <map>
#include <string>

class GenericController;
class KeyboardListener;

class VirtualController: public Controller44 {
public:
    VirtualController();
    void initialise(std::shared_ptr<GenericController>);
    void receiveRemoteCommand(Button);

private:
    const Colour BLACK = Colour(0, 0, 0);
    std::shared_ptr<ColourDisplay> colourDisplay;
    std::shared_ptr<KeyboardListener> keyboardListener;
    std::shared_ptr<GenericController> genericController;
    Colour calculateCurrentColour();
    void setColour(Colour);
    void changeDiyColour(Button);
    void changePresetBrightness(Button);
    Colour calculatePresetColour();
    double brightnessFraction;
};


#endif //RGB_ME_VIRTUALCONTROLLER_H
