cmake_minimum_required (VERSION 3.12)

# 项目信息
project (Main)

# 所有题目
aux_source_directory(Exercises Exercises_SRCS)

# 指定生成目标
add_executable(Main Exercise.cpp main.cpp ${Exercises_SRCS})