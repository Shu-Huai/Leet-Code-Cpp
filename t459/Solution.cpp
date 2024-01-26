#include <iostream>

using namespace std;

class Solution459 {
public:
    static bool repeatedSubstringPattern(string s) {
        int length = (int) s.length();
        for (int i = 1; i < length; i++) {
            if (length % i != 0) {
                continue;
            }
            bool match = true;
            for (int j = i; j < length; j++) {
                if (s[j] != s[j - i]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                return true;
            }
        }
        return false;
    }
};