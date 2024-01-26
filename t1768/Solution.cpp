#include <iostream>
#include <sstream>

using namespace std;

class Solution1768 {
public:
    static string mergeAlternately(string word1, string word2) {
        stringstream result;
        int len = (int) min(word1.length(), word2.length());
        for (int i = 0; i < len; i++) {
            result << word1[i] << word2[i];
        }
        if (word1.length() > len) {
            for (int i = len; i < word1.length(); i++) {
                result << word1[i];
            }
        } else if (word2.length() > len) {
            for (int i = len; i < word2.length(); i++) {
                result << word2[i];
            }
        }
        return result.str();
    }
};