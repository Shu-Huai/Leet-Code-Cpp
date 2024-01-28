#include <iostream>

using namespace std;

class Solution58 {
public:
    static int lengthOfLastWord(string s) {
        bool isLetter = false;
        int counter = 0;
        for (int i = (int) s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (!isLetter) {
                    continue;
                } else {
                    return counter;
                }
            }
            if (isalpha(s[i])) {
                isLetter = true;
                counter++;
            }
        }
        return counter;
    }
};