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
CMAKE_SOURCE_DIR = /Users/ronaldtran/CLionProjects/midterm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ronaldtran/CLionProjects/midterm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/midterm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/midterm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/midterm.dir/flags.make

CMakeFiles/midterm.dir/main.cpp.o: CMakeFiles/midterm.dir/flags.make
CMakeFiles/midterm.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ronaldtran/CLionProjects/midterm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/midterm.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/midterm.dir/main.cpp.o -c /Users/ronaldtran/CLionProjects/midterm/main.cpp

CMakeFiles/midterm.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/midterm.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ronaldtran/CLionProjects/midterm/main.cpp > CMakeFiles/midterm.dir/main.cpp.i

CMakeFiles/midterm.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/midterm.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ronaldtran/CLionProjects/midterm/main.cpp -o CMakeFiles/midterm.dir/main.cpp.s

CMakeFiles/midterm.dir/ArrayClass.cpp.o: CMakeFiles/midterm.dir/flags.make
CMakeFiles/midterm.dir/ArrayClass.cpp.o: ../ArrayClass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ronaldtran/CLionProjects/midterm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/midterm.dir/ArrayClass.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/midterm.dir/ArrayClass.cpp.o -c /Users/ronaldtran/CLionProjects/midterm/ArrayClass.cpp

CMakeFiles/midterm.dir/ArrayClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/midterm.dir/ArrayClass.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ronaldtran/CLionProjects/midterm/ArrayClass.cpp > CMakeFiles/midterm.dir/ArrayClass.cpp.i

CMakeFiles/midterm.dir/ArrayClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/midterm.dir/ArrayClass.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ronaldtran/CLionProjects/midterm/ArrayClass.cpp -o CMakeFiles/midterm.dir/ArrayClass.cpp.s

# Object files for target midterm
midterm_OBJECTS = \
"CMakeFiles/midterm.dir/main.cpp.o" \
"CMakeFiles/midterm.dir/ArrayClass.cpp.o"

# External object files for target midterm
midterm_EXTERNAL_OBJECTS =

midterm: CMakeFiles/midterm.dir/main.cpp.o
midterm: CMakeFiles/midterm.dir/ArrayClass.cpp.o
midterm: CMakeFiles/midterm.dir/build.make
midterm: CMakeFiles/midterm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ronaldtran/CLionProjects/midterm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable midterm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/midterm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/midterm.dir/build: midterm

.PHONY : CMakeFiles/midterm.dir/build

CMakeFiles/midterm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/midterm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/midterm.dir/clean

CMakeFiles/midterm.dir/depend:
	cd /Users/ronaldtran/CLionProjects/midterm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ronaldtran/CLionProjects/midterm /Users/ronaldtran/CLionProjects/midterm /Users/ronaldtran/CLionProjects/midterm/cmake-build-debug /Users/ronaldtran/CLionProjects/midterm/cmake-build-debug /Users/ronaldtran/CLionProjects/midterm/cmake-build-debug/CMakeFiles/midterm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/midterm.dir/depend

