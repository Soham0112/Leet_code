#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insertAtTail(ListNode* &head, int value) 
{
    ListNode* newNode = new ListNode(value);
    
    if(head == nullptr) 
    {
        head = newNode;
        return;
    }

    ListNode* temp = head;
    while(temp->next != nullptr)
    {
        temp=temp->next;
    }

    temp->next=newNode;
}

ListNode* swapPairs(ListNode* head) 
{
    if(head == nullptr)
    {
        return nullptr;
    }

    if(head->next == nullptr)
    {
        return head;
    }

    ListNode* newHead = head->next;
    head->next = newHead->next;
    newHead->next = head;

    head->next = swapPairs(head->next);

    return newHead;

    
}

int main()
{

    ListNode *head2 = new ListNode(1);
    insertAtTail(head2,2);
    insertAtTail(head2,3);
    insertAtTail(head2,4);
    insertAtTail(head2,9);

    ListNode *current = head2;
    while (current != nullptr)
    {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    current = swapPairs(head2);
    while (current != nullptr)
    {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;


    return 0;
}