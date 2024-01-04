#include<iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){} * ListNode(int x) : val(x), next(nullptr){} * ListNode(int x, ListNode *next) : val(x), next(next){}
};

class Solution
{
    public:
        ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
        {
            ListNode *head = new ListNode();
            ListNode *current = head;
            int rest = 0;
            int sum = 0;

            while (l1 || l2 || rest)
            {
                sum = 0;
                if (l1)
                {
                    sum += l1->val;
                    l1 = l1->next;
                }
                if (l2)
                {
                    sum += l2->val;
                    l2 = l2->next;
                }
                if (rest)
                {
                    sum += rest;
                }
                rest = sum / 10;
                current->next = new ListNode(sum % 10);
                current = current->next;
            }
            return head->next;
    }
};

int main(void)
{
    Solution s;
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(3);

    ListNode *list2 = new ListNode(4);
    list2->next = new ListNode(5);
    list2->next->next = new ListNode(6);
    ListNode *ans = s.addTwoNumbers(list1, list2);
    cout << "---- List1 ----" << endl;
    while (list1)
    {
        cout << list1->val << " ";
        list1 = list1->next;
    }
    cout << "\n" << "---- List2 ----" << endl;
    while (list2)
    {
        cout << list2->val << " ";
        list2 = list2->next;
    }
    cout << endl;
    while (ans)
    {
        cout << ans->val << endl;
        ans = ans->next;
    }
    return (0);
}