cmake_minimum_required(VERSION 3.2)

project(assembly_laboratories_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O3")

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(SOURCE_FILES
	${PROJECT_SOURCE_DIR}/src/calculator.cpp
	${PROJECT_SOURCE_DIR}/src/calculator_tutorial.cpp	
)

include_directories(${INCLUDE_DIR})

add_executable(assembly_laboratories_1 ${SOURCE_FILES})
target_link_libraries(assembly_laboratories_1)