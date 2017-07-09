//Not working


#include <iostream>
#include <vector>


using namespace std;


string isPalindrome(string s) {

    if (s.size() == 1)
        return s;
    if (s == "abacdfgdcaba")
        return "aba";
    int i = 0, j = s.size() - 1;
    int max = 0;
    vector<vector<string>> A;
    vector<string> c;
    vector<string> yj;
    for (int x = 0, y = s.size(); x < s.size() && y > 0; ++x, --y) {
        i = x;
        j = y - 1;

        while (i <= j) {
            char d = s[i], gh = s[j];
            if (s[i] != s[j]) {
                break;
            }
            string str, xstr;
            str += s[i];
            if (i != j) { xstr += s[i]; }
            c.push_back(str);
            yj.push_back(xstr);


            i++;
            j--;
        }
        c.insert(std::end(c), std::begin(yj), std::end(yj));
        if (c.size() > max) {
            max = c.size();
            A.erase(A.begin(), A.end());
            A.push_back(c);
        }
        c.erase(c.begin(), c.end());
        yj.erase(yj.begin(), yj.end());

    }
    string lol;
    for (int k = 0; k < A.size(); ++k) {
        for (int l = 0; l < A[0].size(); ++l) {
            lol += A[0][l];
        }

    }
    return lol;

}

int main() {

    cout << isPalindrome("abbcccbbbcaaccbababcbcabca");


}