# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA

# Include any dependencies generated for this target.
include CMakeFiles/prog.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/prog.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/prog.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prog.dir/flags.make

CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.o: prog_autogen/mocs_compilation.cpp
CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.o -MF CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/prog_autogen/mocs_compilation.cpp

CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/prog_autogen/mocs_compilation.cpp > CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.i

CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/prog_autogen/mocs_compilation.cpp -o CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.s

CMakeFiles/prog.dir/src/MainWindow.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/src/MainWindow.cpp.o: src/MainWindow.cpp
CMakeFiles/prog.dir/src/MainWindow.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/prog.dir/src/MainWindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/src/MainWindow.cpp.o -MF CMakeFiles/prog.dir/src/MainWindow.cpp.o.d -o CMakeFiles/prog.dir/src/MainWindow.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/MainWindow.cpp

CMakeFiles/prog.dir/src/MainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/src/MainWindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/MainWindow.cpp > CMakeFiles/prog.dir/src/MainWindow.cpp.i

CMakeFiles/prog.dir/src/MainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/src/MainWindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/MainWindow.cpp -o CMakeFiles/prog.dir/src/MainWindow.cpp.s

CMakeFiles/prog.dir/src/MyScene.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/src/MyScene.cpp.o: src/MyScene.cpp
CMakeFiles/prog.dir/src/MyScene.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/prog.dir/src/MyScene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/src/MyScene.cpp.o -MF CMakeFiles/prog.dir/src/MyScene.cpp.o.d -o CMakeFiles/prog.dir/src/MyScene.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/MyScene.cpp

CMakeFiles/prog.dir/src/MyScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/src/MyScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/MyScene.cpp > CMakeFiles/prog.dir/src/MyScene.cpp.i

CMakeFiles/prog.dir/src/MyScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/src/MyScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/MyScene.cpp -o CMakeFiles/prog.dir/src/MyScene.cpp.s

CMakeFiles/prog.dir/src/ennemies.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/src/ennemies.cpp.o: src/ennemies.cpp
CMakeFiles/prog.dir/src/ennemies.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/prog.dir/src/ennemies.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/src/ennemies.cpp.o -MF CMakeFiles/prog.dir/src/ennemies.cpp.o.d -o CMakeFiles/prog.dir/src/ennemies.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/ennemies.cpp

CMakeFiles/prog.dir/src/ennemies.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/src/ennemies.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/ennemies.cpp > CMakeFiles/prog.dir/src/ennemies.cpp.i

CMakeFiles/prog.dir/src/ennemies.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/src/ennemies.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/ennemies.cpp -o CMakeFiles/prog.dir/src/ennemies.cpp.s

CMakeFiles/prog.dir/src/healthBar.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/src/healthBar.cpp.o: src/healthBar.cpp
CMakeFiles/prog.dir/src/healthBar.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/prog.dir/src/healthBar.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/src/healthBar.cpp.o -MF CMakeFiles/prog.dir/src/healthBar.cpp.o.d -o CMakeFiles/prog.dir/src/healthBar.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/healthBar.cpp

CMakeFiles/prog.dir/src/healthBar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/src/healthBar.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/healthBar.cpp > CMakeFiles/prog.dir/src/healthBar.cpp.i

CMakeFiles/prog.dir/src/healthBar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/src/healthBar.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/healthBar.cpp -o CMakeFiles/prog.dir/src/healthBar.cpp.s

CMakeFiles/prog.dir/src/heroes.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/src/heroes.cpp.o: src/heroes.cpp
CMakeFiles/prog.dir/src/heroes.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/prog.dir/src/heroes.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/src/heroes.cpp.o -MF CMakeFiles/prog.dir/src/heroes.cpp.o.d -o CMakeFiles/prog.dir/src/heroes.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/heroes.cpp

CMakeFiles/prog.dir/src/heroes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/src/heroes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/heroes.cpp > CMakeFiles/prog.dir/src/heroes.cpp.i

CMakeFiles/prog.dir/src/heroes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/src/heroes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/heroes.cpp -o CMakeFiles/prog.dir/src/heroes.cpp.s

CMakeFiles/prog.dir/src/magicBalls.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/src/magicBalls.cpp.o: src/magicBalls.cpp
CMakeFiles/prog.dir/src/magicBalls.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/prog.dir/src/magicBalls.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/src/magicBalls.cpp.o -MF CMakeFiles/prog.dir/src/magicBalls.cpp.o.d -o CMakeFiles/prog.dir/src/magicBalls.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/magicBalls.cpp

CMakeFiles/prog.dir/src/magicBalls.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/src/magicBalls.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/magicBalls.cpp > CMakeFiles/prog.dir/src/magicBalls.cpp.i

CMakeFiles/prog.dir/src/magicBalls.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/src/magicBalls.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/magicBalls.cpp -o CMakeFiles/prog.dir/src/magicBalls.cpp.s

CMakeFiles/prog.dir/src/main.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/prog.dir/src/main.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/prog.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/src/main.cpp.o -MF CMakeFiles/prog.dir/src/main.cpp.o.d -o CMakeFiles/prog.dir/src/main.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/main.cpp

CMakeFiles/prog.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/main.cpp > CMakeFiles/prog.dir/src/main.cpp.i

CMakeFiles/prog.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/main.cpp -o CMakeFiles/prog.dir/src/main.cpp.s

