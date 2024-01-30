#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T682 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            vector<string> operations;
            istringstream iss(input);
            do {
                string temp;
                iss >> temp;
                operations.push_back(temp);
            } while (!iss.eof());
            cout << Solution682::calPoints(operations) << endl;
        }
    }
};