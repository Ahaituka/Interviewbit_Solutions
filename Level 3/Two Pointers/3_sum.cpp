/*
 Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target.
Return the sum of the three integers.

Assume that there will only be one solution

Example:
given array S = {-1 2 1 -4},
and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2)
 */
#include <iostream>
#include <vector>

using namespace std;


int threeSumClosest(vector<int> &num, int target) {
    sort(num.begin(), num.end());
    int max = 1000000000, sum = 0;
    for (int i = 0; i < num.size() - 2; i++) {
        int r = i + 1, l = num.size() - 1;
        while (r < l) {
            sum = num[i] + num[r] + num[l];
            if (abs(target - sum) < abs(target - max)) {
                max = sum;
            }
            if (sum > target) {
                l--;
            } else {
                r++;
            }
        }
    }
    return max;
}

int main() {
    vector<int> S = {-5, 1, 4, -7, 10, -7, 0, 7, 3, 0, -2, -5, -3, -6, 4, -7, -8, 0, 4, 9, 4, 1, -8, -6, -6, 0, -9, 5,
                     3, -9, -5, -9, 6, 3, 8, -10, 1, -2, 2, 1, -9, 2, -3, 9, 9, -10, 0, -9, -2, 7, 0, -4, -3, 1, 6, -3};
    int t = -1;
    cout << threeSumClosest(S, t);


}