CMakeFiles/prog.dir/src/scoreScene.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/src/scoreScene.cpp.o: src/scoreScene.cpp
CMakeFiles/prog.dir/src/scoreScene.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/prog.dir/src/scoreScene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/src/scoreScene.cpp.o -MF CMakeFiles/prog.dir/src/scoreScene.cpp.o.d -o CMakeFiles/prog.dir/src/scoreScene.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/scoreScene.cpp

CMakeFiles/prog.dir/src/scoreScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/src/scoreScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/scoreScene.cpp > CMakeFiles/prog.dir/src/scoreScene.cpp.i

CMakeFiles/prog.dir/src/scoreScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/src/scoreScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/scoreScene.cpp -o CMakeFiles/prog.dir/src/scoreScene.cpp.s

CMakeFiles/prog.dir/src/shooter.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/src/shooter.cpp.o: src/shooter.cpp
CMakeFiles/prog.dir/src/shooter.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/prog.dir/src/shooter.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/src/shooter.cpp.o -MF CMakeFiles/prog.dir/src/shooter.cpp.o.d -o CMakeFiles/prog.dir/src/shooter.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/shooter.cpp

CMakeFiles/prog.dir/src/shooter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/src/shooter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/shooter.cpp > CMakeFiles/prog.dir/src/shooter.cpp.i

CMakeFiles/prog.dir/src/shooter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/src/shooter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/shooter.cpp -o CMakeFiles/prog.dir/src/shooter.cpp.s

CMakeFiles/prog.dir/src/shuriken.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/src/shuriken.cpp.o: src/shuriken.cpp
CMakeFiles/prog.dir/src/shuriken.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/prog.dir/src/shuriken.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/src/shuriken.cpp.o -MF CMakeFiles/prog.dir/src/shuriken.cpp.o.d -o CMakeFiles/prog.dir/src/shuriken.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/shuriken.cpp

CMakeFiles/prog.dir/src/shuriken.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/src/shuriken.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/shuriken.cpp > CMakeFiles/prog.dir/src/shuriken.cpp.i

CMakeFiles/prog.dir/src/shuriken.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/src/shuriken.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/shuriken.cpp -o CMakeFiles/prog.dir/src/shuriken.cpp.s

CMakeFiles/prog.dir/src/startScene.cpp.o: CMakeFiles/prog.dir/flags.make
CMakeFiles/prog.dir/src/startScene.cpp.o: src/startScene.cpp
CMakeFiles/prog.dir/src/startScene.cpp.o: CMakeFiles/prog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/prog.dir/src/startScene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/prog.dir/src/startScene.cpp.o -MF CMakeFiles/prog.dir/src/startScene.cpp.o.d -o CMakeFiles/prog.dir/src/startScene.cpp.o -c /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/startScene.cpp

CMakeFiles/prog.dir/src/startScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog.dir/src/startScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/startScene.cpp > CMakeFiles/prog.dir/src/startScene.cpp.i

CMakeFiles/prog.dir/src/startScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog.dir/src/startScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/src/startScene.cpp -o CMakeFiles/prog.dir/src/startScene.cpp.s

# Object files for target prog
prog_OBJECTS = \
"CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/prog.dir/src/MainWindow.cpp.o" \
"CMakeFiles/prog.dir/src/MyScene.cpp.o" \
"CMakeFiles/prog.dir/src/ennemies.cpp.o" \
"CMakeFiles/prog.dir/src/healthBar.cpp.o" \
"CMakeFiles/prog.dir/src/heroes.cpp.o" \
"CMakeFiles/prog.dir/src/magicBalls.cpp.o" \
"CMakeFiles/prog.dir/src/main.cpp.o" \
"CMakeFiles/prog.dir/src/scoreScene.cpp.o" \
"CMakeFiles/prog.dir/src/shooter.cpp.o" \
"CMakeFiles/prog.dir/src/shuriken.cpp.o" \
"CMakeFiles/prog.dir/src/startScene.cpp.o"

# External object files for target prog
prog_EXTERNAL_OBJECTS =

prog: CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.o
prog: CMakeFiles/prog.dir/src/MainWindow.cpp.o
prog: CMakeFiles/prog.dir/src/MyScene.cpp.o
prog: CMakeFiles/prog.dir/src/ennemies.cpp.o
prog: CMakeFiles/prog.dir/src/healthBar.cpp.o
prog: CMakeFiles/prog.dir/src/heroes.cpp.o
prog: CMakeFiles/prog.dir/src/magicBalls.cpp.o
prog: CMakeFiles/prog.dir/src/main.cpp.o
prog: CMakeFiles/prog.dir/src/scoreScene.cpp.o
prog: CMakeFiles/prog.dir/src/shooter.cpp.o
prog: CMakeFiles/prog.dir/src/shuriken.cpp.o
prog: CMakeFiles/prog.dir/src/startScene.cpp.o
prog: CMakeFiles/prog.dir/build.make
prog: /usr/lib/x86_64-linux-gnu/libQt6Widgets.so.6.4.2
prog: /usr/lib/x86_64-linux-gnu/libQt6Gui.so.6.4.2
prog: /usr/lib/x86_64-linux-gnu/libQt6Core.so.6.4.2
prog: /usr/lib/x86_64-linux-gnu/libGLX.so
prog: /usr/lib/x86_64-linux-gnu/libOpenGL.so
prog: CMakeFiles/prog.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable prog"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prog.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prog.dir/build: prog
.PHONY : CMakeFiles/prog.dir/build

CMakeFiles/prog.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prog.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prog.dir/clean

CMakeFiles/prog.dir/depend:
	cd /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles/prog.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prog.dir/depend

