#include <iostream>
#include "Solution.cpp"

using namespace std;

class T58 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            cout << Solution58::lengthOfLastWord(input) << endl;
        }
    }
};