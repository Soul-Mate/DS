# heap
ADD_LIBRARY(heap SHARED heap.c)

ADD_EXECUTABLE(test_heap test_heap.c)

TARGET_LINK_LIBRARIES(test_heap heap)
