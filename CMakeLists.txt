cmake_minimum_required(VERSION 3.9)
project(rgbtk)

#set ( CMAKE_PREFIX_PATH /usr/lib/x86_64-linux-gnu/cmake/)

include_directories(libs/lirc/include libs/ncurses/include libs/simple-web-server/include libs/boost/include)
link_directories(libs/lirc/lib libs/ncurses/lib libs/boost/lib)

#find_package(cpprestsdk REQUIRED)
find_package(Boost 1.62.0 COMPONENTS regex system thread)

set(CMAKE_CXX_STANDARD 17)

add_executable(rgbtk main.cpp src/controller/Remote44.cpp src/controller/Remote44.h src/controller/Controller44.cpp src/controller/Controller44.h src/controller/LircWrapper.cpp src/controller/LircWrapper.h src/emulator/VirtualController.cpp src/emulator/VirtualController.h src/controller/GenericController.cpp src/controller/GenericController.h src/emulator/KeyboardListener.cpp src/emulator/KeyboardListener.h src/emulator/ColourDisplay.cpp src/emulator/ColourDisplay.h src/Colour.cpp src/Colour.h src/Queue.cpp src/Queue.h src/routines/SunriseSunset.cpp src/routines/SunriseSunset.h src/routines/Ifttt.cpp src/routines/Ifttt.h src/routines/BeatMatch.cpp src/routines/BeatMatch.h libs/gopt/gopt.h libs/gopt/gopt.c libs/gopt/gopt-errors.c src/routines/GenericRoutine.cpp src/routines/GenericRoutine.h)

add_executable(tests test/tests.cpp ${PROJECT_SOURCES} test/main.cpp)

target_link_libraries(rgbtk ncurses lirc_client pthread boost_regex boost_system boost_thread)# ${Boost_LIBRARIES})# cpprestsdk::cpprest)
