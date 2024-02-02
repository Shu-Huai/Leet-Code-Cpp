#include <iostream>
#include "Solution.cpp"
#include <sstream>

using namespace std;

class T2 {
public:
    static void test() {
        string input;
        while (getline(cin, input)) {
            if (input.empty()) {
                break;
            }
            auto *l1 = new ListNode;
            ListNode *p = l1;
            istringstream iss(input);
            do {
                iss >> p->val;
                p->next = iss.eof() ? nullptr : new ListNode;
                p = iss.eof() ? p : p->next;
            } while (!iss.eof());
            getline(cin, input);
            auto *l2 = new ListNode;
            p = l2;
            iss.clear();
            iss.str(input);
            do {
                iss >> p->val;
                p->next = iss.eof() ? nullptr : new ListNode;
                p = iss.eof() ? p : p->next;
            } while (!iss.eof());
            ListNode *result = Solution2::addTwoNumbers(l1, l2);
            while (result) {
                cout << result->val << " ";
                result = result->next;
            }
            cout << endl;
        }
    }
};