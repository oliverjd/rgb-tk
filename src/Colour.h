#ifndef RGBTK_COLOUR_H
#define RGBTK_COLOUR_H


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


#endif //RGBTK_COLOUR_H
