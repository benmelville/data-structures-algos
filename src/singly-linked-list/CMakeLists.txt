
add_executable(singly-linked-list main.cpp)

add_library(singly-linked-list-lib
    Node.cpp
    SinglyLinkedList.cpp)

target_link_libraries(singly-linked-list singly-linked-list-lib)

add_subdirectory(test)