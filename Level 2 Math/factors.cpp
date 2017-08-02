/*
 All Factors
Given a number N, find all factors of N.

Example:

N = 6
factors = {1, 2, 3, 6}
Make sure the returned array is sorted.
 */

#include <iostream>
#include <vector>
#include <math.h>


using namespace std;

vector<int> allFactors(int A) {
    vector<int> factor;
    for (int i = 1; i <= sqrt(A); i++) {
        if (A % i == 0)
            factor.push_back(i);
        if (i != sqrt(A))
            factor.push_back(A / i);

    }
    // factor.push_back(A);
    sort(factor.begin(), factor.end());
    return factor;
}

int main() {
    int n = 10;
    auto A = allFactors(n);


    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }

}
