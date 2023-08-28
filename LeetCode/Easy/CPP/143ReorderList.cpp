/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* Prev = nullptr;
        ListNode* Curr = head;
        ListNode* Next = nullptr;
        while(Curr)
        {
            Next = Curr->next;
            Curr->next = Prev;
            Prev = Curr;
            Curr = Next;
        }
        return Prev;
    }

    ListNode*   MergeList(ListNode* list1, ListNode* list2)
    {
        ListNode* tmp1 = list1;
        ListNode* tmp2 = list2;
        ListNode*   Prev;
        ListNode*   Next;
        ListNode*   save;

        while (tmp1 and tmp1->next and tmp2)
        {
            Prev = tmp1;
            Next = tmp1->next;
            save = tmp2->next;
            Prev->next = tmp2;
            tmp2->next = Next;
            tmp1 = Next;
            tmp2 = save;
        }
        tmp1->next = tmp2;
        return list1;
    }

    void reorderList(ListNode* head) {
       ListNode* fast = head;
       ListNode* slow = head;
       ListNode* prev;

       while (true)
       {
           if (fast != nullptr and fast->next != nullptr)
           {
               fast = fast->next->next;
               prev = slow;
               slow = slow->next;

           }
           else
           {
               break ;
           }
       }
       slow = reverseList(slow);
       if (slow != head)
       {
           prev->next = nullptr;
           head = MergeList(head, slow);
       }
    }
};
