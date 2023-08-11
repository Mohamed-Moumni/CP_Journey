#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp;
        ListNode *ans = nullptr;

        temp = head;
        while (temp)
        {
            ListNode node(temp->val);
            node.next = ans;
            ans = &node;
            temp = temp->next;
        }
        return ans;
    }
};

int main(void)
{
    ListNode list(5);
    ListNode *temp;

    temp = &list;
    ListNode list2(9);
    list2.next = temp;
    temp = &list2;
    while (temp)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    return(0);
}