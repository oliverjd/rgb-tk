# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/ojd/packages/clion-2018.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/ojd/packages/clion-2018.2.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ojd/Documents/Projects/cpp/rgb-tk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease

# Include any dependencies generated for this target.
include CMakeFiles/rgb-tk.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rgb-tk.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rgb-tk.dir/flags.make

CMakeFiles/rgb-tk.dir/main.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rgb-tk.dir/main.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/main.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/main.cpp

CMakeFiles/rgb-tk.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/main.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/main.cpp > CMakeFiles/rgb-tk.dir/main.cpp.i

CMakeFiles/rgb-tk.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/main.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/main.cpp -o CMakeFiles/rgb-tk.dir/main.cpp.s

CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.o: ../src/controller/Remote44.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/Remote44.cpp

CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/Remote44.cpp > CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.i

CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/Remote44.cpp -o CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.s

CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.o: ../src/controller/Controller44.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/Controller44.cpp

CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/Controller44.cpp > CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.i

CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/Controller44.cpp -o CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.s

CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.o: ../src/controller/LircWrapper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/LircWrapper.cpp

CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/LircWrapper.cpp > CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.i

CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/LircWrapper.cpp -o CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.s

CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.o: ../src/emulator/VirtualController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/emulator/VirtualController.cpp

CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/emulator/VirtualController.cpp > CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.i

CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/emulator/VirtualController.cpp -o CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.s

CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.o: ../src/controller/GenericController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/GenericController.cpp

CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/GenericController.cpp > CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.i

CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/controller/GenericController.cpp -o CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.s

CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.o: ../src/emulator/KeyboardListener.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/emulator/KeyboardListener.cpp

CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/emulator/KeyboardListener.cpp > CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.i

CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/emulator/KeyboardListener.cpp -o CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.s

CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.o: ../src/emulator/ColourDisplay.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/emulator/ColourDisplay.cpp

CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/emulator/ColourDisplay.cpp > CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.i

CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/emulator/ColourDisplay.cpp -o CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.s

CMakeFiles/rgb-tk.dir/src/Colour.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/Colour.cpp.o: ../src/Colour.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/rgb-tk.dir/src/Colour.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/Colour.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/Colour.cpp

CMakeFiles/rgb-tk.dir/src/Colour.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/Colour.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/Colour.cpp > CMakeFiles/rgb-tk.dir/src/Colour.cpp.i

CMakeFiles/rgb-tk.dir/src/Colour.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/Colour.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/Colour.cpp -o CMakeFiles/rgb-tk.dir/src/Colour.cpp.s

CMakeFiles/rgb-tk.dir/src/Queue.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/Queue.cpp.o: ../src/Queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/rgb-tk.dir/src/Queue.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/Queue.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/Queue.cpp

CMakeFiles/rgb-tk.dir/src/Queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/Queue.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/Queue.cpp > CMakeFiles/rgb-tk.dir/src/Queue.cpp.i

CMakeFiles/rgb-tk.dir/src/Queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/Queue.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/Queue.cpp -o CMakeFiles/rgb-tk.dir/src/Queue.cpp.s

CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.o: ../src/routines/SunriseSunset.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/SunriseSunset.cpp

CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/SunriseSunset.cpp > CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.i

CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/SunriseSunset.cpp -o CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.s

CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.o: ../src/routines/RestServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/RestServer.cpp

CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/RestServer.cpp > CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.i

CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/RestServer.cpp -o CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.s

CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.o: ../src/routines/BeatMatch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/BeatMatch.cpp

CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/BeatMatch.cpp > CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.i

CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/BeatMatch.cpp -o CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.s

CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.o: ../libs/gopt/gopt.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.o"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.o   -c /home/ojd/Documents/Projects/cpp/rgb-tk/libs/gopt/gopt.c

CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.i"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/libs/gopt/gopt.c > CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.i

CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.s"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/libs/gopt/gopt.c -o CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.s

CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.o: ../libs/gopt/gopt-errors.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.o"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.o   -c /home/ojd/Documents/Projects/cpp/rgb-tk/libs/gopt/gopt-errors.c

CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.i"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/libs/gopt/gopt-errors.c > CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.i

CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.s"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/libs/gopt/gopt-errors.c -o CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.s

CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.o: CMakeFiles/rgb-tk.dir/flags.make
CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.o: ../src/routines/GenericRoutine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.o"
	/usr/bin/arm-linux-gnueabihf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.o -c /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/GenericRoutine.cpp

CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.i"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/GenericRoutine.cpp > CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.i

CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.s"
	/usr/bin/arm-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ojd/Documents/Projects/cpp/rgb-tk/src/routines/GenericRoutine.cpp -o CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.s

# Object files for target rgb-tk
rgb__tk_OBJECTS = \
"CMakeFiles/rgb-tk.dir/main.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/Colour.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/Queue.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.o" \
"CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.o" \
"CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.o" \
"CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.o" \
"CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.o"

# External object files for target rgb-tk
rgb__tk_EXTERNAL_OBJECTS =

rgb-tk: CMakeFiles/rgb-tk.dir/main.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/controller/Remote44.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/controller/Controller44.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/controller/LircWrapper.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/emulator/VirtualController.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/controller/GenericController.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/emulator/KeyboardListener.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/emulator/ColourDisplay.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/Colour.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/Queue.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/routines/SunriseSunset.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/routines/RestServer.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/routines/BeatMatch.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/libs/gopt/gopt.c.o
rgb-tk: CMakeFiles/rgb-tk.dir/libs/gopt/gopt-errors.c.o
rgb-tk: CMakeFiles/rgb-tk.dir/src/routines/GenericRoutine.cpp.o
rgb-tk: CMakeFiles/rgb-tk.dir/build.make
rgb-tk: CMakeFiles/rgb-tk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable rgb-tk"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rgb-tk.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rgb-tk.dir/build: rgb-tk

.PHONY : CMakeFiles/rgb-tk.dir/build

CMakeFiles/rgb-tk.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rgb-tk.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rgb-tk.dir/clean

CMakeFiles/rgb-tk.dir/depend:
	cd /home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ojd/Documents/Projects/cpp/rgb-tk /home/ojd/Documents/Projects/cpp/rgb-tk /home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease /home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease /home/ojd/Documents/Projects/cpp/rgb-tk/cmake-build-armrelease/CMakeFiles/rgb-tk.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rgb-tk.dir/depend
