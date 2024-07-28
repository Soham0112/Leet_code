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


ListNode* deleteDuplicates(ListNode* head) 
{
    ListNode* dummy = new ListNode(0,head);

    ListNode* prev = dummy;
    ListNode* current = head;

    while(current->next != nullptr)
    {
        if(current->val == current->next->val)
        {
            if(current->next->next == nullptr)
            {
                prev->next=current->next->next;
                return dummy->next;
            }
            prev->next=current->next->next;
            current=prev->next;
        }
        else
        {
            prev=prev->next;
            current=current->next;
        }
    }

    return dummy->next;


   
}



int main()
{

    ListNode *head2 = new ListNode(1);
    insertAtTail(head2,1);
    insertAtTail(head2,2);
    insertAtTail(head2,2);
    insertAtTail(head2,3);
    // insertAtTail(head2,4);

    ListNode *current = head2;
    while (current != nullptr)
    {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    current = deleteDuplicates(head2);
    while (current != nullptr)
    {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;


    return 0;
}