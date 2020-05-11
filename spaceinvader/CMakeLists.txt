cmake_minimum_required(VERSION 3.15)
project(spaceinvader)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(spaceinvader main.cpp vaisseau_principal.hpp vaisseau_principal.cpp ennemis.cpp ennemis.hpp)
target_link_libraries(spaceinvader ${CONAN_LIBS})