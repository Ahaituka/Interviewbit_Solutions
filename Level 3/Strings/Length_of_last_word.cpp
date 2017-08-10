/*Length of Last Word
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

        Given s = "Hello World",

return 5 as length("World") = 5.

Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.*/

#include <iostream>

using namespace std;

int lengthOfLastWord(const string &s) {

    string A = s;
    A.erase(A.find_last_not_of(" \n\r\t") + 1);
    int count = 0;
    reverse(A.begin(), A.end());
    for (auto c : A) {
        if (c == ' ')
            break;
        else
            count++;

    }
    return count;
}

int main() {
    string s = "Hello Wolrd   ";
    cout << lengthOfLastWord(s);
}