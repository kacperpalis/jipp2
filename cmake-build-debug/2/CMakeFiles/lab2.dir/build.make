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
include 2/CMakeFiles/lab2.dir/depend.make
# Include the progress variables for this target.
include 2/CMakeFiles/lab2.dir/progress.make

# Include the compile flags for this target's objects.
include 2/CMakeFiles/lab2.dir/flags.make

2/CMakeFiles/lab2.dir/2.cpp.obj: 2/CMakeFiles/lab2.dir/flags.make
2/CMakeFiles/lab2.dir/2.cpp.obj: ../2/2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 2/CMakeFiles/lab2.dir/2.cpp.obj"
	cd /d C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\2 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab2.dir\2.cpp.obj -c C:\Users\Kacper\CLionProjects\jipp2\2\2.cpp

2/CMakeFiles/lab2.dir/2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/2.cpp.i"
	cd /d C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\2 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Kacper\CLionProjects\jipp2\2\2.cpp > CMakeFiles\lab2.dir\2.cpp.i

2/CMakeFiles/lab2.dir/2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/2.cpp.s"
	cd /d C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\2 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Kacper\CLionProjects\jipp2\2\2.cpp -o CMakeFiles\lab2.dir\2.cpp.s

# Object files for target lab2
lab2_OBJECTS = \
"CMakeFiles/lab2.dir/2.cpp.obj"

# External object files for target lab2
lab2_EXTERNAL_OBJECTS =

2/lab2.exe: 2/CMakeFiles/lab2.dir/2.cpp.obj
2/lab2.exe: 2/CMakeFiles/lab2.dir/build.make
2/lab2.exe: 2/CMakeFiles/lab2.dir/linklibs.rsp
2/lab2.exe: 2/CMakeFiles/lab2.dir/objects1.rsp
2/lab2.exe: 2/CMakeFiles/lab2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab2.exe"
	cd /d C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
2/CMakeFiles/lab2.dir/build: 2/lab2.exe
.PHONY : 2/CMakeFiles/lab2.dir/build

2/CMakeFiles/lab2.dir/clean:
	cd /d C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\2 && $(CMAKE_COMMAND) -P CMakeFiles\lab2.dir\cmake_clean.cmake
.PHONY : 2/CMakeFiles/lab2.dir/clean

2/CMakeFiles/lab2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Kacper\CLionProjects\jipp2 C:\Users\Kacper\CLionProjects\jipp2\2 C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\2 C:\Users\Kacper\CLionProjects\jipp2\cmake-build-debug\2\CMakeFiles\lab2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 2/CMakeFiles/lab2.dir/depend
