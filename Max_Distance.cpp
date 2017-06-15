#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int max(int x, int y) {
    return x > y ? x : y;
}

int min(int x, int y) {
    return x < y ? x : y;
}

int max_distance(vector<int> arr) {
    int maxDiff;
    int i, j;
    //LMin[0] = arr[0];
    vector<int> LMin;
    LMin.push_back(arr[0]);
    int n = arr.size();
    for (int k = 0; k < n; ++k) {
        //cout<<LMin[i;
        LMin.push_back(min(arr[k], LMin[k - 1]));
    }
    int *RMax = new int[n];
    RMax[n - 1] = arr[n - 1];
    for (j = n - 2; j >= 0; --j)
        RMax[j] = max(arr[j], RMax[j + 1]);
    i = 0, j = 0, maxDiff = -1;
    while (j < n && i < n) {
        if (LMin[i] < RMax[j]) {
            maxDiff = max(maxDiff, j - i);
            j = j + 1;
        } else
            i = i + 1;
    }
    return maxDiff;
}

int main() {

    vector<int> xj = {9, 2, 3, 4, 5, 6, 7, 8, 18, 0};
    cout << max_distance(xj);
    return 0;
}