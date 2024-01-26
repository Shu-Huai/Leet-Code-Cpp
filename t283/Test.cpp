#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T283 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            int s = 0;
            vector<int> num;
            istringstream iss(input);
            do {
                int temp;
                iss >> temp;
                num.push_back(temp);
            } while (!iss.eof());
            Solution283::moveZeroes(num);
            for (int i: num) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};