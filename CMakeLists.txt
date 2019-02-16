cmake_minimum_required(VERSION 3.9)
project(rgb-tk)


###########################

include_directories(libs/simple-web-server/include $ENV{BOOST_DIR}/include $ENV{LIRC_DIR}/include)
link_directories($ENV{CURSES_INCLUDE_DIR} $ENV{BOOST_DIR}/lib $ENV{LIRC_DIR}/lib)

find_package(Boost 1.62.0 COMPONENTS regex system thread)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES src/main.cpp src/controller/Remote44.cpp src/controller/Remote44.h src/controller/Controller44.cpp src/controller/Controller44.h src/controller/LircWrapper.cpp src/controller/LircWrapper.h src/emulator/VirtualController.cpp src/emulator/VirtualController.h src/controller/GenericController.cpp src/controller/GenericController.h src/emulator/KeyboardListener.cpp src/emulator/KeyboardListener.h src/emulator/ColourDisplay.cpp src/emulator/ColourDisplay.h src/Colour.cpp src/Colour.h src/Queue.cpp src/Queue.h src/routines/SunriseSunset.cpp src/routines/SunriseSunset.h src/routines/RestServer.cpp src/routines/RestServer.h src/routines/BeatMatch.cpp src/routines/BeatMatch.h src/routines/GenericRoutine.cpp src/routines/GenericRoutine.h)

set(LIB_FILES libs/gopt/gopt.h libs/gopt/gopt.c libs/gopt/gopt-errors.c )

add_executable(${PROJECT_NAME}-x86 ${SOURCE_FILES} ${LIB_FILES})
add_executable(${PROJECT_NAME}-armhf ${SOURCE_FILES} ${LIB_FILES})

add_executable(tests test/tests.cpp ${PROJECT_SOURCES} test/main.cpp)

target_link_libraries(${PROJECT_NAME}-x86 $ENV{CURSES_LIBRARY_X86} lirc_client pthread boost_regex boost_system boost_thread)
target_link_libraries(${PROJECT_NAME}-armhf $ENV{CURSES_LIBRARY_ARMHF} lirc_client pthread boost_regex boost_system boost_thread)
