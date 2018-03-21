SET(LIBRARY_OUTPUT_PATH  ${PROJECT_BINARY_DIR}/libs)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/stack)

ADD_LIBRARY(seq_stack SHARED ${PROJECT_SOURCE_DIR}/stack/seq_stack.c)

ADD_EXECUTABLE(test_seq_stack test_seq_stack.c)

TARGET_LINK_LIBRARIES(test_seq_stack seq_stack)