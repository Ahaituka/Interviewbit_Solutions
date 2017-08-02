/*
 Trailing Zeros in Factorial
Given an integer n, return the number of trailing zeroes in n!.

Note: Your solution should be in logarithmic time complexity.

Example :

n = 5
n! = 120
Number of trailing zeros = 1
So, return 1
 */

#include <iostream>

using namespace std;


int trailingZeroes(int A) {
    int zeroes = 0;
    for (int i = 5; i <= A; i *= 5) {
        zeroes += A / i;
        // A=A/i;
    }
    return zeroes;

}

int main() {
    cout << trailingZeroes(5);

}