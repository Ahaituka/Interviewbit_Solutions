/* 
 Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB
 */



#include <iostream>
#include <algorithm>

using namespace std;

string result(int  n) {
    string x;
    while (n > 0)
    {
        x.push_back(char((n) % 26 + 64));
        n = n / 26;
    }
    reverse(x.begin(), x.end());
    return x;
}
 int main()
{
    string s ="AB";
    cout<<result(28);

}