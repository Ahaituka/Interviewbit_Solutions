
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;


vector<int> spiralMatrix(vector<vector<int> > &matrix) {
    int l = 0;
    int t = 0;
    int b = matrix.size() - 1;
    int r = matrix[0].size() - 1;
    vector<int> v;
    if (r <= 0) {
        v.push_back(matrix[0][0]);
        return v;
    };
    if (b <= 0) {
        for (int i = 0; i <= r; i++) {
            v.push_back(matrix[0][i]);
        }

        return v;
    }

    int dir = 0;
    while (t <= b && l <= r) {
        if (dir == 0) {
            for (int i = l; i <= r; ++i) {

                v.push_back(matrix[t][i]);


            }
            t++;
            dir = 1;

        }
        if (dir == 1) {
            for (int i = t; i <= b; ++i) {
                v.push_back(matrix[i][r]);
            }
            r--;
            dir = 2;

        }
        if (dir == 2) {
            for (int i = r; i >= l; --i) {
                v.push_back(matrix[b][i]);


            }
            b--;
            dir = 3;

        }
        if (dir == 3) {
            for (int i = b; i >= t; i--) {
                v.push_back(matrix[i][l]);
            }
            l++;
            dir = 0;
        }
    }
    return v;
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

vector<vector<int> > createMatrix(int n, int m) {
    vector<vector<int> > vv;
    int strt = 1;
    for (int i = 0; i < m; i++) {
        vector<int> v;
        for (int j = 0; j < n; j++) {
            v.push_back(strt++);
        }
        vv.push_back(v);
    }

    return vv;
}


vector<vector<int> > Create2d(int m, int n) {
    vector<vector<int> > vv;
    for (int i = 0; i < m; ++i) {
        vector<int> v;
        for (int j = 0; j < n; ++j) {

            v.push_back(j);
        }
        vv.push_back(v);
    }
    return vv;
}

int main() {
    int n = 5, m = 4;

    vector<vector<int> > matrix = createMatrix(n, m);
    printMatrix(matrix);
    vector<int> v = spiralMatrix(matrix);
    printArray(v);
    return 0;
}