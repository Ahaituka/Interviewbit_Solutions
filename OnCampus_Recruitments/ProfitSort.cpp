/*
Amazon Interview Experience | Set 359 (On-Campus)
 Profit Sort
 Input:
 Line 1 contains n->size of array
 Line 2 contains elements of the  array
 Line 3 contains number of queries
 Line 4 contains the lower and upper values

 Output:
 Display the count of  number of elements in the given range

 Sample Input:
5
2 5 13 23 40
3
2 40
10 25
5 35
Sample Output:
5
2
3

 Explaination : Since first range is 2 40 and number of elemnts in that is 5

 */

//Solution:

//1.By bruteforce approach it can be easily done in O(n^2)
//2.Using binary search we can do it in O(nlogn)

//My solution in O(nllogn) time



#include<iostream>
#include <vector>

#define Rep(i, n) for(int i=0;i<n;i++)

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A;
    Rep(i, n) {
        int x;
        cin >> x;
        A.push_back(x);
    }
    int q;
    cin >> q;
    int query[q][2];
    Rep(i, q) {
        cin >> query[i][0];
        cin >> query[i][1];

    }
    sort(A.begin(), A.end());
    Rep(i, 3) {
        int low = lower_bound(A.begin(), A.end(), query[i][0]) - A.begin();
        int high = upper_bound(A.begin(), A.end(), query[i][1]) - A.begin();
        int count = 0;
        for (int x = low; x < high; ++x) {
            if (A[low] >= query[i][0] and A[low] <= query[i][1])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}

