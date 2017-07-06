/*
 Given an input string, reverse the string word by word.

Example:

Given s = "the sky is blue",

return "blue is sky the".

A sequence of non-space characters constitutes a word.
Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.
If there are multiple spaces between words, reduce them to a single space in the reversed string.
  */

#include <iostream>

using namespace std;

void reverseWords(string &s) {

    int y = s.length();
    string ans = "";
    string cur = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            if (cur.length() == 0) {
                continue;
            }
            // found a word
            reverse(cur.begin(), cur.end());
            if (ans.length() > 0) {
                ans.push_back(' ');
            }
            ans += cur;
            cur = "";
            continue;
        }
        cur.push_back(s[i]);
    }
    if (cur.length() > 0) {
        reverse(cur.begin(), cur.end());
        if (ans.length() > 0) {
            ans.push_back(' ');
        }
        ans += cur;
    }
    s = ans;
    return;
}

int main() {

    string s = "The sky is blue ";
    reverseWords(s);
    cout << s;


}
