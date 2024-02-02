#include <iostream>
#include <functional>
#include "includes/ts.h"

using namespace std;
using FunctionPointer = function<void()>;

int main() {
    string input;
    cout << "力扣题号：" << endl;
    while (getline(cin, input)) {
        if (input.empty()) {
            break;
        }
        int i = stoi(input);
        cout << "给出输入：" << endl;
        unordered_map<int, FunctionPointer> functions = {
                {389,  &T389::test},
                {1768, &T1768::test},
                {58,   &T58::test},
                {58,   &T58::test},
                {242,  &T242::test},
                {283,  &T283::test},
                {459,  &T459::test},
                {709,  &T709::test},
                {1822, &T1822::test},
                {66,   &T66::test},
                {1502, &T1502::test},
                {896,  &T896::test},
                {13,   &T13::test},
                {657,  &T657::test},
                {1572, &T1572::test},
                {1672, &T1672::test},
                {1275, &T1275::test},
                {1523, &T1523::test},
                {73,   &T73::test},
                {50,   &T50::test},
                {1491, &T1491::test},
                {1041, &T1041::test},
                {2,    &T2::test},
                {682,  &T682::test}
        };
        auto it = functions.find(i);
        if (it != functions.end()) {
            FunctionPointer test = it->second;
            if (test) {
                test();
            } else {
                cout << "题号有误。" << endl;
                continue;
            }
        } else {
            cout << "题号有误。" << endl;
            continue;
        }
        cout << "退出本题" << endl;
        cout << "题号：" << endl;
    }
    cout << "退出力扣" << endl;
}