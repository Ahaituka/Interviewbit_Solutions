/*
 Verify Prime
Given a number N, verify if N is prime or not.

Return 1 if N is prime, else return 0.

Example :

Input : 7
Output : True
Problem Approach:

Complete code in the hint.


 */

#include <iostream>
#include <math.h>


using namespace std;

int isPrime(int A) {
    if (A == 0 or A == 1)
        return 0;

    for (int i = 2; i <= sqrt(A); i++) {
        if (A % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    cout << isPrime(13);
}


