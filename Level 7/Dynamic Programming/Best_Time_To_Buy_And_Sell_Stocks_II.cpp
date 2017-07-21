/*
 Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).

Example :

Input : [1 2 3]
Return : 2
 */


//auto minimum = *min_element(A.begin(),A.end()-1);
//auto minimum_iterator = min_element(A.begin(),A.end());
//auto maximum = *max_element(minimum_iterator-1,A.end());
//return maximum-minimum;


#include <iostream>
#include <vector>


#define Rep(i, n) for(int i =1;i<n;i++)

using namespace std;


int maxProfit(vector<int> A) {
    auto sum = 0;
    if (A.size() == 1 or A.size() == 0)
        return 0;
    Rep(i, A.size()) {
        if (A[i] >= A[i - 1]) {
            sum += A[i] - A[i - 1];

        }
    }
    return sum;
}

int main() {
    vector<int> A = {1, 2};
    cout << maxProfit(A);
}
