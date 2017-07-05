/* Implement int sqrt(int x).

Compute and return the square root of x.

If x is not a perfect square, return floor(sqrt(x))

Example :

Input : 11
Output : 3
DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY*/
#include <iostream>

using namespace std;

//int sqrt(int x)
//{
//
// // int start = 1 ,end = A/2 ;
//
//    if (x == 0 || x == 1)
//        return x;
//
//    // Do Binary Search for floor(sqrt(x))
//    int start = 1, end = x/2, ans;
//    while (start <= end)
//    {
//        int mid = start + (end-start) / 2;
//
//        // If x is a perfect square
//        if (mid*mid == x)
//            return mid;
//
//        // Since we need floor, we update answer when mid*mid is
//        // smaller than x, and move closer to sqrt(x)
//        long y = mid*mid;
//        if (mid*mid < x)
//        {
//            start = mid + 1;
//            ans = mid;
//        }
//        else // If mid*mid is greater than x
//            end = mid - 1;
//    }
//    return ans;
//
//
//}



int sqrt(int A) {
    if (A == 0 | A == 1 | A == 2)
        return A;
    int start = 1, end = A / 2, ans = 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (mid == (A / mid))
            return mid;
        if (mid < A / mid) {
            start = mid + 1;
            ans = mid;
        } else
            end = mid - 1;

    }
    return ans;

}


int main() {
    cout << sqrt(2147483647);

}