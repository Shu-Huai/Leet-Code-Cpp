#include <string>
#include <iostream>
#include <vector>
#include <sstream>


using namespace std;

[[maybe_unused]] void test2DVector() {
    string input;
    while (getline(cin, input)) {
        if (input.empty()) {
            break;
        }
        vector<vector<int>> num;
        istringstream iss(input);
        vector<int> temp;
        do {
            int tempIn;
            iss >> tempIn;
            temp.push_back(tempIn);
        } while (!iss.eof());
        num.push_back(temp);
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            iss.clear();
            iss.str(input);
            temp.clear();
            do {
                int tempIn;
                iss >> tempIn;
                temp.push_back(tempIn);
            } while (!iss.eof());
            num.push_back(temp);
        }
        cout << "Something." << endl;
    }
}