cmake_minimum_required(VERSION 3.0)
set(project_name fraction)
project(${project_name})
set(inc
   "include/array.hpp"
   "include/fraction.hpp"
)
set(src
   "src/fraction.cpp"
   "src/main.cpp"
)
add_executable(${project_name}
   ${inc}
   ${src}
)
target_include_directories(${project_name}
   PUBLIC "include"
)
