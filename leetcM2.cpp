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



ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    ListNode* l3 = new ListNode(-1);
    ListNode* l3p = l3;

    int carry=0;

    while(l1 != nullptr && l2 != nullptr)
    {
        cout<<"this is working"<<endl;
        int temp_sum= (l1->val + l2->val+carry) % 10;
        insertAtTail(l3, (temp_sum));

        carry = (l1->val + l2->val+carry) / 10;
        l1=l1->next;
        l2=l2->next;
    }

    while(l1 != nullptr)
    {
        cout<<"this is working 1"<<endl;
        int temp_sum= (l1->val+carry) % 10;
        insertAtTail(l3, (temp_sum));

        carry = (l1->val+carry) / 10;
        l1=l1->next;
    }

    while(l2 != nullptr)
    {
        cout<<"this is working 2"<<endl;
        int temp_sum= (l2->val+carry) % 10;
        insertAtTail(l3, (temp_sum));

        carry = (l2->val+carry) / 10;
        l2=l2->next;
    }

    if(carry>0)
    {
        insertAtTail(l3,carry);
    }



    return l3->next;
}


int main()
{
    ListNode *head1 = new ListNode(3);                     
    insertAtTail(head1,7);
    // insertAtTail(head1,9);


    ListNode *head2 = new ListNode(9);
    insertAtTail(head2,2);
    // insertAtTail(head2,9);
    // insertAtTail(head2,9);
    // insertAtTail(head2,9);


    ListNode *current = head1;
    while (current != nullptr)
    {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;


    current = head2;
    while (current != nullptr)
    {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    ListNode *head3 = addTwoNumbers(head1,head2);
    current = head3;
    while (current != nullptr)
    {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    return 0;
}