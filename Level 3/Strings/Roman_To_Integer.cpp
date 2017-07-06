#include <iostream>


using namespace std;


int value(char A) {
    switch (A) {
        case 'I' :
            return 1;
            break;
        case 'V' :
            return 5;
            break;
        case 'X' :
            return 10;
            break;
        case 'L' :
            return 50;
            break;
        case 'C' :
            return 100;
            break;
        case 'D' :
            return 500;
            break;
        case 'M' :
            return 1000;
            break;

    }

}

int covert(string s) {
    int num = 0;
    for (int i = 0; i < s.length(); i++) {
        int z = value(s[i]), j = value(s[i + 1]);
        if (value(s[i]) >= value(s[i + 1])) {
            num += value(s[i]);
        } else
            num -= value(s[i]);
    }
    return num;
}

//int romanToInt(string s) {
//    int num = 0;
//    int size = s.size();
//
//    for (int i = 0; i < size; i++) {
//        // Does lesser value precede higher value ?
//        if (i < (size - 1) && romanCharToInt(s[i]) < romanCharToInt(s[i + 1])) {
//            num -= romanCharToInt(s[i]);
//        } else {
//            num += romanCharToInt(s[i]);
//        }
//    }
//    return num;
//}



int main() {

    cout << covert("MMCDLXXV");
}