
add_executable(singly-linked-list main.cpp)

add_library(node-lib
    Node.cpp)

add_library(singly-linked-list-lib
    SinglyLinkedList.cpp)

target_link_libraries(singly-linked-list node-lib singly-linked-list-lib)

add_subdirectory(test)