#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T1275 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            vector<vector<int>> moves;
            istringstream iss(input);
            vector<int> temp;
            do {
                int tempIn;
                iss >> tempIn;
                temp.push_back(tempIn);
            } while (!iss.eof());
            moves.push_back(temp);
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
                moves.push_back(temp);
            }
            cout << Solution1257::tictactoe(moves) << endl;
        }
    }
};