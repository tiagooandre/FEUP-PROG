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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/5_8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/5_8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/5_8.dir/flags.make

CMakeFiles/5_8.dir/main.cpp.o: CMakeFiles/5_8.dir/flags.make
CMakeFiles/5_8.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/5_8.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/5_8.dir/main.cpp.o -c "/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8/main.cpp"

CMakeFiles/5_8.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/5_8.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8/main.cpp" > CMakeFiles/5_8.dir/main.cpp.i

CMakeFiles/5_8.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/5_8.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8/main.cpp" -o CMakeFiles/5_8.dir/main.cpp.s

# Object files for target 5_8
5_8_OBJECTS = \
"CMakeFiles/5_8.dir/main.cpp.o"

# External object files for target 5_8
5_8_EXTERNAL_OBJECTS =

5_8: CMakeFiles/5_8.dir/main.cpp.o
5_8: CMakeFiles/5_8.dir/build.make
5_8: CMakeFiles/5_8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 5_8"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/5_8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/5_8.dir/build: 5_8

.PHONY : CMakeFiles/5_8.dir/build

CMakeFiles/5_8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/5_8.dir/cmake_clean.cmake
.PHONY : CMakeFiles/5_8.dir/clean

CMakeFiles/5_8.dir/depend:
	cd "/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8" "/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8" "/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8/cmake-build-debug" "/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8/cmake-build-debug" "/Users/tiagoandre/Documents/PROG/5 - Strings. Structs. Stringstreams. Files./5.8/cmake-build-debug/CMakeFiles/5_8.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/5_8.dir/depend

