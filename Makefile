# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/tim/source/tetris-cursor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tim/source/tetris-cursor

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Available install components are: \"Unspecified\" \"devel\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components
.PHONY : list_install_components/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/tim/source/tetris-cursor/CMakeFiles /home/tim/source/tetris-cursor//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/tim/source/tetris-cursor/CMakeFiles 0
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
# Target rules for targets named tetris

# Build rule for target.
tetris: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 tetris
.PHONY : tetris

# fast build rule for target.
tetris/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/build
.PHONY : tetris/fast

#=============================================================================
# Target rules for targets named sfml-system

# Build rule for target.
sfml-system: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 sfml-system
.PHONY : sfml-system

# fast build rule for target.
sfml-system/fast:
	$(MAKE) $(MAKESILENT) -f _deps/sfml-build/src/SFML/System/CMakeFiles/sfml-system.dir/build.make _deps/sfml-build/src/SFML/System/CMakeFiles/sfml-system.dir/build
.PHONY : sfml-system/fast

#=============================================================================
# Target rules for targets named sfml-window

# Build rule for target.
sfml-window: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 sfml-window
.PHONY : sfml-window

# fast build rule for target.
sfml-window/fast:
	$(MAKE) $(MAKESILENT) -f _deps/sfml-build/src/SFML/Window/CMakeFiles/sfml-window.dir/build.make _deps/sfml-build/src/SFML/Window/CMakeFiles/sfml-window.dir/build
.PHONY : sfml-window/fast

#=============================================================================
# Target rules for targets named sfml-network

# Build rule for target.
sfml-network: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 sfml-network
.PHONY : sfml-network

# fast build rule for target.
sfml-network/fast:
	$(MAKE) $(MAKESILENT) -f _deps/sfml-build/src/SFML/Network/CMakeFiles/sfml-network.dir/build.make _deps/sfml-build/src/SFML/Network/CMakeFiles/sfml-network.dir/build
.PHONY : sfml-network/fast

#=============================================================================
# Target rules for targets named sfml-graphics

# Build rule for target.
sfml-graphics: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 sfml-graphics
.PHONY : sfml-graphics

# fast build rule for target.
sfml-graphics/fast:
	$(MAKE) $(MAKESILENT) -f _deps/sfml-build/src/SFML/Graphics/CMakeFiles/sfml-graphics.dir/build.make _deps/sfml-build/src/SFML/Graphics/CMakeFiles/sfml-graphics.dir/build
.PHONY : sfml-graphics/fast

#=============================================================================
# Target rules for targets named sfml-audio

# Build rule for target.
sfml-audio: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 sfml-audio
.PHONY : sfml-audio

# fast build rule for target.
sfml-audio/fast:
	$(MAKE) $(MAKESILENT) -f _deps/sfml-build/src/SFML/Audio/CMakeFiles/sfml-audio.dir/build.make _deps/sfml-build/src/SFML/Audio/CMakeFiles/sfml-audio.dir/build
.PHONY : sfml-audio/fast

src/Board.o: src/Board.cpp.o
.PHONY : src/Board.o

# target to build an object file
src/Board.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/Board.cpp.o
.PHONY : src/Board.cpp.o

src/Board.i: src/Board.cpp.i
.PHONY : src/Board.i

# target to preprocess a source file
src/Board.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/Board.cpp.i
.PHONY : src/Board.cpp.i

src/Board.s: src/Board.cpp.s
.PHONY : src/Board.s

# target to generate assembly for a file
src/Board.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/Board.cpp.s
.PHONY : src/Board.cpp.s

src/BoardView.o: src/BoardView.cpp.o
.PHONY : src/BoardView.o

# target to build an object file
src/BoardView.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/BoardView.cpp.o
.PHONY : src/BoardView.cpp.o

src/BoardView.i: src/BoardView.cpp.i
.PHONY : src/BoardView.i

# target to preprocess a source file
src/BoardView.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/BoardView.cpp.i
.PHONY : src/BoardView.cpp.i

src/BoardView.s: src/BoardView.cpp.s
.PHONY : src/BoardView.s

# target to generate assembly for a file
src/BoardView.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/BoardView.cpp.s
.PHONY : src/BoardView.cpp.s

src/FpsCounter.o: src/FpsCounter.cpp.o
.PHONY : src/FpsCounter.o

# target to build an object file
src/FpsCounter.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/FpsCounter.cpp.o
.PHONY : src/FpsCounter.cpp.o

