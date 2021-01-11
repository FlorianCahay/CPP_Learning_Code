set(executables
    1-hello_world
    2-parrot
    3-array
    4-calculator
)

set(CMAKE_COMMON_FLAGS "${CMAKE_COMMON_FLAGS} -Wall -W -Werror -std=c++17")

foreach(executable ${executables})
    add_executable(c1-${executable} ${executable}.cpp)
endforeach()

