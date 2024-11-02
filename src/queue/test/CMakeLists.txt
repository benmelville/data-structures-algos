add_executable(queue-test queue_test.cpp)

target_link_libraries(queue-test
        GTest::gtest_main
)