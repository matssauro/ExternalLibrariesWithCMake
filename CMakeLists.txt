cmake_minimum_required(VERSION 3.10)

include_directories(include)


project(simple_test)
include(/home/matssauro/Libraries/vcpkg-master/scripts/buildsystems/vcpkg.cmake)
add_executable(simple_test test/simple_test test/simple_test2 sum.cpp)

enable_testing()
    
find_package(GTest REQUIRED)
target_link_libraries(simple_test PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

gtest_discover_tests(simple_test)

project(InstalledLibraryTest)

find_package(Crow REQUIRED)

include_directories(include)

add_executable(${PROJECT_NAME} crow.cpp sum.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC Crow::Crow)