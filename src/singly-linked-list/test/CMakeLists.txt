
include_directories(${CMAKE_SOURCE_DIR}/singly-linked-list)

add_executable(singly-linked-list-test singly_linked_list_test.cpp)

target_link_libraries(singly-linked-list-test
        GTest::gtest_main
)