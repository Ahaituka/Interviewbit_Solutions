cmake_minimum_required(VERSION 3.7)
project(InterviewBit)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(InterviewBit ${SOURCE_FILES})
add_executable(Coverpoint "Level 2 Array/Coverpoint.cpp")
add_executable(GCD "Level 2 Math/GCD.cpp")

add_executable(ExcelColumnNumber "Level 2 Math/ExcelColumnNumber.cpp")

add_executable(ExcelColumnTitle "Level 2 Math/ExcelColumnTitle.cpp")
add_executable(GridUniquePath "Level 2 Math/GridUniquePath.cpp")
add_executable(PalindromeInteger "Level 2 Math/PalindromeInteger.cpp")
add_executable(RotatedArray "Level 3/Binary Search/RotatedArray.cpp")


add_executable(Search "Level 3/Binary Search/Search.cpp")