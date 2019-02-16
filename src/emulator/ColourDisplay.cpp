#include <ncurses.h>
#include <cmath>
#include <string>

#include "ColourDisplay.h"

#define FOREGROUND 0
#define BACKGROUND 1

ColourDisplay::ColourDisplay() {
    ncursesSetup();
};

void ColourDisplay::updateDisplayedColour(int red0to255, int green0to255, int blue0to255) {

    double colourMultiplier = 1000.0/255;
    auto red0to1000 = short(std::round(red0to255 * colourMultiplier));
    auto blue0to1000 = short(std::round(blue0to255 * colourMultiplier));
    auto green0to1000 = short(std::round(green0to255 * colourMultiplier));
    init_color(BACKGROUND, red0to1000, green0to1000, blue0to1000);
    refresh();
    std::string msg = "Colour updated: " + std::to_string(red0to255) + ", " +
            std::to_string(green0to255) + ", " + std::to_string(blue0to255) + "\n";
    printw(msg.c_str());
}

void ColourDisplay::ncursesSetup() {
    initscr();
    clear();
    noecho();
    cbreak();
    start_color();
    keypad(stdscr, true);
    curs_set(0);
    scrollok(stdscr,TRUE);

    init_color(FOREGROUND, 1000, 1000, 1000);
    init_color(BACKGROUND, 0,0,0);
    init_pair(1, FOREGROUND, BACKGROUND);
    wbkgd(stdscr, COLOR_PAIR(1));
}
