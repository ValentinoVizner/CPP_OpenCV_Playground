# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build

# Include any dependencies generated for this target.
include src/CMakeFiles/cpp03_testis.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/cpp03_testis.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/cpp03_testis.dir/flags.make

src/CMakeFiles/cpp03_testis.dir/main.cpp.o: src/CMakeFiles/cpp03_testis.dir/flags.make
src/CMakeFiles/cpp03_testis.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/cpp03_testis.dir/main.cpp.o"
	cd /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp03_testis.dir/main.cpp.o -c /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/src/main.cpp

src/CMakeFiles/cpp03_testis.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp03_testis.dir/main.cpp.i"
	cd /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/src/main.cpp > CMakeFiles/cpp03_testis.dir/main.cpp.i

src/CMakeFiles/cpp03_testis.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp03_testis.dir/main.cpp.s"
	cd /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/src/main.cpp -o CMakeFiles/cpp03_testis.dir/main.cpp.s

# Object files for target cpp03_testis
cpp03_testis_OBJECTS = \
"CMakeFiles/cpp03_testis.dir/main.cpp.o"

# External object files for target cpp03_testis
cpp03_testis_EXTERNAL_OBJECTS =

src/cpp03_testis: src/CMakeFiles/cpp03_testis.dir/main.cpp.o
src/cpp03_testis: src/CMakeFiles/cpp03_testis.dir/build.make
src/cpp03_testis: src/libhello.a
src/cpp03_testis: src/libblah.a
src/cpp03_testis: src/CMakeFiles/cpp03_testis.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpp03_testis"
	cd /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp03_testis.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/cpp03_testis.dir/build: src/cpp03_testis

.PHONY : src/CMakeFiles/cpp03_testis.dir/build

src/CMakeFiles/cpp03_testis.dir/clean:
	cd /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/src && $(CMAKE_COMMAND) -P CMakeFiles/cpp03_testis.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/cpp03_testis.dir/clean

src/CMakeFiles/cpp03_testis.dir/depend:
	cd /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03 /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/src /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/src /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/src/CMakeFiles/cpp03_testis.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/cpp03_testis.dir/depend
