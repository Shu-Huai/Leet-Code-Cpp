#include <iostream>

using namespace std;

class Solution389 {
public:
    static char findTheDifferenceCount(string s, string t) {
        int counter[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            counter[t[i] - 97]++;
            counter[s[i] - 97]--;
        }
        counter[t[t.length() - 1] - 97]++;
        for (int i = 0; i < 26; i++) {
            if (counter[i] > 0) {
                return (char) (i + 97);
            }
        }
        return 0;
    }

    static char findTheDifferenceSum(string s, string t) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += t[i];
            sum -= s[i];
        }
        sum += t[t.length() - 1];
        return (char) sum;
    }
};