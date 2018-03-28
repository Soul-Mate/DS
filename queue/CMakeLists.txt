SET(LIBRARY_OUTPUT_PATH  ${PROJECT_BINARY_DIR}/libs)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/stack)

ADD_LIBRARY(seq_queue SHARED ${PROJECT_SOURCE_DIR}/queue/seq_queue.c)

ADD_LIBRARY(linke_queue SHARED ${PROJECT_SOURCE_DIR}/queue/linked_queue.c)

ADD_EXECUTABLE(test_seq_queue test_seq_queue.c)

ADD_EXECUTABLE(test_linked_queue test_linked_queue.c)

TARGET_LINK_LIBRARIES(test_seq_queue seq_queue)

TARGET_LINK_LIBRARIES(test_linked_queue linke_queue)


