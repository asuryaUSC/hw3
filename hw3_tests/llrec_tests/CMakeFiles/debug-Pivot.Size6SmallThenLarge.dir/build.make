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
CMAKE_SOURCE_DIR = /work/Homeworks/hw3/hw3_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/Homeworks/hw3/hw3_tests

# Utility rule file for debug-Pivot.Size6SmallThenLarge.

# Include the progress variables for this target.
include llrec_tests/CMakeFiles/debug-Pivot.Size6SmallThenLarge.dir/progress.make

llrec_tests/CMakeFiles/debug-Pivot.Size6SmallThenLarge:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/Homeworks/hw3/hw3_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Debugging Pivot.Size6SmallThenLarge with GDB..."
	cd /work/Homeworks/hw3 && gdb --args /work/Homeworks/hw3/hw3_tests/llrec_tests/llrec_tests --gtest_filter=Pivot.Size6SmallThenLarge

debug-Pivot.Size6SmallThenLarge: llrec_tests/CMakeFiles/debug-Pivot.Size6SmallThenLarge
debug-Pivot.Size6SmallThenLarge: llrec_tests/CMakeFiles/debug-Pivot.Size6SmallThenLarge.dir/build.make

.PHONY : debug-Pivot.Size6SmallThenLarge

# Rule to build all files generated by this target.
llrec_tests/CMakeFiles/debug-Pivot.Size6SmallThenLarge.dir/build: debug-Pivot.Size6SmallThenLarge

.PHONY : llrec_tests/CMakeFiles/debug-Pivot.Size6SmallThenLarge.dir/build

llrec_tests/CMakeFiles/debug-Pivot.Size6SmallThenLarge.dir/clean:
	cd /work/Homeworks/hw3/hw3_tests/llrec_tests && $(CMAKE_COMMAND) -P CMakeFiles/debug-Pivot.Size6SmallThenLarge.dir/cmake_clean.cmake
.PHONY : llrec_tests/CMakeFiles/debug-Pivot.Size6SmallThenLarge.dir/clean

llrec_tests/CMakeFiles/debug-Pivot.Size6SmallThenLarge.dir/depend:
	cd /work/Homeworks/hw3/hw3_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/Homeworks/hw3/hw3_tests /work/Homeworks/hw3/hw3_tests/llrec_tests /work/Homeworks/hw3/hw3_tests /work/Homeworks/hw3/hw3_tests/llrec_tests /work/Homeworks/hw3/hw3_tests/llrec_tests/CMakeFiles/debug-Pivot.Size6SmallThenLarge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : llrec_tests/CMakeFiles/debug-Pivot.Size6SmallThenLarge.dir/depend

