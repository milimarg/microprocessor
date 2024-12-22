cmake_minimum_required(VERSION 3.20)
project(microprocessor C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wpedantic -g")

include_directories(includes)

add_executable(
        microprocessor
        src/main.c
        src/components.c
        src/logic-gates/and.c
        src/logic-gates/or.c
        src/logic-gates/not.c
)
