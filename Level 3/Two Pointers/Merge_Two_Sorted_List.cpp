//void merge(int A[], int m, int B[], int n) {
//    int temp[m+n+2];
//    int indexA = 0, indexB = 0;
//    for (int i = 0; i < m+n; i++){
//        if (indexB == n || (indexA < m && A[indexA] < B[indexB])) {
//            temp[i] = A[indexA];
//            indexA++;
//        } else {
//            temp[i] = B[indexB];
//            indexB++;
//        }
//    }
//    for (int i = 0; i < m+n; i++) {
//        A[i] = temp[i];
//    }
//    return;
//}

#include <iostream>
#include <vector>


using namespace std;


void merge(vector<int> &A, vector<int> &B) {
    int m = A.size(), n = B.size();
    vector<int> x;

    int indexA = 0;
    int indexB = 0;
    for (int i = 0; i < m + n; ++i) {
        if ((A[indexA] < B[indexB] && indexA < m)) {
            x.push_back(A[indexA]);
            indexA++;
        } else {
            x.push_back(B[indexB]);
            if (indexB < n - 1)
                indexB++;
            else if (indexA != m) {
                x.push_back(A[indexA]);
                ++i;
            }
        }

    }
    A.erase(A.begin(), A.end());

    for (int j = 0; j < x.size(); ++j) {
        A.push_back(x[j]);
    }
}

int main() {
    int m = 3, n = 2;
//    int *A = new int[m+n];
//    int *B = new int[m];
    vector<int> A, B;
    A = {-4, -3, 0};
    B = {2};

    merge(A, B);
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i];

    }

}