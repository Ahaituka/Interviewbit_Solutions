#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int count(vector<int> s) {
    int x, result = 0;
    for (int i = 0; i < 32; ++i) {

        int sum = 0;
        x = pow(2, i);
        for (int j = 0; j < 32; ++j) {
            for (int k = 0; k < s.size(); ++k) {
                if (s[k] & x)
                    sum++;
            }
            if (sum % 3)
                result |= x;
        }
    }
    return result;
}


int main() {
    vector<int> Input = {1, 2, 4, 3, 3, 2, 2, 3, 1, 1};
    cout << count(Input);

//    int x = (2<<5);
//    cout<<x;


}
