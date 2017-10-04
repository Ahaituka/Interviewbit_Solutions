/*
 Given two words A.size() and B, find the minimum number of steps required to convert A.size() to B. (each operation is counted as 1 step.)

You have the following 3 operations permitted on a word:

Insert a character
Delete a character
Replace a character
Example :
edit distance between
"Anshuman" and "Antihuman" is 2.

Operation 1: Replace s with t.
Operation 2: Insert i.
 */

#include <iostream>
#include <cmath>
#include <vector>


using namespace std;

int county(string A, string B, int n) {
    auto x = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] != B[i])
            x++;

    }
    return x;

    //ort(A.begin(0,A.end()))


}


int shu(string A, string B) {
    int n = A.size() < B.size() ? A.size() : B.size(), count = 0;
    int m = A.size() < B.size() ? B.size() : A.size();
    for (int i = 0; i < m; ++i) {


        for (int j = 0; j < m; ++j) {
            if (A[i] == B[j]) {
                B[j] = '0';
                count++;
                break;
            }

        }

    }

    return fabs(m - count);

}

int minDistance(string A, string B) {

    int op = 0;
    if ((B.size()) > (A.size())) {
        op += (B.size()) - (A.size());

        op += county(A, B, A.size());
    } else if ((B.size()) < (A.size())) {
        op += (A.size()) - (B.size());
        op += county(A, B, B.size());

    } else if ((B.size()) == (A.size())) {
        op += county(A, B, B.size());

    }
    return op;


}


int main() {
    //auto y = shu("bbbaabaa","aababbabb");
    vector<int> A = {2, 10, 13, 17, 35, 69};

    int low = lower_bound(A.begin(), A.end(), 3) - A.begin();
    int high = upper_bound(A.begin(), A.end(), 20) - A.begin();

    int count = 0;

    for (int i = low; i < high; ++i) {
        if (A[low] >= 3 and A[low] <= 20)
            count++;

    }

    cout << count;


    // array<list<pair<int,int > > > a;
//a.emplace_back(2,1);

    //r cout<<y;


}