#include <iostream>
#include "Solution.cpp"

using namespace std;

class T709 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            cout << Solution709::toLowerCaseApi(input) << endl;
            cout << Solution709::toLowerCaseSelf(input) << endl;
        }
    }
};