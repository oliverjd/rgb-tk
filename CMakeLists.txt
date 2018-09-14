cmake_minimum_required(VERSION 3.9)
project(rgb_me)

#include_directories(libs/lirc/lib)

set(CMAKE_CXX_STANDARD 17)

add_executable(rgb_me main.cpp src/Remote44Key.cpp src/Remote44Key.h src/Controller44KeyState.cpp src/Controller44KeyState.h src/LircWrapper.cpp src/LircWrapper.h src/VirtualController.cpp src/VirtualController.h src/GenericController.cpp src/GenericController.h src/Rgb44.h src/KeyboardListener.cpp src/KeyboardListener.h src/ColourDisplay.cpp src/ColourDisplay.h)

add_executable(tests test/tests.cpp ${PROJECT_SOURCES} test/main.cpp)

target_link_libraries(rgb_me ncurses)

target_link_libraries(rgb_me lirc_client)
