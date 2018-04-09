SET(LIBRARY_OUTPUT_PATH  ${PROJECT_BINARY_DIR}/libs)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/tree)

ADD_LIBRARY(array_btree SHARED ${PROJECT_SOURCE_DIR}/tree/array_btree.c ${PROJECT_SOURCE_DIR}/tree/stack.c ../sort/template.h)

ADD_EXECUTABLE(test_array_btree test_array_btree.c)

TARGET_LINK_LIBRARIES(test_array_btree array_btree)

ADD_LIBRARY(link_btree SHARED ${PROJECT_SOURCE_DIR}/tree/link_btree.c ${PROJECT_SOURCE_DIR}/tree/queue.c
        ${PROJECT_SOURCE_DIR}/tree/stack.c)

ADD_EXECUTABLE(test_link_btree test_link_btree.c)

TARGET_LINK_LIBRARIES(test_link_btree link_btree)

# heap
ADD_SUBDIRECTORY(heap)
