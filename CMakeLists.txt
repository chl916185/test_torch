cmake_minimum_required(VERSION 3.5)
project(test_torch)

set(CMAKE_CXX_STANDARD 11)
set(Torch_DIR /home/chl/work_files/libtorch/share/cmake/Torch)
set(OpenCV_DIR /home/chl/soft_dl/opencv-3.4.1/build)

message(STATUS "    libraries: ${TORCH_LIBRARIES}")
find_package(Torch REQUIRED)
find_package(OpenCV REQUIRED)
add_executable(test_torch main.cpp)
target_link_libraries(test_torch ${OpenCV_LIBS} ${TORCH_LIBRARIES})