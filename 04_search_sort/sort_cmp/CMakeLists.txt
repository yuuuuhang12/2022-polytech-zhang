cmake_minimum_required(VERSION 3.25)

project(sort)

add_executable(sort ex.cpp fill_random.cpp quick_sort.cpp sort.cpp swap.cpp)

find_package(OpenMP REQUIRED)

target_link_libraries(sort PRIVATE OpenMP::OpenMP_CXX)
