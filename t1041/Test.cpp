#include <iostream>
#include "Solution.cpp"

using namespace std;

class T1041 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            cout << boolalpha << Solution1041::isRobotBounded(input) << endl;
        }
    }
};