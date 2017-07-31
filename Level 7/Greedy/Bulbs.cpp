/*
 N light bulbs are connected by a wire. Each bulb has a switch associated with it, however due to faulty wiring, a switch also changes the state of all the bulbs to the right of current bulb. Given an initial state of all bulbs, find the minimum number of switches you have to press to turn on all the bulbs. You can press the same switch multiple times.

Note : 0 represents the bulb is off and 1 represents the bulb is on.

Example:

Input : [0 1 0 1]
Return : 4

Explanation :
	press switch 0 : [1 0 1 0]
	press switch 1 : [1 1 0 1]
	press switch 2 : [1 1 1 0]
	press switch 3 : [1 1 1 1]
 */

//two methods to solve
//bulbs1 -> O(n^2)
//bulbs2 -> O(n)



#include <iostream>
#include <vector>


using namespace std;

#define Rep(i, n) for(int i = 0 ;i<n;i++)
#define Repfrom(i, start, n) for(int i = start ;i<n;i++)


void right(int start, vector<int> &A) {
    Repfrom(i, start, A.size()) {
        A[i] = (A[i] == 0 ? 1 : 0);

    }

}

int bulbs1(vector<int> &A) {
    int count = 0;
    Rep(i, A.size()) {
        if (A[i] == 0) {
            count++;
            right(i, A);
        }

    }
    return count;
}


int bulbs2(vector<int> &A) {
    int count = 0;
    Rep(i, A.size()) {
        if (A[i] == 0)
            if (A[i] != A[i + 1] and i != A.size() - 1) {

                count += 2;
                // cout<<count;
            }
        if (i == A.size() - 1 and A[i] == 0) {
            count++;
        }

    }
    return count;
}

int main() {

    vector<int> A = {0, 1, 0};
    cout << bulbs1(A);


}

