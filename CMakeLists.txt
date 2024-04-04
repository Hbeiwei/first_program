cmake_minimum_required(VERSION 3.26)
project(first_project)

# c++标准
set(CMAKE_CXX_STANDARD 17)

# 添加头文件
include_directories(include)

#源文件别名 - 无法递归
aux_source_directory(./src DIR_SRCS)

# 可执行文件
add_executable(first_project ${DIR_SRCS})
