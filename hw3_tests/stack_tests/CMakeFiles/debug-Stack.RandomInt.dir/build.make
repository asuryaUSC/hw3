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

# Utility rule file for debug-Stack.RandomInt.

# Include the progress variables for this target.
include stack_tests/CMakeFiles/debug-Stack.RandomInt.dir/progress.make

stack_tests/CMakeFiles/debug-Stack.RandomInt:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/Homeworks/hw3/hw3_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Debugging Stack.RandomInt with GDB..."
	cd /work/Homeworks/hw3 && gdb --args /work/Homeworks/hw3/hw3_tests/stack_tests/stack_tests --gtest_filter=Stack.RandomInt

debug-Stack.RandomInt: stack_tests/CMakeFiles/debug-Stack.RandomInt
debug-Stack.RandomInt: stack_tests/CMakeFiles/debug-Stack.RandomInt.dir/build.make

.PHONY : debug-Stack.RandomInt

# Rule to build all files generated by this target.
stack_tests/CMakeFiles/debug-Stack.RandomInt.dir/build: debug-Stack.RandomInt

.PHONY : stack_tests/CMakeFiles/debug-Stack.RandomInt.dir/build

stack_tests/CMakeFiles/debug-Stack.RandomInt.dir/clean:
	cd /work/Homeworks/hw3/hw3_tests/stack_tests && $(CMAKE_COMMAND) -P CMakeFiles/debug-Stack.RandomInt.dir/cmake_clean.cmake
.PHONY : stack_tests/CMakeFiles/debug-Stack.RandomInt.dir/clean

stack_tests/CMakeFiles/debug-Stack.RandomInt.dir/depend:
	cd /work/Homeworks/hw3/hw3_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/Homeworks/hw3/hw3_tests /work/Homeworks/hw3/hw3_tests/stack_tests /work/Homeworks/hw3/hw3_tests /work/Homeworks/hw3/hw3_tests/stack_tests /work/Homeworks/hw3/hw3_tests/stack_tests/CMakeFiles/debug-Stack.RandomInt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : stack_tests/CMakeFiles/debug-Stack.RandomInt.dir/depend

