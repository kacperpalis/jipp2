# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Kacper\CLionProjects\jipp2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug

# Include any dependencies generated for this target.
include allocation_basics/CMakeFiles/jipp2.dir/depend.make
# Include the progress variables for this target.
include allocation_basics/CMakeFiles/jipp2.dir/progress.make

# Include the compile flags for this target's objects.
include allocation_basics/CMakeFiles/jipp2.dir/flags.make

allocation_basics/CMakeFiles/jipp2.dir/main.cpp.obj: allocation_basics/CMakeFiles/jipp2.dir/flags.make
allocation_basics/CMakeFiles/jipp2.dir/main.cpp.obj: ../allocation_basics/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object allocation_basics/CMakeFiles/jipp2.dir/main.cpp.obj"
	cd /d C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\allocation_basics && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\jipp2.dir\main.cpp.obj -c C:\Users\Kacper\CLionProjects\jipp2\allocation_basics\main.cpp

allocation_basics/CMakeFiles/jipp2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jipp2.dir/main.cpp.i"
	cd /d C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\allocation_basics && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Kacper\CLionProjects\jipp2\allocation_basics\main.cpp > CMakeFiles\jipp2.dir\main.cpp.i

allocation_basics/CMakeFiles/jipp2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jipp2.dir/main.cpp.s"
	cd /d C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\allocation_basics && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Kacper\CLionProjects\jipp2\allocation_basics\main.cpp -o CMakeFiles\jipp2.dir\main.cpp.s

# Object files for target jipp2
jipp2_OBJECTS = \
"CMakeFiles/jipp2.dir/main.cpp.obj"

# External object files for target jipp2
jipp2_EXTERNAL_OBJECTS =

allocation_basics/jipp2.exe: allocation_basics/CMakeFiles/jipp2.dir/main.cpp.obj
allocation_basics/jipp2.exe: allocation_basics/CMakeFiles/jipp2.dir/build.make
allocation_basics/jipp2.exe: allocation_basics/CMakeFiles/jipp2.dir/linklibs.rsp
allocation_basics/jipp2.exe: allocation_basics/CMakeFiles/jipp2.dir/objects1.rsp
allocation_basics/jipp2.exe: allocation_basics/CMakeFiles/jipp2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable jipp2.exe"
	cd /d C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\allocation_basics && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\jipp2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
allocation_basics/CMakeFiles/jipp2.dir/build: allocation_basics/jipp2.exe
.PHONY : allocation_basics/CMakeFiles/jipp2.dir/build

allocation_basics/CMakeFiles/jipp2.dir/clean:
	cd /d C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\allocation_basics && $(CMAKE_COMMAND) -P CMakeFiles\jipp2.dir\cmake_clean.cmake
.PHONY : allocation_basics/CMakeFiles/jipp2.dir/clean

allocation_basics/CMakeFiles/jipp2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Kacper\CLionProjects\jipp2 C:\Users\Kacper\CLionProjects\jipp2\allocation_basics C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\allocation_basics C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\allocation_basics\CMakeFiles\jipp2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : allocation_basics/CMakeFiles/jipp2.dir/depend
