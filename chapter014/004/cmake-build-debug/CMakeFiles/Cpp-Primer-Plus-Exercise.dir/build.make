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
CMAKE_SOURCE_DIR = /home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cpp-Primer-Plus-Exercise.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cpp-Primer-Plus-Exercise.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cpp-Primer-Plus-Exercise.dir/flags.make

CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.o: CMakeFiles/Cpp-Primer-Plus-Exercise.dir/flags.make
CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.o -c /home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004/main.cpp

CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004/main.cpp > CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.i

CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004/main.cpp -o CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.s

# Object files for target Cpp-Primer-Plus-Exercise
Cpp__Primer__Plus__Exercise_OBJECTS = \
"CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.o"

# External object files for target Cpp-Primer-Plus-Exercise
Cpp__Primer__Plus__Exercise_EXTERNAL_OBJECTS =

Cpp-Primer-Plus-Exercise: CMakeFiles/Cpp-Primer-Plus-Exercise.dir/main.cpp.o
Cpp-Primer-Plus-Exercise: CMakeFiles/Cpp-Primer-Plus-Exercise.dir/build.make
Cpp-Primer-Plus-Exercise: CMakeFiles/Cpp-Primer-Plus-Exercise.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Cpp-Primer-Plus-Exercise"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cpp-Primer-Plus-Exercise.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cpp-Primer-Plus-Exercise.dir/build: Cpp-Primer-Plus-Exercise

.PHONY : CMakeFiles/Cpp-Primer-Plus-Exercise.dir/build

CMakeFiles/Cpp-Primer-Plus-Exercise.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cpp-Primer-Plus-Exercise.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cpp-Primer-Plus-Exercise.dir/clean

CMakeFiles/Cpp-Primer-Plus-Exercise.dir/depend:
	cd /home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004 /home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004 /home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004/cmake-build-debug /home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004/cmake-build-debug /home/mark/Documents/Code/Cpp-Primer-Plus-Exercises/chapter014/004/cmake-build-debug/CMakeFiles/Cpp-Primer-Plus-Exercise.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cpp-Primer-Plus-Exercise.dir/depend

