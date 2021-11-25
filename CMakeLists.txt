cmake_minimum_required(VERSION 3.0.0)
project(boost_thread CXX)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(Boost_VERBOSE ON)
set(Boost_USE_STATIC_LIBS ON)
#set(Boost_NO_BOOST_CMAKE TRUE)   # only boost version before 1.70
find_package(Boost 1.73 REQUIRED system)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(boost_thread main.cpp)

target_link_libraries(boost_thread Boost::system)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
