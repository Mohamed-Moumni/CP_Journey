#include<iostream>

using namespace std;

class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        if (!head || !head->next)
            return nullptr;
        ListNode *slow = head;
        ListNode *fast = head->next->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};