/*
 A message containing letters from A-Z is being encoded to numbers using the following mapping:

'A' -> 1
'B' -> 2
...
'Z' -> 26
Given an encoded message containing digits, determine the total number of ways to decode it.

Example :

Given encoded message "12", it could be decoded as "AB" (1 2) or "L" (12).

The number of ways decoding "12" is 2.
 */


#include <iostream>

using namespace std;


int numDecodeings(string A) {
    if ((A.size() == 1 && A[0] == '0') or A[0] == '0')
        return 0;

    int count = 1;
    for (int i = 0; i < A.size() - 1; ++i) {
        int x = ((int) A[i] - 48) * 10 + (int) A[i + 1] - 48;
        if (x / 26 == 0 || x == 26)
            count++;
        if (x % 10 == 0)
            if (x > 26)
                return 0;
            else
                count--;
    }
    return count;

}


int main() {


    cout << numDecodeings("2611055971756562");

}