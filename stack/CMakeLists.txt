SET(LIBRARY_OUTPUT_PATH  ${PROJECT_BINARY_DIR}/libs)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/stack)

ADD_LIBRARY(seq_stack SHARED ${PROJECT_SOURCE_DIR}/stack/seq_stack.c)

ADD_LIBRARY(link_stack SHARED ${PROJECT_SOURCE_DIR}/stack/link_stack.c)

ADD_EXECUTABLE(test_seq_stack test_seq_stack.c)

ADD_EXECUTABLE(test_link_stack test_link_stack.c)

TARGET_LINK_LIBRARIES(test_seq_stack seq_stack)

TARGET_LINK_LIBRARIES(test_link_stack link_stack)
