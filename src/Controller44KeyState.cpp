#include "Controller44KeyState.h"
#include "Remote44Key.h"
#include <map>

Controller44KeyState::Controller44KeyState() : colour(Colour(0,0,0)),
        diyColours(diyNumbers), brightness(BRIGHTNESS_LEVELS) {
    initialiseKnownState();
}

void Controller44KeyState::initialiseKnownState() {

}
