#include "Colour.h"

Colour::Colour(int r, int g, int b) : red(r), green(g), blue(b), presetColour(), presetNumber() {}

Colour::Colour(int r, int g, int b, char pC, char pN) : red(r), green(g), blue(b), presetColour(pC), presetNumber(pN) {}