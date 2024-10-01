
include_directories(${CMAKE_SOURCE_DIR}/singly-linked-list)
message("the path to the singly linked list is: " ${CMAKE_SOURCE_DIR}/singly-linked-list)
add_executable(stack main.cpp)

add_subdirectory(test)