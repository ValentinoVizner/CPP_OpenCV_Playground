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

# Utility rule file for ContinuousUpdate.

# Include the progress variables for this target.
include tests/CMakeFiles/ContinuousUpdate.dir/progress.make

tests/CMakeFiles/ContinuousUpdate:
	cd /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/tests && /usr/bin/ctest -D ContinuousUpdate

ContinuousUpdate: tests/CMakeFiles/ContinuousUpdate
ContinuousUpdate: tests/CMakeFiles/ContinuousUpdate.dir/build.make

.PHONY : ContinuousUpdate

# Rule to build all files generated by this target.
tests/CMakeFiles/ContinuousUpdate.dir/build: ContinuousUpdate

.PHONY : tests/CMakeFiles/ContinuousUpdate.dir/build

tests/CMakeFiles/ContinuousUpdate.dir/clean:
	cd /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/ContinuousUpdate.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/ContinuousUpdate.dir/clean

tests/CMakeFiles/ContinuousUpdate.dir/depend:
	cd /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03 /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/tests /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/tests /home/vaba/Desktop/MY_EVERYTHING/CPP_OpenCV_Playground/cpp03/build/tests/CMakeFiles/ContinuousUpdate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/ContinuousUpdate.dir/depend

