INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/sort)
ADD_LIBRARY(bubble_sort SHARED bubble_sort.c ${PROJECT_SOURCE_DIR}/sort/template.c)
ADD_EXECUTABLE(test_bubble_sort test_bubble_sort.c)
TARGET_LINK_LIBRARIES(test_bubble_sort bubble_sort)