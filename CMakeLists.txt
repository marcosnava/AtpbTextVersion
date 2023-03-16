cmake_minimum_required(VERSION 3.24)
project(AtpbTextVersion)

set(CMAKE_CXX_STANDARD 17)

add_executable(AtpbTextVersion AtpbTextVersion.cpp CursesUtils.cpp CursesUtils.h AtpbTextVersion.h)

add_library( ncurses SHARED IMPORTED)
set_target_properties( ncurses PROPERTIES IMPORTED_LOCATION "/lib/x86_64-linux-gnu/libncurses.so")

TARGET_LINK_LIBRARIES(AtpbTextVersion ncurses)
