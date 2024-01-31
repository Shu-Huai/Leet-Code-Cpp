#include <iostream>
#include "Solution.cpp"
#include "../utils/Printer.h"
#include <sstream>

using namespace std;

class T73 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            vector<vector<int>> accounts;
            istringstream iss(input);
            vector<int> temp;
            do {
                int tempIn;
                iss >> tempIn;
                temp.push_back(tempIn);
            } while (!iss.eof());
            accounts.push_back(temp);
            while (getline(cin, input)) {
                if (input.empty()) {
                    break;
                }
                iss.clear();
                iss.str(input);
                istringstream issIn(input);
                temp.clear();
                do {
                    int tempIn;
                    iss >> tempIn;
                    temp.push_back(tempIn);
                } while (!iss.eof());
                accounts.push_back(temp);
            }
            Solution73::setZeroes(accounts);
            Printer<int>::print(accounts);
        }
    }
};