/*
Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7  might become 4 5 6 7 0 1 2 ).

You are given a target value to search. If found in the array, return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Input : [4 5 6 7 0 1 2] and target = 4
Output : 0

NOTE : Think about the case when there are duplicates. Does your current solution work? How does the time complexity change?*
  */

//Solution using vector


#include <iostream>
#include <vector>
#include <list>


using namespace std;


int binarySearch(vector<int> A, int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        // If the element is present at the middle itself
        if (A[mid] == x) return mid;
        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (A[mid] > x) return binarySearch(A, l, mid - 1, x);

        // Else the element can only be present in right subarray
        return binarySearch(A, mid + 1, r, x);
    }
    // We reach here when element is not present in array
    return -1;
}

//void printArray(vector<int> v) {
//    cout << "[";
//    for (int j = 0; j < v.size(); j++) {
//        printf(" %02d", v[j]);
//    }
//    cout << "]" << endl;;
//}

//Solution No.1
int find(vector<int> &A, int target) {
    auto it = std::find(A.begin(), A.end(), target);
    if (it != A.end()) {
        auto index = std::distance(A.begin(), it);
        return index;
    } else
        return -1;
}



//Solution No.2

int find_self(vector<int> &A, int target) {
    int start = 0, end = A.size() - 1, pivot;
    if (A.size() == 1)
        return A[0];
    while (start < end) {
        if (A[start] <= A[end]) {
            pivot = start;
            break;
        }
        int mid = start + (end - start) / 2;

        if (A[mid] < A[mid - 1]) {
            pivot = mid;
            break;
        }
        if (A[mid] > A[end])
            start = mid + 1;
        else
            end = mid + 1;
    }


    if (target == A[pivot])
        return pivot;
// int d=A[pivot-1],y=A[pivot+1] ;
    int pos = binarySearch(A, 0, pivot - 1, target);
    if (pos != -1) {
        return pos;

    } else
        return binarySearch(A, pivot + 1, A.size() - 1, target);


}


int main() {

    vector<int> A = {1, 7, 67, 133, 178};
    cout << find_self(A, 133);
}
