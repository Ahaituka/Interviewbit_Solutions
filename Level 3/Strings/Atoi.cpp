/*
 Implement atoi to convert a string to an integer.

Example :

Input : "9 2704"
Output : 9
Note: There might be multiple corner cases here. Clarify all your doubts using “See Expected Output”.
 */

#include <iostream>

using namespace std;

int atoi(string s) {
    int sign, base, i = 0;
    while (s[i] == ' ') i++;
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i] == '-') ? -1 : 1;
    }
    while (s[i] >= '0' and s[i] <= '9') {
        if (base > INT_MAX / 10)
            return (sign == -1) ? INT_MIN : INT_MAX;
        base = base * 10 + (s[i++] - '0');
    }

    return base * sign;
}

int main() {

    cout << atoi("-7 U 0 T7165 0128862 089 39 5");

}