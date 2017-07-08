/*
 Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem
 */
#include <iostream>

using namespace std;


int isPalindrome(string s) {
    int i = 0, j = (int) s.size() - 1;
    while (i < j) {
        while (i < j && !isalnum(s[i])) i++;
        while (i < j && !isalnum(s[j])) j--;
        if (tolower(s[i]) != tolower(s[j]))
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {

    cout << isPalindrome("HOla");


}