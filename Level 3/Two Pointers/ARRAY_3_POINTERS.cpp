/*
 You are given 3 arrays A, B and C. All 3 of the arrays are sorted.

Find i, j, k such that :
max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i])) is minimized.
Return the minimum max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i]))

**abs(x) is absolute value of x and is implemented in the following manner : **

      if (x < 0) return -x;
      else return x;
Example :

Input :
        A : [1, 4, 10]
        B : [2, 15, 20]
        C : [10, 12]

Output : 5
         With 10 from A, 15 from B and 10 from C.
 */

#include <iostream>
#include <vector>

using namespace std;

int minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int maxvalue = 0, minvalue = 0, diff = INT_MAX;
    for (int i = 0, j = 0, k = 0; i < A.size() && j < B.size() && k < C.size();) {
        int d = A[i], l = B[j], t = C[k];
        maxvalue = max(A[i], max(B[j], C[k]));
        minvalue = min(A[i], min(B[j], C[k]));
        diff = min(diff, maxvalue - minvalue);
        if (diff == 0)
            break;
        if (A[i] == minvalue)
            i++;
        else if (B[j] == minvalue)
            j++;
        else
            k++;


    }
    return diff;

}

int main() {
    vector<int> A = {1, 4, 10},
            B = {2, 15, 20},
            C = {10, 12};

    cout << minimize(A, B, C);

}