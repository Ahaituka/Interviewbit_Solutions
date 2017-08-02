/*
 Prime Numbers
Given a number N, find all prime numbers upto N ( N included ).

Example:

if N = 7,

all primes till 7 = {2, 3, 5, 7}

Make sure the returned array is sorted.
 */

//Easy sieve of Eratosthenes problem

#include <iostream>
#include <vector>

using namespace std;


vector<int> sieve(int A) {
    bool prime[A];
    for (int i = 0; i < A; i++) {
        prime[i] = true;

    }

    for (int i = 2; i < A; i++) {
        for (int j = i; j < A;) {
            // continue;

            j += i;
            if (j < A)
                prime[j] = false;
        }
    }
    vector<int> T;
    for (int i = 2; i < A; i++) {
        if (prime[i]) {

            T.push_back(i);
        }
    }
    return T;
}

int main() {

    int A = 10000;
    auto x = sieve(A);
    for (int i = 0; i < x.size(); ++i) {
        cout << x[i] << " ";
    }

}