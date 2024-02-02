#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T50 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            double x;
            int n;
            istringstream(input) >> x >> n;
            cout << Solution50::myPowApi(x, n) << endl;
            cout << Solution50::myPowSquare(x, n) << endl;
            cout << Solution50::myPowLoop(x, n) << endl;
        }
    }
};