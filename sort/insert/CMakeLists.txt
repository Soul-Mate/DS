INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/sort)
ADD_LIBRARY(insert_sort SHARED shell_sort.c ${PROJECT_SOURCE_DIR}/sort/template.c)
ADD_EXECUTABLE(test_insert_sort test_insert_sort.c)
TARGET_LINK_LIBRARIES(test_insert_sort insert_sort)