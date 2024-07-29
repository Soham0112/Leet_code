#include<bits/stdc++.h>
using namespace std;

struct ListNode 
{
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

ListNode* modifiedList(vector<int>& nums,ListNode* head) 
{
    unordered_map<int,int> nums_map;

    for(auto it:nums)
    {
        nums_map[it]=2;
    }


    ListNode* dummy = new ListNode(-1,head);
    ListNode* temp = head;
    ListNode* prev = dummy;


    while(temp != nullptr)
    {
        if(nums_map.find(temp->val) != nums_map.end())
        {
            temp=temp->next;
        }
        else
        {
            prev->next=temp;
            prev=temp;
            temp=temp->next;
        }
    }

    prev->next=nullptr;

    return dummy->next;

}

int main()
{
    vector<int> nums{1,2,3};

    ListNode *head2 = new ListNode(3);
    insertAtTail(head2,4);
    insertAtTail(head2,1);
    insertAtTail(head2,4);
    insertAtTail(head2,1);
    insertAtTail(head2,5);
    insertAtTail(head2,2);

    ListNode *head = head2;
    while (head != nullptr)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;

    head = modifiedList(nums,head2);
    while (head != nullptr)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;


    return 0;
}