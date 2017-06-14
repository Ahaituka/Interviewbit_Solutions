/*
 You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

You need to do this in place.

Note that if you end up using an additional array, you will only receive partial score.

Example:

If the array is

[
    [1, 2],
    [3, 4]
]
Then the rotated array becomes:

[
    [3, 1],
    [4, 2]
]
 */
//
//Two methods  to solve
//
//1.by transposing  matrix then flipping the row elements for clockwise.(flip colum for anticlockwise)
//2.by swapping four group of elements (left->top->right->bottom)


// A C++ program solution to the above problem using vector

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void rotateclock(vector<vector<int> > &matrix) {

    unsigned long len = matrix.size();
    for (int i = 0; i < len / 2; i++) {
        unsigned long x = len - i - 1;
        unsigned long y = x;
        for (int j = i; j < x; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[y][i];
            matrix[y][i] = matrix[x][y];
            matrix[x][y] = matrix[j][x];
            matrix[j][x] = tmp;
            y--;
        }
    }
}


void rotatecounter(vector<vector<int> > &matrix) {
    int len = matrix.size();
    for (int i = 0; i < len / 2; i++) {
        int x = len - i - 1;
        int y = x;
        for (int j = i; j < x; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[j][x];
            matrix[i][x] = matrix[x][y];
            matrix[x][y] = matrix[y][i];
            matrix[y][i] = tmp;
            y--;

        }
    }
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
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        vector<int> v;
        for (int j = 0; j < m; j++) {
            v.push_back(cnt++);
        }
        vv.push_back(v);
    }
    return vv;
}


void Transpose(vector<vector<int>> &vect) {
    for (int i = 0; i < vect.size(); i++) {
        for (int j = i; j < vect[i].size(); j++)
            swap(vect[i][j], vect[j][i]);
    }


}


void flip_columns(vector<vector<int>> &v) {
    unsigned long C = v[0].size();
    for (int i = 0; i < C; i++)
        for (unsigned long j = 0, k = C - 1; j < k; j++, k--)
            swap(v[j][i], v[k][i]);

}

void flip_rows(vector<vector<int>> &v) {
    unsigned long R = v.size();
    for (unsigned long i = 0; i < R; i++)
        for (unsigned long j = 0, k = R - 1; j < k; j++, k--)
            swap(v[i][j], v[i][k]);

}


int main(int argc, char **argv) {
    int n = 4;
    int m = 4;
    vector<vector<int> > matrix = createMatrix(n, m);
    printMatrix(matrix);
    //By 1 method
//    Transpose(matrix);
//    flip_rows(matrix);
    //printMatrix(matrix);

    rotateclock(matrix); // 2nd method
    printMatrix(matrix);
    return 0;
}