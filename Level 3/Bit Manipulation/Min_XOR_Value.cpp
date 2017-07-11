#include <stdio.h>

//
//using  namespace std ;
//
////int findMinXor(vector<int> &A)
////{
////sort(A.begin(),A.end());
////  int minxor = A[0] ^ A[1] ;
////    for (int i = 2; i < A.size(); ++i)
////    {
////        minxor = min(minxor,(A[i]^A[i-1]));
////
////    }
////    return minxor ;
////
////}
//#include <math.h>
//int bit(unsigned int A)
//{int x = 0,y=0;
//    for (int i = 0; i < 32; ++i)
//    {
//        x=pow(2,i);
//        y+=x&A;
//
//    }
//    return y;
//
//}
//int main()
//{
//
//    vector<int> v ={9, 5, 3};
//  cout<<bit(6);
//
//
//
//
//
//
unsigned int swapBits(unsigned int x, unsigned int i, unsigned int j) {
    unsigned int lo = ((x >> i) & 1);
    unsigned int hi = ((x >> j) & 1);
    if (lo ^ hi) {
        unsigned int t = (1U << i), m = (1U << j), o = t | m;
        x ^= (t | m);

    }
    return x;
}

unsigned int reverse(unsigned int x) {
    unsigned int n = sizeof(x) * 8;
    for (unsigned int i = 0; i < n / 2; i++) {
        x = swapBits(x, i, n - i - 1);
    }
    return x;
}

int main() {
    unsigned int x = 1;
    printf("%u", reverse(x));
    getchar();
}