#ifndef RGB_ME_COLOURDISPLAY_H
#define RGB_ME_COLOURDISPLAY_H


class ColourDisplay {
public:
    ColourDisplay();
    void updateDisplayedColour(int, int, int);

private:
    void ncursesSetup();
};


#endif //RGB_ME_COLOURDISPLAY_H
