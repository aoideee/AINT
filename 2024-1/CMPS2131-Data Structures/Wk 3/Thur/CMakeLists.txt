cmake_minimum_required(VERSION 3.29)
project(MyProject)

set(CMAKE_CXX_STANDARD 14)

# Add the main executable
add_executable(MyProject
        main.cpp
        ../Thur/main.cpp
        main.cpp
)

# Include directories if needed
# include_directories(${CMAKE_SOURCE_DIR}/include)

# Link libraries if needed
# target_link_libraries(MyProject <library_name>)