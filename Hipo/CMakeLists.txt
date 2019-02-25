include_directories(${CMAKE_SOURCE_DIR}/Hipo ${ROOT_INCLUDE_DIR})

add_library(hipoLib writer.cpp wrapper.cpp utils.cpp text.cpp record.cpp reader.cpp node.cpp event.cpp dictionary.cpp data.cpp bank.cpp)
