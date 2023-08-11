#include <bits/stdc++.h>

using namespace std;

SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *res = nullptr;
    SinglyLinkedListNode *temp;
    
    temp = llist;
    while (temp != nullptr)
    {
        SinglyLinkedListNode * node= malloc(sizeof(SinglyLinkedListNode));
        node->next = res;
        res = node;
        temp = temp->next;
    }
    return res;
}

int main(void)
{
    return (0);
}