SET(LIBRARY_OUTPUT_PATH  ${PROJECT_BINARY_DIR}/libs)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/linked_list)

ADD_LIBRARY(linked_list SHARED ${PROJECT_SOURCE_DIR}/linked_list/linked_list.c)

ADD_EXECUTABLE(test_linked_list test_linked_list.c)

TARGET_LINK_LIBRARIES(test_linked_list linked_list)