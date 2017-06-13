#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> ZeroMatrix(vector<vector<int> > &matrix) {
    unsigned long int r = matrix.size();
    unsigned long int c = matrix[0].size();
    if (r < 0) {
        return matrix;
    }
    if (c < 0) {
        return matrix;
    }
    vector<bool> rbool(r);
    vector<bool> cbool(c);
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (matrix[i][j] == 0) {
                rbool[i] = true;
                cbool[j] = true;

            }
        }

    }
    for (int i = 0; i < rbool.size(); ++i) {
        if (rbool[i]) {
            for (int j = 0; j < c; ++j) {
                matrix[i][j] = 0;
            }

        }
    }

    for (int i = 0; i < cbool.size(); ++i) {
        if (cbool[i]) {
            for (int j = 0; j < r; ++j) {
                matrix[j][i] = 0;
            }

        }
    }
    return matrix;


}


void printArray(vector<int> v) {
    cout << "[";
    for (int j = 0; j < v.size(); j++) {
        printf(" %02d", v[j]);
    }
    cout << "]" << endl;;
}

void printMatrix(vector<vector<int> > &vv) {
    for (int i = 0; i < vv.size(); i++) {
        printArray(vv[i]);
    }
    cout << endl;
}


vector<vector<int> > Create2dMatrix(int m, int n) {
    vector<vector<int> > vv;
    int strt = 1;
    for (int i = 0; i < m; ++i) {
        vector<int> v;
        for (int j = 0; j < n; ++j) {

            v.push_back(strt++);
        }
        vv.push_back(v);
    }
    return vv;
}


int main() {
    int n = 3, m = 3;
    vector<vector<int> > matrix = Create2dMatrix(n, m);
    matrix[0][1] = 0;
    matrix[0][2] = 0;
    printMatrix(matrix);
    vector<vector<int> > v = ZeroMatrix(matrix);
    printMatrix(v);
    return 0;
}