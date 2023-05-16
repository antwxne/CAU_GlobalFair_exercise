#Cmake version
cmake_minimum_required(VERSION 3.20)

#Project name
project(GlobalFair)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(BEGINNER_BIN_NAME beginner)
set(INTERMEDIATE_BIN_NAME intermediate)
set(ADVANCED_BIN_NAME advanced)

set(BEGINNER_SRC 
        Beginner/add.c
        Beginner/main.c
)

set(INTERMEDIATE_SRC 
        Intermediate/stairs.c
        Intermediate/main.c
)

set(ADVANCED_SRC 
        Advanced/revstr.c
        Advanced/main.c
)

add_executable(${BEGINNER_BIN_NAME} ${BEGINNER_SRC})
add_executable(${INTERMEDIATE_BIN_NAME} ${INTERMEDIATE_SRC})
add_executable(${ADVANCED_BIN_NAME} ${ADVANCED_SRC})
