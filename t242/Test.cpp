#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T242 {
public:
    static void test() {
        string input;
        getchar();
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            string s;
            string t;
            istringstream(input) >> s >> t;
            cout << Solution242::isAnagram(s, t) << endl;
        }
    }
};