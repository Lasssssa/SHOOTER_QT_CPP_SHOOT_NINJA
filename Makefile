# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/tporodo/SHOOTER_QT_CPP_SHOOT_NINJA/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named prog

# Build rule for target.
prog: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 prog
.PHONY : prog

# fast build rule for target.
prog/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/build
.PHONY : prog/fast

#=============================================================================
# Target rules for targets named prog_autogen

# Build rule for target.
prog_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 prog_autogen
.PHONY : prog_autogen

# fast build rule for target.
prog_autogen/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog_autogen.dir/build.make CMakeFiles/prog_autogen.dir/build
.PHONY : prog_autogen/fast

prog_autogen/mocs_compilation.o: prog_autogen/mocs_compilation.cpp.o
.PHONY : prog_autogen/mocs_compilation.o

# target to build an object file
prog_autogen/mocs_compilation.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.o
.PHONY : prog_autogen/mocs_compilation.cpp.o

prog_autogen/mocs_compilation.i: prog_autogen/mocs_compilation.cpp.i
.PHONY : prog_autogen/mocs_compilation.i

# target to preprocess a source file
prog_autogen/mocs_compilation.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.i
.PHONY : prog_autogen/mocs_compilation.cpp.i

prog_autogen/mocs_compilation.s: prog_autogen/mocs_compilation.cpp.s
.PHONY : prog_autogen/mocs_compilation.s

# target to generate assembly for a file
prog_autogen/mocs_compilation.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/prog_autogen/mocs_compilation.cpp.s
.PHONY : prog_autogen/mocs_compilation.cpp.s

src/MainWindow.o: src/MainWindow.cpp.o
.PHONY : src/MainWindow.o

# target to build an object file
src/MainWindow.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/MainWindow.cpp.o
.PHONY : src/MainWindow.cpp.o

src/MainWindow.i: src/MainWindow.cpp.i
.PHONY : src/MainWindow.i

# target to preprocess a source file
src/MainWindow.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/MainWindow.cpp.i
.PHONY : src/MainWindow.cpp.i

src/MainWindow.s: src/MainWindow.cpp.s
.PHONY : src/MainWindow.s

# target to generate assembly for a file
src/MainWindow.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/MainWindow.cpp.s
.PHONY : src/MainWindow.cpp.s

src/MyScene.o: src/MyScene.cpp.o
.PHONY : src/MyScene.o

# target to build an object file
src/MyScene.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/MyScene.cpp.o
.PHONY : src/MyScene.cpp.o

src/MyScene.i: src/MyScene.cpp.i
.PHONY : src/MyScene.i

# target to preprocess a source file
src/MyScene.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/MyScene.cpp.i
.PHONY : src/MyScene.cpp.i

src/MyScene.s: src/MyScene.cpp.s
.PHONY : src/MyScene.s

# target to generate assembly for a file
src/MyScene.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/MyScene.cpp.s
.PHONY : src/MyScene.cpp.s

src/ennemies.o: src/ennemies.cpp.o
.PHONY : src/ennemies.o

# target to build an object file
src/ennemies.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/ennemies.cpp.o
.PHONY : src/ennemies.cpp.o

src/ennemies.i: src/ennemies.cpp.i
.PHONY : src/ennemies.i

# target to preprocess a source file
src/ennemies.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/ennemies.cpp.i
.PHONY : src/ennemies.cpp.i

src/ennemies.s: src/ennemies.cpp.s
.PHONY : src/ennemies.s

# target to generate assembly for a file
src/ennemies.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/ennemies.cpp.s
.PHONY : src/ennemies.cpp.s

src/healthBar.o: src/healthBar.cpp.o
.PHONY : src/healthBar.o

# target to build an object file
src/healthBar.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/healthBar.cpp.o
.PHONY : src/healthBar.cpp.o

src/healthBar.i: src/healthBar.cpp.i
.PHONY : src/healthBar.i

# target to preprocess a source file
src/healthBar.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/healthBar.cpp.i
.PHONY : src/healthBar.cpp.i

src/healthBar.s: src/healthBar.cpp.s
.PHONY : src/healthBar.s

# target to generate assembly for a file
src/healthBar.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/healthBar.cpp.s
.PHONY : src/healthBar.cpp.s

src/heroes.o: src/heroes.cpp.o
.PHONY : src/heroes.o

# target to build an object file
src/heroes.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/heroes.cpp.o
.PHONY : src/heroes.cpp.o

src/heroes.i: src/heroes.cpp.i
.PHONY : src/heroes.i

# target to preprocess a source file
src/heroes.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/heroes.cpp.i
.PHONY : src/heroes.cpp.i

src/heroes.s: src/heroes.cpp.s
.PHONY : src/heroes.s

