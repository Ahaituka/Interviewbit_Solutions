/*
 Remove duplicates from Sorted Array
Given a sorted array, remove the duplicates in place such that each element appears only once and return the new length.

Note that even though we want you to return the new length, make sure to change the original array as well in place

Do not allocate extra space for another array, you must do this in place with constant memory.

 Example:
Given input array A = [1,1,2],
Your function should return length = 2, and A is now [1,2].
 */


#include <iostream>
#include <vector>

using namespace std;


int remove(vector<int> &A) {
    int count = 0;
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] == A[i + 1] && (i < A.size() - 1)) {
            continue;
        } else {
            A[count] = A[i];
            count++;
        }
    }
    for (int j = count; j < A.size(); ++j) {
        A[j] = 0;
    }
    return count;
}

int main() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                     1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
                     3, 3, 3, 3, 3};
    cout << remove(A);

}