/*
Greatest Common Divisor

Given 2 non negative integers m and n, find gcd(m, n)

GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both m and n fit in a 32 bit signed integer.

Example

m : 6
n : 9

GCD(m, n) : 3
 NOTE : DO NOT USE LIBRARY FUNCTIONS
*/

//int  gcd(int x, int y) {
//    // Do not write main() function.
//    // Do not read input, instead use the arguments to the function.
//    // Do not print the output, instead return values as specified
//    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//
//    if (x == 0 && y == 0)
//        return 0;
//
//    if(x == 0)
//        return y;
//    if(y==0)
//        return x;
//    if (x > y)
//        swap(x, y);
//    if (y % x == 0)
//        return x;
//    else
//        return gcd(x, y%x);
//}

#include <iostream>

using namespace std;


int gcd(int x, int y) {
    if (x == 0)
        return y;

    if (y == 0)
        return x;
    if (x > y)
        swap(x, y);
    return gcd(x, y % x);

}

int main() {


    cout << gcd(5, 10);
}


