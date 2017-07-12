//Given a sorted array, remove the duplicates in place such that each element can appear atmost twice and return the new length.
//
//Do not allocate extra space for another array, you must do this in place with constant memory.
//
//Note that even though we want you to return the new length, make sure to change the original array as well in place
//
//        For example,
//Given input array A = [1,1,1,2],
//
//Your function should return length = 3, and A is now [1,1,2].

#include <iostream>
#include <vector>

using namespace std;

int RemoveDuplicates(vector<int> &A) {
    if (A.size() <= 2) {
        return A.size();
    }
    int count = 0;
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] == A[i + 1] && A[i] == A[i + 2] and i < A.size()) {//i++;
            continue;
        } else {
            A[count] = A[i];
            count += 1;
        }

    }
    for (int j = count; j < A.size(); ++j) {
        A[j] = 0;

    }
    return count;
}

int main() {
    vector<int> A = {0};
    cout << RemoveDuplicates(A);
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i];
    }
}