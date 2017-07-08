#include <iostream>

using namespace std;


int strStr(const string &haystack, const string &needle) {
    if (needle[0] == '\0') return 0;
    for (int i = 0; haystack[i] != '\0'; i++) {
        bool isMatched = true;
        for (int j = 0; needle[j] != '\0'; j++) {
            // If remaining haystack length is less than needle's length,
            // we know needle is not present in haystack.
            if (haystack[i + j] == 0) return -1;
            if (haystack[i + j] != needle[j]) {
                isMatched = false;
                break;
            }
        }
        if (isMatched) return i; // Match found
    }
    return -1;
}
int main() {
    //  cout<<strStr("abcd"," ");
    string needle = " ";
    cout << needle[1];
    return 0;
}