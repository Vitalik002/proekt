# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Home\Desktop\gallows_game-main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Home\Desktop\gallows_game-main\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClionProjects.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ClionProjects.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClionProjects.dir/flags.make

CMakeFiles/ClionProjects.dir/main.cpp.obj: CMakeFiles/ClionProjects.dir/flags.make
CMakeFiles/ClionProjects.dir/main.cpp.obj: CMakeFiles/ClionProjects.dir/includes_CXX.rsp
CMakeFiles/ClionProjects.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Home\Desktop\gallows_game-main\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClionProjects.dir/main.cpp.obj"
	C:\Users\Home\Desktop\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ClionProjects.dir\main.cpp.obj -c C:\Users\Home\Desktop\gallows_game-main\main.cpp

CMakeFiles/ClionProjects.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClionProjects.dir/main.cpp.i"
	C:\Users\Home\Desktop\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Home\Desktop\gallows_game-main\main.cpp > CMakeFiles\ClionProjects.dir\main.cpp.i

CMakeFiles/ClionProjects.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClionProjects.dir/main.cpp.s"
	C:\Users\Home\Desktop\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Home\Desktop\gallows_game-main\main.cpp -o CMakeFiles\ClionProjects.dir\main.cpp.s

# Object files for target ClionProjects
ClionProjects_OBJECTS = \
"CMakeFiles/ClionProjects.dir/main.cpp.obj"

# External object files for target ClionProjects
ClionProjects_EXTERNAL_OBJECTS =

ClionProjects.exe: CMakeFiles/ClionProjects.dir/main.cpp.obj
ClionProjects.exe: CMakeFiles/ClionProjects.dir/build.make
ClionProjects.exe: C:/SFML-2.5.1/lib/libsfml-graphics-s-d.a
ClionProjects.exe: C:/SFML-2.5.1/lib/libsfml-window-s-d.a
ClionProjects.exe: C:/SFML-2.5.1/lib/libsfml-system-s-d.a
ClionProjects.exe: C:/SFML-2.5.1/lib/libfreetype.a
ClionProjects.exe: CMakeFiles/ClionProjects.dir/linklibs.rsp
ClionProjects.exe: CMakeFiles/ClionProjects.dir/objects1.rsp
ClionProjects.exe: CMakeFiles/ClionProjects.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Home\Desktop\gallows_game-main\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ClionProjects.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ClionProjects.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClionProjects.dir/build: ClionProjects.exe

.PHONY : CMakeFiles/ClionProjects.dir/build

CMakeFiles/ClionProjects.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ClionProjects.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ClionProjects.dir/clean

CMakeFiles/ClionProjects.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Home\Desktop\gallows_game-main C:\Users\Home\Desktop\gallows_game-main C:\Users\Home\Desktop\gallows_game-main\cmake-build-debug C:\Users\Home\Desktop\gallows_game-main\cmake-build-debug C:\Users\Home\Desktop\gallows_game-main\cmake-build-debug\CMakeFiles\ClionProjects.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClionProjects.dir/depend

