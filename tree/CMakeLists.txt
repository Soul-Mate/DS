SET(LIBRARY_OUTPUT_PATH  ${PROJECT_BINARY_DIR}/libs)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/stack)


ADD_LIBRARY(stack SHARED ${PROJECT_SOURCE_DIR}/tree/stack.c)

ADD_LIBRARY(link_tree SHARED ${PROJECT_SOURCE_DIR}/tree/link_tree.c ${PROJECT_SOURCE_DIR}/tree/stack.c)

ADD_EXECUTABLE(test_link_tree test_link_tree.c)

ADD_EXECUTABLE(test_stack test_stack.c)

TARGET_LINK_LIBRARIES(test_stack stack)

TARGET_LINK_LIBRARIES(test_link_tree link_tree)


