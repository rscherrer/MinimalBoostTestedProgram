set(BOOST_ROOT D:/boost_1_68_0)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIR})

add_executable(Program_test tests.cpp)

target_link_libraries(Program_test library)