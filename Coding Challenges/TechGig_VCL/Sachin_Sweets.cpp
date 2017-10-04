/*
 Buying Sweets (100 Marks)

Sachin likes sweets a lot. So, he goes to a market of sweets. There is a row of sweet stalls. Every sweet stall has different sweets.
 To save some time, he decided to buy sweets from contiguous stalls. So, he can buy from as many stalls as he wants, but all of those
 stalls need to be contiguous. He also decided to buy only 1 kg of sweets from each of those stalls. Cost of 1 kg of sweets for each stall
 is given. There is a strange rule of billing in that market. And that rule is as follows- Total cost of all sweets bought is sum of the
 cost of all sweets multiplied by the cost of sweet he bought at the end. e.g. if he buys sweets having cost 2, 3, 4 in the same order than
 total cost of sweets will be 2*4+3*4+4*4=36. Now he wonders what will be the total cost of all possible ways of buying sweets.
 Can you help him. Because this number could be large, you should take modulo of the final result by 10^9+7.

INPUT SPECIFICATION
Your function contains a single argument- A One dimensional Integer array of Size N in which ith element denotes the cost of 1 kg sweets from ith stall.
First line of input contains an Integer N denoting the size of Array. (1<=N<=10^5)
Next N lines of input each containing a single integer from 1 to 9.

OUTPUT SPECIFICATION
You must return an integer- sum of the cost of all possible ways of buying sweets modulo 10^9+7.

EXAMPLES
Sample Test Case 1-
Input
3
1
2
3

Output
53

Explanation
Possible ways of buying sweets are-
a) 1
b) 1 2
c) 2
d) 1 2 3
e) 2 3
f) 3
cost of each of these is following-
a) 1*1= 1
b) 1*2+2*2= 6
c) 2*2= 4
d) 1*3+2*3+3*3= 18
e) 2*3+3*3= 15
f) 3*3= 9

Hence total cost will be 1+6+4+18+15+9=53
 */


#include <iostream>
#include <vector>
#include <numeric>


using namespace std;


int maxi(vector<int> A) {
    vector<vector<int>> m;
//    for (int i = 0; i < A.size(); ++i)
//    {
//        int j=i+1;
//        vector<int> y;
//
//        if(A[j]==A[i]+1)
//        {
//            y.push_back(A[i]);
//            y.push_back(A[j]);
//            m.push_back(y);
//        }
//        if(A[j]==A[i]+1 and j!=A.size()-1)
//        {
//
//            while (A[j]!=A[j]+1 and j!=A.size()-1)
//            {
//                y.push_back(A[j+1]);
//                m.push_back(y);
//
//                j++;
//
//            }
////            vector<int> q;
////            for (int k = i; k <=j; ++k)
////            {
////
////                q.push_back(A[k]);
////
////            }
////            m.push_back(q);
//        }
//    }

    long long int sy = 0;
    for (int i = 0; i < A.size() - 1; i++) {
        int B = 2, j = i;
        vector<int> y;
        y.push_back(A[i]);


//        while (i+1+B<=A.size()+1  ) {
//            int max = 0;
//            vector<int> r;
//            for ( j = i; j < i + B and j<A.size(); j++)
//            {
//                r.push_back(A[j]);
//
//
////          if(A[j]>max)
////           max=A[j];
//            }
//
//            m.push_back(r);
//            B++;
//        }
        while (i + 1 + B <= A.size() + 1 and j < A.size() - 1) {

            y.push_back(A[++j]);
            m.push_back(y);

            B++;

        }


    }

    long long unsigned int sum = inner_product(A.begin(), A.end(), A.begin(), 0);
    for (int l = 0; l < m.size(); ++l) {
        int maximum = m[l][m[l].size() - 1];
        long long int buy = 0;
        for (int i = 0; i < m[l].size(); ++i) {
            buy += ((m[l][i] * maximum)) % 1000000007;
            //buy= buy/1000000007;

        }
        sum += buy;

    }
    return sum;


}

int main() {
    vector<int> s;
    s = {1, 2, 3};
    int x = inner_product(s.begin(), s.end(), s.begin(), 0);
    cout << maxi(s);
    // cout<<pow(10,9);


    //max(s);

}


