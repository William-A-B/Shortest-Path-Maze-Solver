cmake_minimum_required(VERSION 3.28)
project(ShortestPathGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(ShortestPathGame src/main.cpp
        src/Utils/KeyBoardKeyMap.cpp
        src/Utils/KeyBoardKeyMap.h)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/Users/wabet/Programs/SFML-2.6.1/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/Users/wabet/Programs/SFML-2.6.1/include)
target_link_libraries(ShortestPathGame sfml-system sfml-window sfml-graphics sfml-audio)