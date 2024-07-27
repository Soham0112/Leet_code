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

ListNode* rotateRight_1(ListNode* &head, int k)
{
    ListNode * temp = head;
    ListNode * temp_head = head;

    while(temp->next->next != nullptr)
    {
        temp=temp->next;
    }

    temp_head = temp->next;
    temp->next->next = head;
    temp->next = nullptr;
    head = temp_head;

    return head;

}



ListNode* rotateRight(ListNode* head, int k) 
{
    if(head->next == nullptr || head == nullptr)
    {
        return head;
    }

    for(int i =1 ; i<=k ; i++)
    {
        rotateRight_1(head,k);
    }

    ListNode *current = head;
    while (current != nullptr)
    {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    return head;
    
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

    current = rotateRight(head2,1);
    while (current != nullptr)
    {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;


    return 0;
}