#pragma once

class ColourDisplay {
public:
    ColourDisplay();
    void updateDisplayedColour(int, int, int);

private:
    void ncursesSetup();
};

