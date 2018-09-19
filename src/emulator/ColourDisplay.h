#ifndef RGBTK_COLOURDISPLAY_H
#define RGBTK_COLOURDISPLAY_H


class ColourDisplay {
public:
    ColourDisplay();
    void updateDisplayedColour(int, int, int);

private:
    void ncursesSetup();
};


#endif //RGBTK_COLOURDISPLAY_H
