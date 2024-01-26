#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T1768 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            string word1;
            string word2;
            istringstream(input) >> word1 >> word2;
            cout << Solution1768::mergeAlternately(word1, word2) << endl;
        }
    }
};