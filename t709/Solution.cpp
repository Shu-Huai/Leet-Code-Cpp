#include <iostream>

using namespace std;

class Solution709 {
public:
    static string toLowerCaseApi(string s) {
        for (char &c: s) {
            c = (char) tolower(c);
        }
        return s;
    }

    static string toLowerCaseSelf(string s) {
        for (char &c: s) {
            if (c >= 0x41 && c <= 0x5A) {
                c |= 0x20;
            }
        }
        return s;
    }
};