# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ramtin/code/temp/uni

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ramtin/code/temp/uni/build

# Include any dependencies generated for this target.
include CMakeFiles/university.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/university.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/university.dir/flags.make

CMakeFiles/university.dir/main.cpp.o: CMakeFiles/university.dir/flags.make
CMakeFiles/university.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ramtin/code/temp/uni/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/university.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/university.dir/main.cpp.o -c /home/ramtin/code/temp/uni/main.cpp

CMakeFiles/university.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/university.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ramtin/code/temp/uni/main.cpp > CMakeFiles/university.dir/main.cpp.i

CMakeFiles/university.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/university.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ramtin/code/temp/uni/main.cpp -o CMakeFiles/university.dir/main.cpp.s

CMakeFiles/university.dir/Course.cpp.o: CMakeFiles/university.dir/flags.make
CMakeFiles/university.dir/Course.cpp.o: ../Course.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ramtin/code/temp/uni/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/university.dir/Course.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/university.dir/Course.cpp.o -c /home/ramtin/code/temp/uni/Course.cpp

CMakeFiles/university.dir/Course.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/university.dir/Course.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ramtin/code/temp/uni/Course.cpp > CMakeFiles/university.dir/Course.cpp.i

CMakeFiles/university.dir/Course.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/university.dir/Course.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ramtin/code/temp/uni/Course.cpp -o CMakeFiles/university.dir/Course.cpp.s

CMakeFiles/university.dir/Person.cpp.o: CMakeFiles/university.dir/flags.make
CMakeFiles/university.dir/Person.cpp.o: ../Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ramtin/code/temp/uni/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/university.dir/Person.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/university.dir/Person.cpp.o -c /home/ramtin/code/temp/uni/Person.cpp

CMakeFiles/university.dir/Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/university.dir/Person.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ramtin/code/temp/uni/Person.cpp > CMakeFiles/university.dir/Person.cpp.i

CMakeFiles/university.dir/Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/university.dir/Person.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ramtin/code/temp/uni/Person.cpp -o CMakeFiles/university.dir/Person.cpp.s

# Object files for target university
university_OBJECTS = \
"CMakeFiles/university.dir/main.cpp.o" \
"CMakeFiles/university.dir/Course.cpp.o" \
"CMakeFiles/university.dir/Person.cpp.o"

# External object files for target university
university_EXTERNAL_OBJECTS =

university: CMakeFiles/university.dir/main.cpp.o
university: CMakeFiles/university.dir/Course.cpp.o
university: CMakeFiles/university.dir/Person.cpp.o
university: CMakeFiles/university.dir/build.make
university: CMakeFiles/university.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ramtin/code/temp/uni/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable university"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/university.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/university.dir/build: university

.PHONY : CMakeFiles/university.dir/build

CMakeFiles/university.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/university.dir/cmake_clean.cmake
.PHONY : CMakeFiles/university.dir/clean

CMakeFiles/university.dir/depend:
	cd /home/ramtin/code/temp/uni/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ramtin/code/temp/uni /home/ramtin/code/temp/uni /home/ramtin/code/temp/uni/build /home/ramtin/code/temp/uni/build /home/ramtin/code/temp/uni/build/CMakeFiles/university.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/university.dir/depend

