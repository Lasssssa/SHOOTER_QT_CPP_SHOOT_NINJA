# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = "/mnt/c/Users/theop/OneDrive - yncréa/Documents/CIR2/C++/Pratique_TP/mini_projet_cpp"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/theop/OneDrive - yncréa/Documents/CIR2/C++/Pratique_TP/mini_projet_cpp"

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "/mnt/c/Users/theop/OneDrive - yncréa/Documents/CIR2/C++/Pratique_TP/mini_projet_cpp/CMakeFiles" "/mnt/c/Users/theop/OneDrive - yncréa/Documents/CIR2/C++/Pratique_TP/mini_projet_cpp//CMakeFiles/progress.marks"
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "/mnt/c/Users/theop/OneDrive - yncréa/Documents/CIR2/C++/Pratique_TP/mini_projet_cpp/CMakeFiles" 0
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
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

