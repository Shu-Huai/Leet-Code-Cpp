#include <iostream>
#include "Solution.cpp"

using namespace std;

class T13 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            cout << Solution13::romanToInt(input) << endl;
        }
    }
};