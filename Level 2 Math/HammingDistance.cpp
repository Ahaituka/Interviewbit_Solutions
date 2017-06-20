/*Sum of pairwise Hamming Distance

Hamming distance between two non-negative integers is defined as the number of positions at which the corresponding bits are different.

For example,

HammingDistance(2, 7) = 2, as only the first and the third bit differs in the binary representation of 2 (010) and 7 (111).

Given an array of N non-negative integers, find the sum of hamming distances of all pairs of integers in the array.
Return the answer modulo 1000000007.

Example

Let f(x, y) be the hamming distance defined above.

A=[2, 4, 6]

We return,
f(2, 2) + f(2, 4) + f(2, 6) +
f(4, 2) + f(4, 4) + f(4, 6) +
f(6, 2) + f(6, 4) + f(6, 6) =

0 + 2 + 1
2 + 0 + 1
1 + 1 + 0 = 8
 *
 *
 */

//C++ solution using vectors

#include <iostream>
#include <vector>
using  namespace std;




int HammingDistance(vector<int> A)
{
    long long  sum=0;
    for (int bit = 0; bit < *max_element(A.begin(),A.end()); ++bit)
    {
        int zero=0 , one=0;
        for (int i = 0; i <A.size(); ++i)
        {

            if(A[i] &  (1<<bit) )
                one++;
            else
                zero++;
        }
        auto y = 2LL;
        sum+=(2*one*zero) % 1000000007;

    }
    return  sum;
}

int main()
{
    vector<int> A ={5,4,6};
    cout<<HammingDistance(A) ;
}

