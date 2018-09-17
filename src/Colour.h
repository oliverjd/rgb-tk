#ifndef RGB_ME_COLOUR_H
#define RGB_ME_COLOUR_H


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


#endif //RGB_ME_COLOUR_H
