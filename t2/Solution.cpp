#include <iostream>
#include "ListNode.h"

using namespace std;

class Solution2 {
public:
    static ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *p = l1;
        ListNode *q = l2;
        auto *result = new ListNode;
        ListNode *head = result;
        int carry = 0;
        while (p && q) {
            result->val = (p->val + q->val + carry) % 10;
            carry = p->val + q->val + carry > 9;
            result->next = p->next || q->next ? new ListNode : nullptr;
            result = p->next || q->next ? result->next : result;
            p = p->next;
            q = q->next;
        }
        while (p) {
            result->val = (p->val + carry) % 10;
            carry = p->val + carry > 9;
            result->next = p->next ? new ListNode : nullptr;
            result = p->next ? result->next : result;
            p = p->next;
        }
        while (q) {
            result->val = (q->val + carry) % 10;
            carry = q->val + carry > 9;
            result->next = q->next ? new ListNode : nullptr;
            result = q->next ? result->next : result;
            q = q->next;
        }
        if (carry) {
            result->next = new ListNode;
            result = result->next;
            result->val = carry;
        }
        return head;
    }
};