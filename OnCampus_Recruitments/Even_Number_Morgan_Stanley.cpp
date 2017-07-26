/*
 Morgan Stanley Interview Question
 Even Number
 Given an odd number n  find the maximum even number  of n  with same set of digits.You are only allowed one swap of digits.
 If not possible return the number itslef

 Ex:
 121 ->112
 111->111
 1243->1324

*/

#include <iostream>

using namespace std;

#define Rep(i, n) for(int i=0;i<n;i++)


string convertEven(string &s) {
    // int flag=1;

    //to check for already even
    if (s[s.size() - 1] % 2 == 0)
        return s;
//    for(auto c:s)
//    {
//        int x = c-48;
//        if(x%2==0)
//        {
//            flag=1;
//            break;
//        }
//
//    }

    // if(flag)
    // {
    Rep(j, s.size()) {
        int x = s[j] - 48;
        if (x % 2 == 0)
            if ((s[s.size() - 1] - 48) > x and j != s.size() - 2) {
                swap(s[j], s[s.size() - 1]);
            }
        if (j == s.size() - 2) {
            swap(s[j], s[s.size() - 1]);
        }
    }
    return s;
    // }
    // else
    //  return s;

}

int main() {
    string s = "1243";
    cout << convertEven(s);
    return 0;
}

