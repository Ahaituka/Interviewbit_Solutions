/*
 There are N gas stations along a circular route, where the amount of gas at station i is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.

Return the minimum starting gas station’s index if you can travel around the circuit once, otherwise return -1.

You can only travel in one direction. i to i+1, i+2, ... n-1, 0, 1, 2..
Completing the circuit means starting at i and ending up at i again.

Example :

Input :
      Gas :   [1, 2]
      Cost :  [2, 1]

Output : 1

If you start from index 0, you can fill in gas[0] = 1 amount of gas. Now your tank has 1 unit of gas. But you need cost[0] = 2 gas to travel to station 1.
If you start from index 1, you can fill in gas[1] = 2 amount of gas. Now your tank has 2 units of gas. You need cost[1] = 1 gas to get to station 0. So, you travel to station 0 and still have 1 unit of gas left over. You fill in gas[0] = 1 unit of additional gas, making your current gas = 2. It costs you cost[0] = 2 to get to station 1, which you do and complete the circuit.

 */

#include <iostream>
#include <vector>



using namespace std;


#define Rep(i, n) for(int i = 0 ; i<n ; i++)


int canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int sum = 0, start = 0, cost = 0, gas = 0;

    Rep(i, A.size()) {
        gas += A[i];
        cost += B[i];

    }
    if (gas < cost)
        return -1;

    Rep(i, A.size()) {
        sum += A[i] - B[i];
        if (sum < 0) {
            sum = 0;
            start = i + 1;
        }


    }
    return start;
}

//int findKthLargest(vector<int>& nums, int k) {
//    priority_queue<int,vector<int>,std::greater<int>> pq(nums.begin(), nums.end());
//    for (int i = 0; i < k - 1; i++)
//        pq.pop();
//    return pq.top();
//}


int main() {
    vector<int> A = {1, 2};
    vector<int> B = {2, 1};
//    for (int i = 0; i < B.size(); ++i) {
    cout << canCompleteCircuit(A, B);
//
    // }

}


