
include_directories(${CMAKE_SOURCE_DIR}/stack)

add_executable(stack-test stack_test.cpp)

target_link_libraries(stack-test
        GTest::gtest_main
)