#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T389 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            string s;
            string t;
            istringstream(input) >> s >> t;
            cout << Solution389::findTheDifferenceCount(s, t) << endl;
            cout << Solution389::findTheDifferenceSum(s, t) << endl;
        }
    }
};