#include <string>
#include <unordered_map>

using namespace std;

class Solution13 {
public:
    static int romanToInt(string s) {
        unordered_map<char, int> map = {{'I', 1},
                                        {'V', 5},
                                        {'X', 10},
                                        {'L', 50},
                                        {'C', 100},
                                        {'D', 500},
                                        {'M', 1000}};
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i == s.length() - 1) {
                result += map[s[i]];
            } else if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                result += (map[s[i + 1]] - 1);
                i++;
            } else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                result += (map[s[i + 1]] - 10);
                i++;
            } else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                result += (map[s[i + 1]] - 100);
                i++;
            } else {
                result += map[s[i]];
            }
        }
        return result;
    }
};