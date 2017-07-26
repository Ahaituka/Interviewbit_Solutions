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
add_executable(SquareRoot "Level 3/Binary Search/SquareRoot.cpp")
add_executable(index_Search_For_A_Range "Level 3/Binary Search/index_Search_For_A_Range.cpp")
add_executable(Power "Level 3/Binary Search/Power.cpp")
add_executable(ReverseTheString "Level 3/Strings/ReverseTheString.cpp")


add_executable(Roman_To_Integer "Level 3/Strings/Roman_To_Integer.cpp")
add_executable(Integer_to_roman "Level 3/Strings/Integer_to_roman.cpp")
add_executable(main main.cpp)
add_executable(Palindrome_String "Level 3/Strings/Palindrome_String.cpp")
add_executable(LongestPalindromicSequence "Level 3/Strings/LongestPalindromicSequence.cpp")

add_executable(Atoi "Level 3/Strings/Atoi.cpp")
add_executable(SingleNumber "Level 3/Bit Manipulation/SingleNumber.cpp")

add_executable(Single_Number_II "Level 3/Bit Manipulation/Single_Number_II.cpp")
add_executable(Min_XOR_Value "Level 3/Bit Manipulation/Min_XOR_Value.cpp")
add_executable(Remove_Duplicates "Level 3/Two Pointers/Remove_Duplicates.cpp")
add_executable(Remove_Duplicates_From_Array_2 "Level 3/Two Pointers/Remove_Duplicates_From_Array_2.cpp")
add_executable(Merge_Two_Sorted_List "Level 3/Two Pointers/Merge_Two_Sorted_List.cpp")
add_executable(ARRAY_3_POINTERS "Level 3/Two Pointers/ARRAY_3_POINTERS.cpp")
add_executable(3_sum "Level 3/Two Pointers/3_sum.cpp")
add_executable(PalindromeList "Level 4/Linked List/PalindromeList.cpp")
add_executable(Add_Two_Numbers_As_Lists "Level 4/Linked List/Add_Two_Numbers_As_Lists.cpp")
add_executable(Reverse_Link_list_II "Level 4/Linked List/Reverse_Link_list_II.cpp")
add_executable(Points_on_the_straight_line "Level 5/Points_on_the_straight_line.cpp")
add_executable(Stairs "Level 7/Dynamic Programming/Stairs.cpp")
add_executable(Jump_Game_Array "Level 7/Dynamic Programming/Jump_Game_Array.cpp")
add_executable(Best_Time_To_Buy_And_Sell_Stocks_II "Level 7/Dynamic Programming/Best_Time_To_Buy_And_Sell_Stocks_II.cpp")
add_executable(Ways_to_decode "Level 7/Dynamic Programming/Ways_to_decode.cpp")
add_executable(Edit_Distance "Level 7/Dynamic Programming/Edit_Distance.cpp")
add_executable(Sample OnCampus_Recruitments/ProfitSort.cpp)
add_executable(ProfitSort OnCampus_Recruitments/ProfitSort.cpp)
add_executable(ValidBst "Level 6/Trees/ValidBst.cpp")
add_executable(Increasing_Common_Subsequence "Level 7/Dynamic Programming/Increasing_Common_Subsequence.cpp")

add_executable(Even_Number_Morgan_Stanley OnCampus_Recruitments/Even_Number_Morgan_Stanley.cpp)