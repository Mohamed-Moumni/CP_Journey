#include<iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){};
    ListNode(int x) : val(x), next(nullptr){};
    ListNode(int x, ListNode *next) : val(x), next(next){};
};

class Solution
{
public:
    ListNode *findMiddle(ListNode *head)
    {

        if (!head || !head->next)
            return nullptr;
        ListNode *slow = head;
        ListNode *fast = head->next->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->next;
    }

    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev_elem = nullptr;
        ListNode *curr_elem = head;
        ListNode *next_elem = nullptr;

        if (!head || !head->next)
            return head;

        while (curr_elem != nullptr)
        {
            next_elem = curr_elem->next;
            curr_elem->next = prev_elem;
            prev_elem = curr_elem;
            curr_elem = next_elem;
        }
        head = prev_elem;
        return (head);
    }
    int pairSum(ListNode *head)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int maxSum = 0;
        ListNode *middleElem;
        ListNode *reversedMiddle;

        middleElem = findMiddle(head);
        reversedMiddle = reverseList(middleElem);
        while (reversedMiddle != nullptr)
        {
            maxSum = max(maxSum, head->val + reversedMiddle->val);
            reversedMiddle = reversedMiddle->next;
            head = head->next;
        }
        return (maxSum);
    }
};

int main(void)
{
    Solution s;
    ListNode head(5);
    ListNode node1(4);
    ListNode node2(2);
    ListNode node3(1);

    head.next = &node1;
    node1.next = &node2;
    node2.next = &node3;

    cout << s.pairSum(&head) << endl;
    return (0);
}