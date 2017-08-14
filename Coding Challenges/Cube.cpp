/*
 Tom wants to play a game with Jerry. In this game, a positive number X is given.

Both players in their chance can reduce the cube C of any positive number from X, such that C<=X. After reduction, X should be non-negative. The player who makes the last valid move wins the game and the other player loses.

Assume both players play optimally and Tom starts the game.

For example:
Let X=9, Tom can reduce either 1=1^3 or 8=2^3 from 9. If Tom reduces 1, now X=9-1=8 and in next move, Jerry reduces 8=2^3 and X=8-8=0, now Tom cannot take a move, so Tom looses and Jerry wins.
If X=9 and Tom reduce 8 from X, it is X=9-8=1 and Jerry reduces 8, so X=8-8=0, now again Tom cannot make a valid move, so Jerry wins.
Thus, for the number 9, it cannot lead Tom to win.
Now, given N, Tom wants to know the count of numbers from the set {0,1,2,.., N}, which can lead him to win.

Input Format
A non-negative integer N, in a single line.

Output Format
Print the count of numbers from the set {0,1,2,.., N}, which can lead Tom to win.

Constraints
0<= N <= 105

Sample Test Cases:

Input
2

Output
1

Explanation
If we have set {0,1,2}, only the number 1 can give Tom a win, 0 and 2 give him loss. He can reduce 1 from X=1 and wins. So the count is 1.

Input
3

Output
2

Explanation
If we have set {0,1,2,3}, The numbers 1 and 3 give Tom wins. So the count is 2.
If X=1, he can reduce 1 from X=1 and makes X=0, so Jerry loses.
If X=3, he reduces 1 from X, so X=3-1=2, now Jerry reduces 1, so X=2-1=1, again Tom reduces 1 and makes X=1-1=0, so Jerry loses.

///////////////////////////
 Wakandan Defences to the Nuclear Plants
subject Codingcasino 200 points
DESCRIPTION
Nuclear Plants are full of buildings in the circle shape. Wakandan’s designed a special type of vibranium with rubber properties. now in case of any accidents in the nuclear plants, they want to protect the world from its explosion, that’s why they designed a rubber-band using vibranium, which in case of accident it will be deployed to contain all the buildings, and then the band’s interior is transported to an uninhabited planet where the nuclear plant detonates safely.﻿
﻿﻿
﻿
From the above image it is evident that we can also transport without disabling the “vibranium rubber band stopper” but it will transport more area which means more power. so we don’t do that.
Your task is to compute the area of transported area when there is an accident. i.e area when the rubber band is enclosed around the circles.
So given the locations of the building’s i.e circle’s centers, you have to print the area occupied by the vibranium rubber band.

All circles have equal radius which is K.

Note: circles/building may intersect. yeah, Wakandan’s can sometimes be crazy.
As circles are involved take π(pi) as 3.141592653589793 if you need to use π(pi).

Input Format
First line contains N, K and the next N lines contain two space separated integers X, Y denoting the center of the ith circle.

Output Format
Print the area of the rubber band occupied when it is wrapped around these circles.
Print the answer rounding it to 6 digits after the decimal point, and append zeros if necessary i.e if the answer is 22.66 print 22.660000

Constraints
1 <= N <= 100000
1 <= K <= 100
0 <= X <= 100000
0 <= Y <= 100000

Sample Test Case:

Input
2 2
0 0
0 5

Output
32.566371

Explanation
The area is 20 + 4π which is 32.56637061435917 after rounding we get 32.566371

Input
3 2
0 0
0 5
5 0

Output
59.208506

Explanation
The area is 20 + 10√2 + 4π + 0.5*5*5 which is 59.20850623809012 after rounding we get 59.208506


 //////////////////////////////////////////
 One day Bob came across this question but he was unable to solve. Can you help him?
You are given a square grid of size N(1-Indexed) which consists of N*N cells. For each cell, there is a defined magic number, which is the sum of the row number and column number.
Your task is to find the sum of phi values of magic numbers for all cells in the grid( see sample explanation for better understanding).
To know more about phi go through this link.

Input Format
First line consists T, the number of Testcases.
For each test case you are given N.

Output Format
For each test case print your answer on a new line.

Constraints
1<=T<=1000000
1<=N<=1000000

Sample Test Case

Input
1
3

Output
21

Explanation
The square grid of size 3 consists of 9 cells.
Magic number of (1,1)=2
Magic number of (1,2)=3
Magic number of (1,3)=4
Magic number of (2,1)=3
Magic number of (2,2)=4
Magic number of (2,3)=5
Magic number of (3,1)=4
Magic number of (3,2)=5
Magic number of (3,3)=6

Therefore required answer=phi(2)+phi(3)+phi(4)+phi(3)+phi(4)+phi(5)+phi(4)+phi(5)+phi(6)
=21.
 //////////////////////////////
 Lily in Lala land
subject Codingcasino 200 points
DESCRIPTION
LaLa Land contains N cities, connected by N-1 bi-directional roads such that from any city, you can reach any other cities by following some roads.

LaLa Land is a very weird country, every day in LaLa Land government chooses a road with uniform randomness and blocks the chosen road so that nobody can pass through that road.

Each city in Lala Land has a certain number of shops. Lily has planned to make N*(N-1)  visits to the country to shop as much as she can.Each visit of Lily to Lala Land, last a day. As Lily is a shopping maniac she has decided to shop at all shops in all the cities that are reachable from the city she starts her trip (including the city, she starts at). As she does not know which road government will block on that particular day, she selects a city to start with uniform randomness each day.

Lily’ s friend is too concerned about this trip and has asked you to compute the expected number of shops she will visit in these N*(N-1) days.

Input Format
The first line contains an integer N, which is the number of cities in Lala land.
Next lines contain N integers where ith integer is the number of shops in  ith city.
Next N-1 line contains 2 integers u,v denoting that there is a road between u and v.

Output Format
Print one real value — the expected number of shops that she will visit in these N*(N-1) visits.

Constraints
1  ≤  N  ≤  3*105
1 ≤  u,v  ≤  NThe number of shops in each city is at most 109

Sample Test Case:

Input
4
1 1 0 2
1 2
1 3
2 4

 Output
28


 */


#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//
int solve(vector<int> e, vector<int> o, int x) {

    while (x > 0) {
        if (x % 2 != 0) {
            int o = lower_bound(e.begin(), e.end(), 29) - e.begin();
            if (o >= e.size())
                o = *max_element(e.begin(), e.end());
            x = x - o;
        }

    }


}

int main() {
    int n = 2;
//    cin>>n;
//    if(n<=2)
//    {
//        cout<<1;
//        return 0;
//    }
    vector<int> c = {1, 8, 27};
    int o = upper_bound(c.begin(), c.end(), 23) - c.begin();
    cout << c[o];

    return 0;

    for (int i = 1; i < n; ++i) {
        int x;
        x = pow(i, 3);
        if (x <= n) {
            //c.push_back(x);
        }


    }
/*
int count=1,k=1;
    for (int j = 2; j <= n; ++j) {
//        cout<<c[jx]
        if (j % 2 != 0 and c.size() == 1)
        {
            count++;
            continue;
        }
        else if(c.size()==1)
            continue;

      //  if (j < c[1] and (j % 2) != 0) {
            count++;
            continue;
        }
        if (j - c[k] == 0) {
            k++;

            count++;
            continue;
        }

        if ((j - c[k]) % 2 == 0 and j<c[k]) {
            k++;

            count++;
            continue;
        }
    }
    cout<<count;




*/



}