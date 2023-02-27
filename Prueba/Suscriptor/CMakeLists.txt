# CMake Version
cmake_minimum_required(VERSION 3.0.2)

# Name of this package
project(agitr)

# Find the catkin build system, and any other packages on which we depend
find_package(catkin REQUIRED COMPONENTS roscpp geometry_msgs)

# Declare our catkin package
catkin_package()

# Specify locations of header files
include_directories(include ${catkin_INCLUDE_DIRS})

# Declare the executable, along with its source files. If there are multiple executables, use multiple copies of this line
add_executable(pubvel pubvel.cpp)

# Specify libraries against which to link. Again, this line should be copied for each distinct executable in the package
target_link_libraries(pubvel ${catkin_LIBRARIES})
