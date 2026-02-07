cmake_minimum_required(VERSION 3.10)
project(epik_tui)

# Set C standard
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Add the source files
set(SOURCES
    source/main/main.c
    source/main/home.c
)

# Add the include directories
include_directories(${PROJECT_SOURCE_DIR}/libraries)

# Find ncurses
find_package(Curses REQUIRED)

# Add the executable
add_executable(epik_tui ${SOURCES})

# Link with ncurses
target_link_libraries(epik_tui PRIVATE ${CURSES_LIBRARIES})

target_include_directories(epik_tui PRIVATE ${CURSES_INCLUDE_DIR})

# Optional: Set output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/bin)
