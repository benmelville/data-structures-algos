include_directories(${CMAKE_SOURCE_DIR}/doubly-linked-list)

add_executable(doubly-linked-list-test doubly_linked_list_test.cpp)


target_link_libraries(doubly-linked-list-test
    GTest::gtest_main
)