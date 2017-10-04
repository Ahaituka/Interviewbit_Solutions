#include <iostream>
#include <vector>

using namespace std;

#define Rep(i, n) for (int i=1;i<n;i++)


int lis(vector<int> A) {

    int count = 0;
    int x = A[0], sum = 0;
    Rep(i, A.size()) {
        x = A[0];
        if (A[i] > x) {
            sum = 1;
            x = A[i];
            for (int j = i; j < A.size(); ++j) {
                if ((A[j] > x)) {
                    x = A[j];
                    sum++;
                }

            }
        }
        count = max(count, sum);


    }

    return count;

}


int main() {
    vector<int> A = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};

    cout << lis(A);


}