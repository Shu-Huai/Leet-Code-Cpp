#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T1523 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            int low;
            int high;
            istringstream(input) >> low >> high;
            cout << Solution1523::countOdds(low, high) << endl;
        }
    }
};