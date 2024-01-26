#include <iostream>
using namespace std;

class Solution242 {
public:
    static bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int count[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 97]++;
            count[t[i] - 97]--;
        }
        for (int i = 0; i < 26; i++) { // NOLINT(*-loop-convert)
            if (count[i] != 0) {
                return false;
            }
        }
        return true;
    }
};