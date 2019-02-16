#pragma once

class Colour {
public:
    Colour(int, int, int);
    Colour(int, int, int, char, char);

    int red;
    int green;
    int blue;
    char presetColour;
    char presetNumber;
};
