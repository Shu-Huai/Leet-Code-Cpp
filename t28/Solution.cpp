#include <iostream>

using namespace std;

class Solution28 {
public:
    static int strStrLoop(string haystack, string needle) {
        for (int i = 0; i < haystack.length(); i++) {
            for (int j = 0; j < needle.length(); j++) {
                if (haystack[i] == needle[j]) {
                    if (j == needle.length() - 1) {
                        return i - j;
                    }
                    i++;
                } else {
                    i -= j;
                    break;
                }
            }
        }
        return -1;
    }

    static int strStrKmp(string haystack, string needle) {
        int i = 0;
        int j = -1;
        int *next = new int[needle.length()]{0};
        next[0] = -1;
        while (i < needle.length() - 1) {
            if (j == -1 || needle[i] == needle[j]) {
                i++;
                j++;
                next[i] = j;
            } else {
                j = next[j];
            }
        }
        i = 0;
        j = 0;
        while (i < int(haystack.length()) && j < int(needle.length()) &&
               int(needle.length()) - j <= int(haystack.length()) - i) {
            if (j == -1 || haystack[i] == needle[j]) {
                i++;
                j++;
            } else {
                j = next[j];
            }
        }
        delete[] next;
        if (j == needle.length()) {
            return i - j;
        }
        return -1;
    }
};