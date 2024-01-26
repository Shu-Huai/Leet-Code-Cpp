#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T28 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            string haystack;
            string needle;
            istringstream(input) >> haystack >> needle;
            cout << Solution28::strStrLoop(haystack, needle) << endl;
            cout << Solution28::strStrKmp(haystack, needle) << endl;
        }
    }
};