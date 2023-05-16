#Cmake version
cmake_minimum_required(VERSION 3.20)

#Project name
project(GlobalFair)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(BEGINNER_BIN_NAME beginner)
set(INTERMEDIATE_BIN_NAME intermediate)
set(ADVANCED_BIN_NAME advanced)
set(VERY_ADVANCED_BIN_NAME very_advanced)


set(BEGINNER_SRC 
        Beginner/beginner.c
        Beginner/main.c
)

set(INTERMEDIATE_SRC 
        Intermediate/intermediate.c
        Intermediate/main.c
)

set(ADVANCED_SRC 
        Advanced/advanced.c
        Advanced/main.c
)

set(VERY_ADVANCED_SRC 
        Very_advanced/very_advanced.c
        Very_advanced/main.c
)

add_executable(${BEGINNER_BIN_NAME} ${BEGINNER_SRC})
add_executable(${INTERMEDIATE_BIN_NAME} ${INTERMEDIATE_SRC})
add_executable(${ADVANCED_BIN_NAME} ${ADVANCED_SRC})
add_executable(${VERY_ADVANCED_BIN_NAME} ${VERY_ADVANCED_SRC})
