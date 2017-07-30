/*
 Given an array of integers, return the highest product possible by multiplying 3 numbers from the array

Input:

array of integers e.g {1, 2, 3}
 NOTE: Solution will fit in a 32-bit signed integer
Example:

[0, -1, 3, 100, 70, 50]

=> 70*50*100 = 350000
 *  /

#include <iostream>
#include <vector>


using namespace std;

#define Rep(i,n) for(int i=0;i<n;i++)


int maxp3(vector<int> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end());
    return max((A[0]*A[1]*A[A.size()-1]),(A[A.size()-3]*A[A.size()-2]*A[A.size()-1]));

}


int main()
{
    vector<int> A = {0, -1, 3, 100, 70, 50};
    cout << maxp3(A);

}
