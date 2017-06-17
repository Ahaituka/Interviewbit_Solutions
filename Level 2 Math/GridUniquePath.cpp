/*
 A robot is located at the top-left corner of an A x B grid (marked ‘Start’ in the diagram below).



The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked ‘Finish’ in the diagram below).

How many possible unique paths are there?

Note: A and B will be such that the resulting answer fits in a 32 bit signed integer.

Example :

Input : A = 2, B = 2
Output : 2

2 possible routes : (0, 0) -> (0, 1) -> (1, 1)
              OR  : (0, 0) -> (1, 0) -> (1, 1)
 * */


#include <iostream>
#include <cstring>

using  namespace std;

unsigned ncr(unsigned n, unsigned k)
{
    if (k > n) return 0;
    if (k * 2 > n)
        return k = n-k;
    if (k == 0) return 1;
    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int nCrpascal(int n, int r)
{
    int C[r+1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j-1]);
    }
    return C[r];
}

int main()
{
int m =3,n=3;
  cout<< ncr(m+n-2, n-1);

}


