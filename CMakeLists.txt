cmake_minimum_required(VERSION 3.9)
project(rgb-tk)

set(CMAKE_C_COMPILER_ARM_RELEASE "/usr/bin/arm-linux-gnueabihf-gcc")
set(CMAKE_CXX_COMPILER_ARM_RELEASE "/usr/bin/arm-linux-gnueabihf-g++")

set(CURSES_INCLUDE_PATH "/usr/include")
set(CURSES_LIBRARY "/usr/lib/x86_64-linux-gnu/libncurses.so")

find_package(Curses REQUIRED)

include_directories(~/cpplibs/lirc/include libs/simple-web-server/include ~/cpplibs/boost/include)
link_directories(${CURSES_INCLUDE_DIR} ~/cpplibs/lirc/lib ~/cpplibs/boost/lib)

find_package(Boost 1.62.0 COMPONENTS regex system thread)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} src/main.cpp src/controller/Remote44.cpp src/controller/Remote44.h src/controller/Controller44.cpp src/controller/Controller44.h src/controller/LircWrapper.cpp src/controller/LircWrapper.h src/emulator/VirtualController.cpp src/emulator/VirtualController.h src/controller/GenericController.cpp src/controller/GenericController.h src/emulator/KeyboardListener.cpp src/emulator/KeyboardListener.h src/emulator/ColourDisplay.cpp src/emulator/ColourDisplay.h src/Colour.cpp src/Colour.h src/Queue.cpp src/Queue.h src/routines/SunriseSunset.cpp src/routines/SunriseSunset.h src/routines/RestServer.cpp src/routines/RestServer.h src/routines/BeatMatch.cpp src/routines/BeatMatch.h libs/gopt/gopt.h libs/gopt/gopt.c libs/gopt/gopt-errors.c src/routines/GenericRoutine.cpp src/routines/GenericRoutine.h)

add_executable(tests test/tests.cpp ${PROJECT_SOURCES} test/main.cpp)

target_link_libraries(${PROJECT_NAME} ${CURSES_LIBRARIES} lirc_client pthread boost_regex boost_system boost_thread)

