cmake_minimum_required(VERSION 3.9)
project(rgb_me)

#include_directories(libs/lirc/lib)

set(CMAKE_CXX_STANDARD 17)

add_executable(rgb_me main.cpp src/controller/Remote44.cpp src/controller/Remote44.h src/controller/Controller44.cpp src/controller/Controller44.h src/controller/LircWrapper.cpp src/controller/LircWrapper.h src/emulator/VirtualController.cpp src/emulator/VirtualController.h src/controller/GenericController.cpp src/controller/GenericController.h src/emulator/KeyboardListener.cpp src/emulator/KeyboardListener.h src/emulator/ColourDisplay.cpp src/emulator/ColourDisplay.h src/Colour.cpp src/Colour.h src/Queue.cpp src/Queue.h)

add_executable(tests test/tests.cpp ${PROJECT_SOURCES} test/main.cpp)

target_link_libraries(rgb_me ncurses lirc_client pthread)
