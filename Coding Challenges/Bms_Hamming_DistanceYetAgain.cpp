/*
 Hamming Distance Yet Again
DESCRIPTION
Hamming distance between 2 binary string of the same length is defined as the number of positions where the corresponding bits differ.
For example, distance(“101”,“111”) = 1 because only 1 index (i.e 2nd index) differ also distance(“110”,“000”) = 2, Now given binary strings, you can do as many swaps as you want on the second string.
What is the minimum hamming distance that can be achieved?

Input format
Two lines of input contain 2 binary string of length N each.

Output format
Print one integer, the corresponding minimum hamming distance achievable using swaps on the second string.

Constraints
1<= N <= 105

Sample Test Case :

Input
1010
0101

Output
0

Explanation
Using 2 swaps (1,2) and (3,4) on the second string we get 1010, thus distance(“1010”,“1010”) = 0, which is the minimum we can achieve.
 */

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    // Declare the variable
    string x, y;
    //  cin>>x;
    // cin>>y;
    int xone, xzero, yone, yzero;
    xone = xzero = yone = yzero = 0;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '0')
            xzero++;

        if (y[i] == '0')
            yzero++;

        if (x[i] == '1')
            xone++;

        if (x[i] == '1')
            yone++;

    }
    if (xzero == yzero and xone == yone)
        cout << (abs(xzero - yzero) + abs(xone - yone));

    return 0;
}