src/FpsCounter.i: src/FpsCounter.cpp.i
.PHONY : src/FpsCounter.i

# target to preprocess a source file
src/FpsCounter.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/FpsCounter.cpp.i
.PHONY : src/FpsCounter.cpp.i

src/FpsCounter.s: src/FpsCounter.cpp.s
.PHONY : src/FpsCounter.s

# target to generate assembly for a file
src/FpsCounter.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/FpsCounter.cpp.s
.PHONY : src/FpsCounter.cpp.s

src/Game.o: src/Game.cpp.o
.PHONY : src/Game.o

# target to build an object file
src/Game.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/Game.cpp.o
.PHONY : src/Game.cpp.o

src/Game.i: src/Game.cpp.i
.PHONY : src/Game.i

# target to preprocess a source file
src/Game.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/Game.cpp.i
.PHONY : src/Game.cpp.i

src/Game.s: src/Game.cpp.s
.PHONY : src/Game.s

# target to generate assembly for a file
src/Game.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/Game.cpp.s
.PHONY : src/Game.cpp.s

src/GameOverScreen.o: src/GameOverScreen.cpp.o
.PHONY : src/GameOverScreen.o

# target to build an object file
src/GameOverScreen.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/GameOverScreen.cpp.o
.PHONY : src/GameOverScreen.cpp.o

src/GameOverScreen.i: src/GameOverScreen.cpp.i
.PHONY : src/GameOverScreen.i

# target to preprocess a source file
src/GameOverScreen.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/GameOverScreen.cpp.i
.PHONY : src/GameOverScreen.cpp.i

src/GameOverScreen.s: src/GameOverScreen.cpp.s
.PHONY : src/GameOverScreen.s

# target to generate assembly for a file
src/GameOverScreen.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/GameOverScreen.cpp.s
.PHONY : src/GameOverScreen.cpp.s

src/ScoreDisplay.o: src/ScoreDisplay.cpp.o
.PHONY : src/ScoreDisplay.o

# target to build an object file
src/ScoreDisplay.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/ScoreDisplay.cpp.o
.PHONY : src/ScoreDisplay.cpp.o

src/ScoreDisplay.i: src/ScoreDisplay.cpp.i
.PHONY : src/ScoreDisplay.i

# target to preprocess a source file
src/ScoreDisplay.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/ScoreDisplay.cpp.i
.PHONY : src/ScoreDisplay.cpp.i

src/ScoreDisplay.s: src/ScoreDisplay.cpp.s
.PHONY : src/ScoreDisplay.s

# target to generate assembly for a file
src/ScoreDisplay.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/ScoreDisplay.cpp.s
.PHONY : src/ScoreDisplay.cpp.s

src/Tetromino.o: src/Tetromino.cpp.o
.PHONY : src/Tetromino.o

# target to build an object file
src/Tetromino.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/Tetromino.cpp.o
.PHONY : src/Tetromino.cpp.o

src/Tetromino.i: src/Tetromino.cpp.i
.PHONY : src/Tetromino.i

# target to preprocess a source file
src/Tetromino.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/Tetromino.cpp.i
.PHONY : src/Tetromino.cpp.i

src/Tetromino.s: src/Tetromino.cpp.s
.PHONY : src/Tetromino.s

# target to generate assembly for a file
src/Tetromino.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/Tetromino.cpp.s
.PHONY : src/Tetromino.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... sfml-audio"
	@echo "... sfml-graphics"
	@echo "... sfml-network"
	@echo "... sfml-system"
	@echo "... sfml-window"
	@echo "... tetris"
	@echo "... src/Board.o"
	@echo "... src/Board.i"
	@echo "... src/Board.s"
	@echo "... src/BoardView.o"
	@echo "... src/BoardView.i"
	@echo "... src/BoardView.s"
	@echo "... src/FpsCounter.o"
	@echo "... src/FpsCounter.i"
	@echo "... src/FpsCounter.s"
	@echo "... src/Game.o"
	@echo "... src/Game.i"
	@echo "... src/Game.s"
	@echo "... src/GameOverScreen.o"
	@echo "... src/GameOverScreen.i"
	@echo "... src/GameOverScreen.s"
	@echo "... src/ScoreDisplay.o"
	@echo "... src/ScoreDisplay.i"
	@echo "... src/ScoreDisplay.s"
	@echo "... src/Tetromino.o"
	@echo "... src/Tetromino.i"
	@echo "... src/Tetromino.s"
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

