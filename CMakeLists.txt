cmake_minimum_required(VERSION 3.17)
project(zlib)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

add_compile_options(-stdlib=libc++)
include_directories(include)
add_library(libpyc SHARED zlist.c include/zlist.h)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()

add_executable(
        test_list
        test_list.c
)
target_link_libraries(
        test_list
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_list)
