cmake_minimum_required(VERSION 3.5)
project(lruApp CXX)

enable_testing()

add_subdirectory(include)
add_subdirectory(src)
if(NOT CMAKE_TOOLCHAIN_FILE)
	add_subdirectory(test)
endif()
