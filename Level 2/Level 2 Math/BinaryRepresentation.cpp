/*
Binary Representation

Given a number N >= 0, find its representation in binary.
Example:
if N = 6,binary form = 110
*/



#include <iostream>

using namespace std;

string Binary(int n) {
    string x;
    while (n > 0) {
        x.push_back((char) ('0' + n % 2));
        n = n / 2;
    }
    reverse(x.begin(), x.end());
    return x;

}

int main() {
    cout << Binary(20);
}

