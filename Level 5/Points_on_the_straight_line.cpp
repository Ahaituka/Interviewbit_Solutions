#include <iostream>
#include <vector>
#include <map>


using namespace std;

//#define REP(i, n) for (int i = 0; i < int(n); ++i)
//
//#define Rep(i, n) for (int i=0;i<int(n);i++)
//#define REPE(i, a, b) for (int i = (a); i <= int(b); ++i)
//#define SZ(x) ((int)(x).size())
//#define ALL(x) x.begin(), x.end()
//#define PB push_back
//#define EB emplace_back
//using LL = long long;
//#define F first
//#define S second


//
//#define REP(i,n) for (int i = 0;i<n;i++)
//#define REPE(i,a,n) for (int i = a;i<=int(n);++i)
//#define ALL(x) x.begin(),x.end()
//#define pb push_back
//#define eb emplace_back
//using LL = long long



int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a < 0) return gcd(-1 * a, b);
    if (b < 0) return gcd(a, -1 * b);
    if (a > b) return gcd(b, a);
    return gcd(b % a, a);
}

//int maxPointOnSameLine(vector<int> &X, vector<int> &Y)
//{
//    vector< pair<int, int> > points;
//    for (int i = 0; i < X.size(); i++)
//        points.push_back(make_pair(X[i], Y[i]));
//    int N = points.size();
//    if (N < 2)
//        return N;
//
//    int maxPoint = 0;
//    int curMax, overlapPoints, verticalPoints;
//
//    // map to store slope pair
//    map<pair<int, int>, int> slopeMap;
//
//    //  looping for each point
//    for (int i = 0; i < N; i++)
//    {
//        curMax = overlapPoints = verticalPoints = 0;
//
//        //  looping from i + 1 to ignore same pair again
//        for (int j = i + 1; j < N; j++)
//        {
//            //  If both point are equal then just
//            // increase overlapPoint count
//            if (points[i] == points[j])
//                overlapPoints++;
//
//                // If x co-ordinate is same, then both
//                // point are vertical to each other
//            else if (points[i].first == points[j].first)
//                verticalPoints++;
//
//            else
//            {
//                int yDif = points[j].second - points[i].second;
//                int xDif = points[j].first - points[i].first;
//                int g = gcd(xDif, yDif);
//
//                // reducing the difference by their gcd
//                yDif /= g;
//                xDif /= g;
//
//                // increasing the frequency of current slope
//                // in map
//                slopeMap[make_pair(yDif, xDif)]++;
//                curMax = max(curMax, slopeMap[make_pair(yDif, xDif)]);
//            }
//
//            curMax = max(curMax, verticalPoints);
//        }
//
//        // updating global maximum by current point's maximum
//        maxPoint = max(maxPoint, curMax + overlapPoints + 1);
//        for(auto elem : slopeMap)
//        {
//            cout << elem.first.first << " " << elem.first.second << " " << elem.second<< "\n";
//        }
//
//        // printf("maximum colinear point which contains current
//        // point are : %d\n", curMax + overlapPoints + 1);
//        slopeMap.clear();
//    }
//
//    return maxPoint;
//}

//int maxPoints(vector<int> &X, vector<int> &Y) {
//    map<pair<int, int>, int> M;
//    int ans = 0;
//    for (int i = 0; i < X.size(); i++) {
//        M.clear();
//        int same = 1, curMax = 0;
//        // Try to find all the lines with same slope with points[i] as one end.
//        // Points with the same slope lie on the same line.
//        // We need to make sure we handle divisions by zero in cases like these.
//        // We also need to take care of overlapping points.
//        for (int j = i + 1; j < X.size(); j++) {
//            int xdiff = X[i] - X[j];
//            int ydiff = Y[i] - Y[j];
//            if (xdiff == 0 && ydiff == 0) {
//                // Same points
//                same++;
//                continue;
//            }
//            if (xdiff < 0) {
//                xdiff *= -1;
//                ydiff *= -1;
//            }
//            int g = gcd(xdiff, ydiff);
//            M[make_pair(xdiff / g, ydiff / g)]++;
//            auto t = M[make_pair(xdiff / g, ydiff / g)];
////            for (auto elem : M)
////            {
////                cout<<elem.first;
////
////            }
//            curMax = max(curMax, M[make_pair(xdiff / g, ydiff / g)]);
//        }
//        curMax += same;
//        ans = max(ans, curMax);
//    }
//
//
//}

int main() {
//    {-1, 1}, {0, 0}, {1, 1},
//    {2, 2}, {3, 3}, {3, 4}
    vector<int> X = {-1, 0, 1, 2, 3, 3};

    string sj = "shubham jain";
    char arr[sj.size()];
    string input;


    getline(cin, input);
    cout << input;
//   arr for(auto x : arr)
//    {
//        cout<<x;
//    }

//
//    for(auto x : sj)
//    {
//        cout<<x;
//
//    }

//    sort(ALL(X));
//
//    Rep(i,X.size()){
//        cout<<X[i];
//    };
//
//    vector<int> Y = {1,0,1,2,3,4};
//    cout<<maxPoints(X,Y);
}