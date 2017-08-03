/*
 Prime Sum
Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s conjecture

Example:


Input : 4
Output: 2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b,
and [c,d] is another solution with c <= d, then

[a, b] < [c, d]

If a < c OR a==c AND b < d.
 */

//Easy solution using Sieve of Erastothenes

#include <iostream>
#include <vector>

using namespace std;


//int isPrime(int A)
//{
//    if (A == 0 or A == 1)
//        return 0;
//
//    for (int i = 2; i <= sqrt(A); i++) {
//        if (A % i == 0)
//            return 0;
//    }
//    return 1;
//}
//

vector<int> primesum(int A) {
    vector<bool> prime(A);
    for (int i = 0; i < A; i++) {
        prime[i] = true;
    }

    for (int i = 2; i < A; i++) {
        for (int j = i; j < A;) {
            j += i;
            if (j < A) {
                prime[j] = false;
            }
        }


    }


    vector<int> sum, primesum;
    for (int k = 2; k < prime.size(); ++k) {
        if (prime[k])
            sum.push_back(k);

    }
//    bool  flag=false;
    for (int i = 2; i < sum.size(); i++) {
//        for(int j =0;j<sum.size();j++)
        // int j=A-sum[i];
//        {
        if (prime[i] and prime[A - i]) {
            primesum.push_back(i);
            primesum.push_back(A - i);
            //  flag=true;
            break;
        }

        //}
//        if(flag)
//            break;

    }

    return primesum;


}

int main() {


    auto t = primesum(1048574);
    for (int i = 0; i < t.size(); ++i) {
        cout << t[i] << " ";

    }


}