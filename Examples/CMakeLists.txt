include_directories(${CMAKE_SOURCE_DIR}/Hipo ${ROOT_INCLUDE_DIR})

add_executable(example example.cpp) 
target_link_libraries(example ${ROOT_LIBRARIES} hipoLib)
