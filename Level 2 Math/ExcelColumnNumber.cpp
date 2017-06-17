/*
 Given a column title as appears in an Excel sheet, return its corresponding column number.
Example:
    A -> 1

    B -> 2

    C -> 3

    ...

    Z -> 26

    AA -> 27

    AB -> 28
    */


#include <iostream>

using namespace std;

int result(string s)
{

    int result =0;

    for (const auto &c :s)
    {

        result = result*26 +(c -'A'+1) ;


    }

    return  result ;



}


int main()
{
   string s ="AB";
    int x =result(s);
    cout<<x;

}