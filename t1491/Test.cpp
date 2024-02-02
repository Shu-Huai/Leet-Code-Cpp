#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T1491 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            vector<int> salary;
            istringstream iss(input);
            do {
                int temp;
                iss >> temp;
                salary.push_back(temp);
            } while (!iss.eof());
            cout << Solution1491::average(salary) << endl;
        }
    }
};