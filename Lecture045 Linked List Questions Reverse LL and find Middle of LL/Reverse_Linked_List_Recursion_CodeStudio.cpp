#include<bits/stdc++.h>
using namespace std;

void reverse(Node* &head, Node* curr, Node* prev)
{
    //! base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;
    
}

Node* reverseLinkedList(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);

    return head;
}