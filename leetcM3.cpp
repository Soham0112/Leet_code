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

int length_ll(ListNode* head)
{
    int length =0;
    while(head!=nullptr)
    {
        head=head->next;
        length++;
    }

    return length;
}


ListNode* removeNthFromEnd(ListNode* head, int n) 
{
    if(head==nullptr && n>0)
    {
        return nullptr;
    }

    ListNode* prev = head;
    int diff=length_ll(head)-n;
    while(diff > 0)
    {
        prev=prev->next;
        diff--;
    }

    if(prev==head)
    {
        head=prev->next;
        delete prev;
    }
    else if(prev->next == nullptr)
    {
        cout<<2<<endl;
        ListNode* temp = head;
        while(temp->next != prev)
        {
            temp=temp->next;
        }
        cout<<temp->val<<endl;
        prev=temp;
        prev->next=nullptr;
        return head;
    }
    else
    {
        ListNode* temp = head;
        while(temp->next != prev)
        {
            temp=temp->next;
            diff--;
        }
        
        // cout<<prev->val<<endl;

        // ListNode* current =prev->next;
        // cout<<current->val<<endl;

        temp->next = prev->next;
        // delete current;
    }

    

    return head;

}



int main()
{

    ListNode *head2 = new ListNode(1);
    insertAtTail(head2,2);
    // insertAtTail(head2,3);
    // insertAtTail(head2,4);
    // insertAtTail(head2,9);

    ListNode *current = head2;
    while (current != nullptr)
    {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    current = removeNthFromEnd(head2,1);
    while (current != nullptr)
    {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;


    return 0;
}