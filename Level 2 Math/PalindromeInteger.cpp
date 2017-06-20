
/*  Palindrome IntegerBookmark Suggest Edit
Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

Example :

Input : 12121
Output : True

Input : 123
Output : False */


#include <iostream>

using  namespace std;


bool isPalindrome(int A) {
     int Y=A;
    int rev = 0;
    while(A>0)
    {
        if (rev > (INT_MAX / 10) || (rev == (INT_MAX / 10) && (A%10) > (INT_MAX % 10))) //overflow condition
            return false;
        rev=rev*10+(A%10);
        A=A/10;

    }
    if(rev==Y)
        return true;
    else
        return false;
}

int main()
{
    cout<<isPalindrome(1000000003);
}