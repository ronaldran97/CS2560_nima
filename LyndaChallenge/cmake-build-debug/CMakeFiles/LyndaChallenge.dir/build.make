# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ronaldtran/CLionProjects/LyndaChallenge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ronaldtran/CLionProjects/LyndaChallenge/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LyndaChallenge.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LyndaChallenge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LyndaChallenge.dir/flags.make

CMakeFiles/LyndaChallenge.dir/main.cpp.o: CMakeFiles/LyndaChallenge.dir/flags.make
CMakeFiles/LyndaChallenge.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ronaldtran/CLionProjects/LyndaChallenge/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LyndaChallenge.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LyndaChallenge.dir/main.cpp.o -c /Users/ronaldtran/CLionProjects/LyndaChallenge/main.cpp

CMakeFiles/LyndaChallenge.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LyndaChallenge.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ronaldtran/CLionProjects/LyndaChallenge/main.cpp > CMakeFiles/LyndaChallenge.dir/main.cpp.i

CMakeFiles/LyndaChallenge.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LyndaChallenge.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ronaldtran/CLionProjects/LyndaChallenge/main.cpp -o CMakeFiles/LyndaChallenge.dir/main.cpp.s

# Object files for target LyndaChallenge
LyndaChallenge_OBJECTS = \
"CMakeFiles/LyndaChallenge.dir/main.cpp.o"

# External object files for target LyndaChallenge
LyndaChallenge_EXTERNAL_OBJECTS =

LyndaChallenge: CMakeFiles/LyndaChallenge.dir/main.cpp.o
LyndaChallenge: CMakeFiles/LyndaChallenge.dir/build.make
LyndaChallenge: CMakeFiles/LyndaChallenge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ronaldtran/CLionProjects/LyndaChallenge/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LyndaChallenge"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LyndaChallenge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LyndaChallenge.dir/build: LyndaChallenge

.PHONY : CMakeFiles/LyndaChallenge.dir/build

CMakeFiles/LyndaChallenge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LyndaChallenge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LyndaChallenge.dir/clean

CMakeFiles/LyndaChallenge.dir/depend:
	cd /Users/ronaldtran/CLionProjects/LyndaChallenge/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ronaldtran/CLionProjects/LyndaChallenge /Users/ronaldtran/CLionProjects/LyndaChallenge /Users/ronaldtran/CLionProjects/LyndaChallenge/cmake-build-debug /Users/ronaldtran/CLionProjects/LyndaChallenge/cmake-build-debug /Users/ronaldtran/CLionProjects/LyndaChallenge/cmake-build-debug/CMakeFiles/LyndaChallenge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LyndaChallenge.dir/depend

