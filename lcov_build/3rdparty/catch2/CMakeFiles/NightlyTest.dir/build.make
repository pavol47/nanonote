# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = /home/oresky/school/nanonote/nanonote

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oresky/school/nanonote/nanonote/lcov_build

# Utility rule file for NightlyTest.

# Include the progress variables for this target.
include 3rdparty/catch2/CMakeFiles/NightlyTest.dir/progress.make

3rdparty/catch2/CMakeFiles/NightlyTest:
	cd /home/oresky/school/nanonote/nanonote/lcov_build/3rdparty/catch2 && /usr/bin/ctest -D NightlyTest

NightlyTest: 3rdparty/catch2/CMakeFiles/NightlyTest
NightlyTest: 3rdparty/catch2/CMakeFiles/NightlyTest.dir/build.make

.PHONY : NightlyTest

# Rule to build all files generated by this target.
3rdparty/catch2/CMakeFiles/NightlyTest.dir/build: NightlyTest

.PHONY : 3rdparty/catch2/CMakeFiles/NightlyTest.dir/build

3rdparty/catch2/CMakeFiles/NightlyTest.dir/clean:
	cd /home/oresky/school/nanonote/nanonote/lcov_build/3rdparty/catch2 && $(CMAKE_COMMAND) -P CMakeFiles/NightlyTest.dir/cmake_clean.cmake
.PHONY : 3rdparty/catch2/CMakeFiles/NightlyTest.dir/clean

3rdparty/catch2/CMakeFiles/NightlyTest.dir/depend:
	cd /home/oresky/school/nanonote/nanonote/lcov_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oresky/school/nanonote/nanonote /home/oresky/school/nanonote/nanonote/3rdparty/catch2 /home/oresky/school/nanonote/nanonote/lcov_build /home/oresky/school/nanonote/nanonote/lcov_build/3rdparty/catch2 /home/oresky/school/nanonote/nanonote/lcov_build/3rdparty/catch2/CMakeFiles/NightlyTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 3rdparty/catch2/CMakeFiles/NightlyTest.dir/depend

