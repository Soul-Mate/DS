INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/sort)
ADD_LIBRARY(shell_sort SHARED shell_sort.c ${PROJECT_SOURCE_DIR}/sort/template.c)
ADD_EXECUTABLE(test_shell_sort test_shell_sort.c)
TARGET_LINK_LIBRARIES(test_shell_sort shell_sort)