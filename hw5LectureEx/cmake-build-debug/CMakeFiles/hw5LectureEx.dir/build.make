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
CMAKE_SOURCE_DIR = /Users/ronaldtran/CLionProjects/hw5LectureEx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ronaldtran/CLionProjects/hw5LectureEx/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hw5LectureEx.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hw5LectureEx.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw5LectureEx.dir/flags.make

CMakeFiles/hw5LectureEx.dir/main.cpp.o: CMakeFiles/hw5LectureEx.dir/flags.make
CMakeFiles/hw5LectureEx.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ronaldtran/CLionProjects/hw5LectureEx/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw5LectureEx.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5LectureEx.dir/main.cpp.o -c /Users/ronaldtran/CLionProjects/hw5LectureEx/main.cpp

CMakeFiles/hw5LectureEx.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5LectureEx.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ronaldtran/CLionProjects/hw5LectureEx/main.cpp > CMakeFiles/hw5LectureEx.dir/main.cpp.i

CMakeFiles/hw5LectureEx.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5LectureEx.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ronaldtran/CLionProjects/hw5LectureEx/main.cpp -o CMakeFiles/hw5LectureEx.dir/main.cpp.s

CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.o: CMakeFiles/hw5LectureEx.dir/flags.make
CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.o: ../virtualEx.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ronaldtran/CLionProjects/hw5LectureEx/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.o -c /Users/ronaldtran/CLionProjects/hw5LectureEx/virtualEx.cpp

CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ronaldtran/CLionProjects/hw5LectureEx/virtualEx.cpp > CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.i

CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ronaldtran/CLionProjects/hw5LectureEx/virtualEx.cpp -o CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.s

# Object files for target hw5LectureEx
hw5LectureEx_OBJECTS = \
"CMakeFiles/hw5LectureEx.dir/main.cpp.o" \
"CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.o"

# External object files for target hw5LectureEx
hw5LectureEx_EXTERNAL_OBJECTS =

hw5LectureEx: CMakeFiles/hw5LectureEx.dir/main.cpp.o
hw5LectureEx: CMakeFiles/hw5LectureEx.dir/virtualEx.cpp.o
hw5LectureEx: CMakeFiles/hw5LectureEx.dir/build.make
hw5LectureEx: CMakeFiles/hw5LectureEx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ronaldtran/CLionProjects/hw5LectureEx/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable hw5LectureEx"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw5LectureEx.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw5LectureEx.dir/build: hw5LectureEx

.PHONY : CMakeFiles/hw5LectureEx.dir/build

CMakeFiles/hw5LectureEx.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hw5LectureEx.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hw5LectureEx.dir/clean

CMakeFiles/hw5LectureEx.dir/depend:
	cd /Users/ronaldtran/CLionProjects/hw5LectureEx/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ronaldtran/CLionProjects/hw5LectureEx /Users/ronaldtran/CLionProjects/hw5LectureEx /Users/ronaldtran/CLionProjects/hw5LectureEx/cmake-build-debug /Users/ronaldtran/CLionProjects/hw5LectureEx/cmake-build-debug /Users/ronaldtran/CLionProjects/hw5LectureEx/cmake-build-debug/CMakeFiles/hw5LectureEx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hw5LectureEx.dir/depend