# target to generate assembly for a file
src/heroes.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/heroes.cpp.s
.PHONY : src/heroes.cpp.s

src/magicBalls.o: src/magicBalls.cpp.o
.PHONY : src/magicBalls.o

# target to build an object file
src/magicBalls.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/magicBalls.cpp.o
.PHONY : src/magicBalls.cpp.o

src/magicBalls.i: src/magicBalls.cpp.i
.PHONY : src/magicBalls.i

# target to preprocess a source file
src/magicBalls.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/magicBalls.cpp.i
.PHONY : src/magicBalls.cpp.i

src/magicBalls.s: src/magicBalls.cpp.s
.PHONY : src/magicBalls.s

# target to generate assembly for a file
src/magicBalls.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/magicBalls.cpp.s
.PHONY : src/magicBalls.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/scoreScene.o: src/scoreScene.cpp.o
.PHONY : src/scoreScene.o

# target to build an object file
src/scoreScene.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/scoreScene.cpp.o
.PHONY : src/scoreScene.cpp.o

src/scoreScene.i: src/scoreScene.cpp.i
.PHONY : src/scoreScene.i

# target to preprocess a source file
src/scoreScene.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/scoreScene.cpp.i
.PHONY : src/scoreScene.cpp.i

src/scoreScene.s: src/scoreScene.cpp.s
.PHONY : src/scoreScene.s

# target to generate assembly for a file
src/scoreScene.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/scoreScene.cpp.s
.PHONY : src/scoreScene.cpp.s

src/shooter.o: src/shooter.cpp.o
.PHONY : src/shooter.o

# target to build an object file
src/shooter.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/shooter.cpp.o
.PHONY : src/shooter.cpp.o

src/shooter.i: src/shooter.cpp.i
.PHONY : src/shooter.i

# target to preprocess a source file
src/shooter.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/shooter.cpp.i
.PHONY : src/shooter.cpp.i

src/shooter.s: src/shooter.cpp.s
.PHONY : src/shooter.s

# target to generate assembly for a file
src/shooter.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/shooter.cpp.s
.PHONY : src/shooter.cpp.s

src/shuriken.o: src/shuriken.cpp.o
.PHONY : src/shuriken.o

# target to build an object file
src/shuriken.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/shuriken.cpp.o
.PHONY : src/shuriken.cpp.o

src/shuriken.i: src/shuriken.cpp.i
.PHONY : src/shuriken.i

# target to preprocess a source file
src/shuriken.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/shuriken.cpp.i
.PHONY : src/shuriken.cpp.i

src/shuriken.s: src/shuriken.cpp.s
.PHONY : src/shuriken.s

# target to generate assembly for a file
src/shuriken.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/shuriken.cpp.s
.PHONY : src/shuriken.cpp.s

src/startScene.o: src/startScene.cpp.o
.PHONY : src/startScene.o

# target to build an object file
src/startScene.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/startScene.cpp.o
.PHONY : src/startScene.cpp.o

src/startScene.i: src/startScene.cpp.i
.PHONY : src/startScene.i

# target to preprocess a source file
src/startScene.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/startScene.cpp.i
.PHONY : src/startScene.cpp.i

src/startScene.s: src/startScene.cpp.s
.PHONY : src/startScene.s

# target to generate assembly for a file
src/startScene.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog.dir/build.make CMakeFiles/prog.dir/src/startScene.cpp.s
.PHONY : src/startScene.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... prog_autogen"
	@echo "... prog"
	@echo "... prog_autogen/mocs_compilation.o"
	@echo "... prog_autogen/mocs_compilation.i"
	@echo "... prog_autogen/mocs_compilation.s"
	@echo "... src/MainWindow.o"
	@echo "... src/MainWindow.i"
	@echo "... src/MainWindow.s"
	@echo "... src/MyScene.o"
	@echo "... src/MyScene.i"
	@echo "... src/MyScene.s"
	@echo "... src/ennemies.o"
	@echo "... src/ennemies.i"
	@echo "... src/ennemies.s"
	@echo "... src/healthBar.o"
	@echo "... src/healthBar.i"
	@echo "... src/healthBar.s"
	@echo "... src/heroes.o"
	@echo "... src/heroes.i"
	@echo "... src/heroes.s"
	@echo "... src/magicBalls.o"
	@echo "... src/magicBalls.i"
	@echo "... src/magicBalls.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/scoreScene.o"
	@echo "... src/scoreScene.i"
	@echo "... src/scoreScene.s"
	@echo "... src/shooter.o"
	@echo "... src/shooter.i"
	@echo "... src/shooter.s"
	@echo "... src/shuriken.o"
	@echo "... src/shuriken.i"
	@echo "... src/shuriken.s"
	@echo "... src/startScene.o"
	@echo "... src/startScene.i"
	@echo "... src/startScene.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

