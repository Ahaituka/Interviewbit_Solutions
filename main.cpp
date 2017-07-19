#include<iostream>
#include <stack>

using namespace std;
//
//long long solve (vector<int> a)
//{
//    long long int sum=0,count=0;
//    for(int i=1;i<a.size();i++)
//    {  sum=0;
//        if(a[i]<a[i-1])
//        {
//            int x = a[i] , t=a[i-1];
//            sum+=a[i-1]-a[i]+1;
//
//        }
//        a[i]+=sum;
//        count+=sum;
//
//    }
//    return count;
//}
//
//int main() {
//
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    //cin >> n;
//    vector<int> a = {1,6,5,2};
////    for(int i_a=0; i_a<n; i_a++)
////    {
////         a[i_a] =1
////    }
////    a[0]=1;
////    a[1]=6;
////    a[2]=5;
//
//    long long out_;
//    out_ = solve(a);
//    cout << out_;
//}
//
////unsigned int bitCount (unsigned int arr[],int n) {
//    unsigned int count = 0,sum=0,value;
//    for (int i = 0; i < n; ++i) {
//        value = arr[i];
//        count=0;
//        while (value > 0)
//        {           // until all bits are zero
//            if ((value & 1) == 1)     // check lower bit
//                count++;
//            value >>= 1;              // shift bits, removing lower bit
//        }
//        sum+=count;
//    }
//    long long x =pow(10,10)+11;
//    return sum%x;
//}
//
//
//int main()
//{
//    unsigned int n ;
//    cin>>n;
//    unsigned int arr[n];
//    for(int i = 0 ; i<n ; i++)
//    {
//        cin>>arr[i];
//
//    }
//    cout << bitCount(arr,n);
//}
////    cout<<x;
//
//
//

//int CoverPoints(vector<int> &x, vector<int> &y) {

//assert(x.size() == y.size());

//
//if (y.size() <= 1) return 0;
//int step = 0;
//for (int j = 1; j < x.size(); ++j) {
//step+=max(abs(x[j]-x[j-1]),abs(y[j]-y[j-1])) ;
//}
//return step;
//}
//
//int main()
//{
//    vector<int> x ={0,1,2,3,4 };
//    vector<int> y ={0,1,2,3,4 };
//    cout<<CoverPoints(x,y);
//
//
//
////}
//bool isValid(string s)
//{
//        stack<char> st;
//        map<char, char> matchingBracket;
//        matchingBracket['{'] = '}';
//        matchingBracket['['] = ']';
//        matchingBracket['('] = ')';
//
//
//        for (int i = 0; i < s.length(); i++) {
//            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
//                st.push(s[i]);
//                auto t = matchingBracket[s[i]];
//               // cout<<t;
//            } else if (st.empty() || matchingBracket[st.top()] != s[i]) {
//                return false;
//            } else {
//                st.pop();
//            }
//        }
//        return st.empty();
//}
//
//int main()
//{
//    cout<<isValid("{(   )}");
//
//
//}
//
//
//
// An efficient C++ program to find maximum of all minimums of
// windows of different sizes
using namespace std;

void printMaxOfMin(int arr[], int n) {
    stack<int> s; // Used to find previous and next smaller

    // Arrays to store previous and next smaller
    int left[n + 1];
    int right[n + 1];

    // Initialize elements of left[] and right[]
    for (int i = 0; i < n; i++) {
        left[i] = -1;
        right[i] = n;
    }

    // Fill elements of left[] using logic discussed on
    // http://www.geeksforgeeks.org/next-greater-element/
    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] >= arr[i])
            s.pop();

        if (!s.empty())
            left[i] = s.top();

        s.push(i);
    }

    // Empty the stack as stack is going to be used for right[]
    while (!s.empty())
        s.pop();

    // Fill elements of right[] using same logic
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] >= arr[i])
            s.pop();

        if (!s.empty())
            right[i] = s.top();

        s.push(i);
    }

    // Create and initialize answer array
    int ans[n + 1];

    for (int i = 0; i <= n; i++)
        ans[i] = 0;

    // Fill answer array by comparing minimums of all
    // lengths computed using left[] and right[]
    for (int i = 0; i < n; i++) {
        // length of the interval
        int len = right[i] - left[i] - 1;

        // arr[i] is a possible answer for this length
        // 'len' interval, check if arr[i] is more than
        // max for 'len'
        int x = ans[len];
        int y = arr[i];
        ans[len] = max(ans[len], arr[i]);
        int zs = ans[len];
        int t = 5;


    }

    // Some entries in ans[] may not be filled yet. Fill
    // them by taking values from right side of ans[]
    for (int i = n - 1; i >= 1; i--) {
        ans[i] = max(ans[i], ans[i + 1]);

        for (int j = 0; j < n; ++j) {
            cout << ans[j] << " ";
        }
        cout << endl;
    }
    // Print the result
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
}


int count(int n) {
    if (n == 0)
        return 1;

    if (n == 1)
        return 1;
    else
        return count(n - 1) + count(n - 2);
}

// Driver program
int main() {
    int arr[] = {10, 20, 30, 50, 10, 70, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    // printMaxOfMin(arr, n);
    cout << count(15);
    return 0;
}

