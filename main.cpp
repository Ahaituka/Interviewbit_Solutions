//#include<iostream>
//#include <vector>
//
//using namespace std;
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


