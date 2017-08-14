/*
PRETTYPRINT
Print concentric rectangular pattern in a 2d matrix.
Let us show you some examples to clarify what we mean.

Example 1:

Input: A = 4.
Output:

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
Example 2:

Input: A = 3.
Output:

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
The outermost rectangle is formed by A, then the next outermost is formed by A-1 and so on.

You will be given A as an argument to the function you need to implement, and you need to return a 2D array.
 */

#include <iostream>
#include <vector>

using namespace std;

//Solution in O(n^2) time

vector<vector<int> > prettyPrint(int n) {
    int size, last = 0, l;
    size = n + (n - 1);
    vector<vector<int> > A(size, vector<int>(size));
    for (int i = 0; i <= size / 2; ++i) {
        last = 0;

        for (int j = 0; j <= size / 2; ++j, last++) {   //first row will always be fiiled with n
            if (i == 0) {
                A[i][j] = n;

                continue;
            }
                //first column will always be fiiled with n
            else if (j == 0) {
                A[i][j] = n;
                continue;
            }
                //n n-1 n-1 n-1 n-1,,,
            else if (i > j) {
                A[i][j] = n - last;
            }
                //mid value will always be n-i
            else if (j == size / 2) {
                A[i][j] = n - i;
            }
                //otherwise n n-1 n-2
            else {
                A[i][j] = n - i;
            }
        }

    }
    //now copy the upperlefthalf to upperrighthalf(columnwise)
    for (int k = 0; k <= size / 2; ++k) {
        l = (size / 2) - 1;

        for (int i = size / 2 + 1; i < size; ++i) {

            A[k][i] = A[k][l--];

        }

    }
    //now copy the upperows to the bottomrows
    l = size / 2 - 1;
    for (int k = size / 2 + 1; k < size; ++k) {
        A[k] = A[l--];

    }
    return A;
}


void printArray(vector<int> v) {
    cout << "[";
    for (int j = 0; j < v.size(); j++) {
        cout << v[j] << " ";
    }
    cout << "]" << endl;;
}

void printMatrix(vector<vector<int> > &vv) {
    for (int i = 0; i < vv.size(); i++) {
        printArray(vv[i]);
    }
    cout << endl;
}


int main() {
    vector<vector<int> > matrix = prettyPrint(7);
    // vector<int> A(20);
    //fill(A.begin(),A.end(),0);
    // printArray(A);

//    vector<int> a ={1,2,3};
//    vector<int> b;
//b=a;    printArray(b);
    printMatrix(matrix);
    return 0;
}