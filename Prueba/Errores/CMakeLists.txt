cmake_minimum_required(VERSION 3.0.2)
project(agitr)

find_package(catkin REQUIRED COMPONENTS roscpp)
catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(count count.cpp)
target_link_libraries(count ${catkin_LIBRARIES})
