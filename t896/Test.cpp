#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T896 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            vector<int> num;
            istringstream iss(input);
            do {
                int temp;
                iss >> temp;
                num.push_back(temp);
            } while (!iss.eof());
            cout << boolalpha << Solution896::isMonotonic(num) << endl;
        }
    }
};