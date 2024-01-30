#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T657 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            string s;
            istringstream(input) >> s;
            cout << boolalpha << Solution657::judgeCircle(s) << endl;
        }
    }
};