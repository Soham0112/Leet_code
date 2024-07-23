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
}



ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    ListNode* l3 = new ListNode();

    int carry=0;

    while(l1 != nullptr || l2 != nullptr)
    {
        cout<<"this is working"<<endl;
        int temp_sum= (l1->val + l2->val) % 10;
        insertAtTail(l3, (temp_sum+carry));

        carry = (l1->val + l2->val) / 10;
        l1=l1->next;
        l2=l2->next;
    }



    return l3;
}


int main()
{
    ListNode *head1 = new ListNode(1);                     
    head1->next = new ListNode(2, new ListNode(3, nullptr)); 


    ListNode *head2 = new ListNode(4);
    head2->next = new ListNode(5, new ListNode(6, nullptr));


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