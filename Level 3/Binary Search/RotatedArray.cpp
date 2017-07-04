/*
 Suppose a sorted array A is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

The array will not contain duplicates.

NOTE 1: Also think about the case when there are duplicates. Does your current solution work? How does the time complexity change?*
PROBLEM APPROACH:

Note: If you know the number of times the array is rotated, then this problem becomes trivial. If the number of rotation is x, then minimum element is A[x].
Lets look at how we can calculate the number of times the array is rotated.
  */

//Solution using vector


#include <iostream>
#include <vector>

using namespace std;

//void printArray(vector<int> v) {
//    cout << "[";
//    for (int j = 0; j < v.size(); j++) {
//        printf(" %02d", v[j]);
//    }
//    cout << "]" << endl;;
//}


int findMin(const vector<int> &A) {
//    return  *min_element(A.begin(),A.end());
    int start = 0, end = A.size() - 1;
    if (A.size() == 1)
        return A[0];
    while (start < end) {
        if (A[start] <= A[end])
            return A[start];
        int mid = start + (end - start) / 2;

        if (A[mid] < A[mid - 1])
            return A[mid];
        if (A[mid] > A[end])
            start = mid + 1;
        else
            end = mid + 1;
    }
}


int main() {

    vector<int> A = {40342, 40766, 41307, 42639, 42777, 46079, 47038, 47923, 48064, 48083, 49760, 49871, 51000, 51035,
                     53186, 53499, 53895, 59118, 60467, 60498, 60764, 65158, 65838, 65885, 65919, 66638, 66807, 66989,
                     67114, 68119, 68146, 68584, 69494, 70914, 72312, 72432, 74536, 77038, 77720, 78590, 78769, 78894,
                     80169, 81717, 81760, 82124, 82583, 82620, 82877, 83131, 84932, 85050, 85358, 89896, 90991, 91348,
                     91376, 92786, 93626, 93688, 94972, 95064, 96240, 96308, 96755, 97197, 97243, 98049, 98407, 98998,
                     99785, 350, 2563, 3075, 3161, 3519, 4176, 4371, 5885, 6054, 6495, 7218, 7734, 9235, 11899, 13070,
                     14002, 16258, 16309, 16461, 17338, 19141, 19526, 21256, 21507, 21945, 22753, 25029, 25524, 27311,
                     27609, 28217, 30854, 32721, 33184, 34190, 35040, 35753, 36144, 37342};
    cout << findMin(A);
}
