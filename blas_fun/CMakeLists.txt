cmake_minimum_required(VERSION 3.1)
project(blas_fun)
set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} openblas)
