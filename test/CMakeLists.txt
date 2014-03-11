#make surce the compiler can find included libary
include_directories(../src/functionalCPlusPlus)

#make sure the compiler can find the libary once it is built
link_directories(../src/functionalCPlusPlus)

add_executable(test test.cpp)

target_link_libraries(test functionalCPlusPlus)