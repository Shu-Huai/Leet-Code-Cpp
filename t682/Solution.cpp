#include <string>
#include <vector>

using namespace std;

class Solution682 {
public:
    static int calPoints(vector<string> &operations) {
        int result = 0;
        vector<int> stack;
        for (string &operation: operations) {
            if (operation == "+") {
                result += stack[stack.size() - 1] + stack[stack.size() - 2];
                stack.push_back(stack[stack.size() - 1] + stack[stack.size() - 2]);
            } else if (operation == "D") {
                result += 2 * stack[stack.size() - 1];
                stack.push_back(2 * stack[stack.size() - 1]);
            } else if (operation == "C") {
                result -= stack[stack.size() - 1];
                stack.pop_back();
            } else {
                result += stoi(operation);
                stack.push_back(stoi(operation));
            }
        }
        return result;
    }
};