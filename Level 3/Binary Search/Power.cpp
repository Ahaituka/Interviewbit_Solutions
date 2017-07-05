/*
 * Implement pow(x, n) % d.

In other words, given x, n and d,

find (xn % d)

Note that remainders on division cannot be negative.
In other words, make sure the answer you return is non negative.

Input : x = 2, n = 3, d = 3
Output : 2

2^3 % 3 = 8 % 3 = 2.
*/
#include <iostream>

using namespace std;

int pow(int x, int y, int p) {
    if (x == 0)
        return 0;
    long long ans = 1, base = x;
    while (y > 0) {
        if (y % 2 == 0) {
            base = (base * base) % p;
            y /= 2;
        } else {
            ans = (ans * base) % p;
            y--;
        }
    }
    if (ans < 0)
        return (ans + p) % p;
    else
        return ans;
}


int main() {
    cout << pow(15, 8, 9);
}