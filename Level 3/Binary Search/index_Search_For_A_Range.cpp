/*
 Given a sorted array of integers, find the starting and ending position of a given target value.

Your algorithm’s runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

Example:

Given [5, 7, 7, 8, 8, 10]

and target value 8,

return [3, 4].
 */

//Solution using vector

//O(N) Solution

#include <iostream>
#include <vector>


using namespace std;

int minBinarySearch(vector<int> arr, int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[l] == x && x > arr[l - 1]) return l;
        if (arr[r] == x && x > arr[r - 1]) return r;
        // If the element is present at the middle itself
        if (arr[mid] == x && x > arr[mid - 1]) return mid;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] >= x) return minBinarySearch(arr, l, mid - 1, x);

        // Else the element can only be present in right subarray
        return minBinarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not present in array
    return -1;
}

int itminBinarySearch(vector<int> arr, int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[l] == x && x > arr[l - 1]) return l;
        if (arr[r] == x && x > arr[r - 1]) return r;
        // If the element is present at the middle itself
        if (arr[mid] == x && x > arr[mid - 1]) return mid;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] >= x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    // if we reach here, then element was not present
    return -1;
}


int maxBinarySearch(vector<int> arr, int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[l] == x && (l == arr.size() - 1 || x < arr[l + 1])) return l;
        if (arr[r] == x && x < arr[r + 1]) return r;
        // If the element is present at the middle itself
        if (arr[mid] == x && (mid == arr.size() - 1 || x < arr[mid + 1]))
            return mid;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) return maxBinarySearch(arr, l, mid - 1, x);

        // Else the element can only be present in right subarray
        return maxBinarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not present in array
    return -1;
}

int itmaxBinarySearch(vector<int> arr, int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[l] == x && (l == arr.size() - 1 || x < arr[l + 1])) return l;
        if (arr[r] == x && x < arr[r + 1]) return r;
        // If the element is present at the middle itself
        if (arr[mid] == x && (mid == arr.size() - 1 || x < arr[mid + 1]))
            return mid;
        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) r = mid - 1;
        else
            // Else the element can only be present in right subarray
            l = mid + 1;
    }
    // if we reach here, then element was not present
    return -1;
}


vector<int> searchRange(vector<int> &A, int B) {
    vector<int> v;
    return v = {itminBinarySearch(A, 0, A.size() - 1, B), itmaxBinarySearch(A, 0, A.size() - 1, B)};
}


void printArray(vector<int> v) {
    cout << "[";
    for (int j = 0; j < v.size(); j++) {
        printf(" %02d", v[j]);
    }
    cout << "]" << endl;;
}


int main() {
    vector<int> A = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                     1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                     2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3,
                     3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
                     3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                     4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5,
                     5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
                     5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
                     6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
                     6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
                     7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
                     8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
                     8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
                     9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
                     10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
                     10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    printArray(searchRange(A, 3));


}

