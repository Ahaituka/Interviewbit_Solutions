
/*
 * You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example :

Input : 3
Return : 3

Steps : [1 1 1], [1 2], [2 1]

 */


#include <iostream>

using namespace std;


//solution is just like of fibonacci
//space complexity can be improved by memoization
int count(int n) {
    if (n == 0)
        return 1;

    if (n == 1)
        return 1;
    else
        return count(n - 1) + count(n - 2);
}

int main() {

    cout << count(15);
    return 0;
}