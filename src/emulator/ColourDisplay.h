#ifndef RGB_TK_COLOURDISPLAY_H
#define RGB_TK_COLOURDISPLAY_H


class ColourDisplay {
public:
    ColourDisplay();
    void updateDisplayedColour(int, int, int);

private:
    void ncursesSetup();
};


#endif //RGB_TK_COLOURDISPLAY_H
