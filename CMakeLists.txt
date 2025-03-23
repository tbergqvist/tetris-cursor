cmake_minimum_required(VERSION 3.28)
project(tetris VERSION 1.0)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include FetchContent
include(FetchContent)

# Fetch SFML
FetchContent_Declare(
    SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM
)
FetchContent_MakeAvailable(SFML)

# Add source files
add_executable(tetris 
    src/main.cpp 
    src/Game.cpp
    src/FpsCounter.cpp
    src/Tetromino.cpp
    src/ScoreDisplay.cpp
    src/BoardView.cpp
    src/Board.cpp
    src/GameOverScreen.cpp
)

# Link SFML libraries
target_link_libraries(tetris PRIVATE SFML::Graphics)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib) 