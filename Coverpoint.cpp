/*
 You are in an infinite 2D grid where you can move in any of the 8 directions :

 (x,y) to
    (x+1, y),
    (x - 1, y),
    (x, y+1),
    (x, y-1),
    (x-1, y-1),
    (x+1,y+1),
    (x-1,y+1),
    (x+1,y-1)
You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.

Example :

Input : [(0, 0), (1, 1), (1, 2)]
Output : 2
It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).

This question is intentionally left slightly vague. Clarify the question by trying out a few cases in the “See Expected Output” section.

 */


// A C++ program solution to the above problem using vector

#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;


int coverPoints(vector<int> x, vector<int> y) {
    if (x.size() != y.size())
        return 0;

    if (y.size() <= 1) return 0;
    int step = 0;
    for (int j = 1; j < x.size(); ++j) {
        step += max(abs(x[j] - x[j - 1]), abs(y[j] - y[j - 1]));
    }
    return step;


}


int main(int argc, char **argv) {
    vector<int> x = {4, 8, -7, -5, -13, 9, -7, 8,};
    vector<int> y = {4, -15, -10, -3, -13, 12, 8, -8};
    assert(x.size() == y.size());
    int v = coverPoints(x, y);
    cout << v;
    return 0;
}