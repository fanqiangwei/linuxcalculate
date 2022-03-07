###################################
# Test 
###################################
cmake_minimum_required(VERSION 2.8)
project(CALCU)
add_definitions(-std=c++11) 
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

link_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/lib
)

set(CALCU_SRC
        main.cpp
        ./src/treenode.cpp
        ./src/treefunction.cpp
        ./src/matrixluckynum.cpp
        ./src/zeroevenodd.cpp
        ./src/foo.cpp
        ./src/h2o.cpp
        ./src/plus.cpp
        ./src/mylist.cpp
        ./src/addtwo.cpp
        ./src/longestlenthsubstr.cpp
        ./src/findMedia.cpp
        ./src/longestpalindrome.cpp
        ./src/convert.cpp
        ./src/reverse.cpp
        ./src/myatio.cpp
        ./src/ispalindrome.cpp
        ./src/ismatch.cpp
)

add_executable(${PROJECT_NAME} ${CALCU_SRC})

target_link_libraries(CALCU
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/libgmock.a  
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/libgmock_main.a  
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/libgtest.a  
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/libgtest_main.a
)

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -march=native -O3 -pthread" )



