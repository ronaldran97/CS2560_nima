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
CMAKE_SOURCE_DIR = /Users/ronaldtran/CLionProjects/homework4_21

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ronaldtran/CLionProjects/homework4_21/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/homework4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/homework4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homework4.dir/flags.make

CMakeFiles/homework4.dir/Die.cpp.o: CMakeFiles/homework4.dir/flags.make
CMakeFiles/homework4.dir/Die.cpp.o: ../Die.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ronaldtran/CLionProjects/homework4_21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homework4.dir/Die.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework4.dir/Die.cpp.o -c /Users/ronaldtran/CLionProjects/homework4_21/Die.cpp

CMakeFiles/homework4.dir/Die.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework4.dir/Die.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ronaldtran/CLionProjects/homework4_21/Die.cpp > CMakeFiles/homework4.dir/Die.cpp.i

CMakeFiles/homework4.dir/Die.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework4.dir/Die.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ronaldtran/CLionProjects/homework4_21/Die.cpp -o CMakeFiles/homework4.dir/Die.cpp.s

CMakeFiles/homework4.dir/GameTwentyOne.cpp.o: CMakeFiles/homework4.dir/flags.make
CMakeFiles/homework4.dir/GameTwentyOne.cpp.o: ../GameTwentyOne.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ronaldtran/CLionProjects/homework4_21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/homework4.dir/GameTwentyOne.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework4.dir/GameTwentyOne.cpp.o -c /Users/ronaldtran/CLionProjects/homework4_21/GameTwentyOne.cpp

CMakeFiles/homework4.dir/GameTwentyOne.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework4.dir/GameTwentyOne.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ronaldtran/CLionProjects/homework4_21/GameTwentyOne.cpp > CMakeFiles/homework4.dir/GameTwentyOne.cpp.i

CMakeFiles/homework4.dir/GameTwentyOne.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework4.dir/GameTwentyOne.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ronaldtran/CLionProjects/homework4_21/GameTwentyOne.cpp -o CMakeFiles/homework4.dir/GameTwentyOne.cpp.s

CMakeFiles/homework4.dir/main.cpp.o: CMakeFiles/homework4.dir/flags.make
CMakeFiles/homework4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ronaldtran/CLionProjects/homework4_21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/homework4.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework4.dir/main.cpp.o -c /Users/ronaldtran/CLionProjects/homework4_21/main.cpp

CMakeFiles/homework4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework4.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ronaldtran/CLionProjects/homework4_21/main.cpp > CMakeFiles/homework4.dir/main.cpp.i

CMakeFiles/homework4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework4.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ronaldtran/CLionProjects/homework4_21/main.cpp -o CMakeFiles/homework4.dir/main.cpp.s

# Object files for target homework4
homework4_OBJECTS = \
"CMakeFiles/homework4.dir/Die.cpp.o" \
"CMakeFiles/homework4.dir/GameTwentyOne.cpp.o" \
"CMakeFiles/homework4.dir/main.cpp.o"

# External object files for target homework4
homework4_EXTERNAL_OBJECTS =

homework4: CMakeFiles/homework4.dir/Die.cpp.o
homework4: CMakeFiles/homework4.dir/GameTwentyOne.cpp.o
homework4: CMakeFiles/homework4.dir/main.cpp.o
homework4: CMakeFiles/homework4.dir/build.make
homework4: CMakeFiles/homework4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ronaldtran/CLionProjects/homework4_21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable homework4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/homework4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homework4.dir/build: homework4

.PHONY : CMakeFiles/homework4.dir/build

CMakeFiles/homework4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/homework4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/homework4.dir/clean

CMakeFiles/homework4.dir/depend:
	cd /Users/ronaldtran/CLionProjects/homework4_21/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ronaldtran/CLionProjects/homework4_21 /Users/ronaldtran/CLionProjects/homework4_21 /Users/ronaldtran/CLionProjects/homework4_21/cmake-build-debug /Users/ronaldtran/CLionProjects/homework4_21/cmake-build-debug /Users/ronaldtran/CLionProjects/homework4_21/cmake-build-debug/CMakeFiles/homework4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/homework4.dir/depend

