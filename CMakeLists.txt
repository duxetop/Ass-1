cmake_minimum_required(VERSION 3.0.0)
project(Ass_1 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Ass_1 main.c)

set_property(TARGET Ass_1 PROPERTY C_STANDARD 99)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)