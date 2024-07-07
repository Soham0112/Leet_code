#include <iostream>

using namespace std;

struct ListNode 
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        

       
        if(list1 == nullptr)
        {
            return list2;
        }

        else if(list2 == nullptr)
        {
            return list1;
        }

        ListNode* list3= new ListNode();
        ListNode* tail=list3;

        while(list1 !=nullptr && list2 !=nullptr)

        {
            if(list1->val <= list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }

            else
            {
                tail->next = list2;
                list2 = list2->next;
            }

            tail=tail->next;
        }

        if(list1 == nullptr)
        {
            tail->next = list1;
        }
        else
        {
            tail->next = list2;
        }
        

        return list3->next;
    }

};

int main() 
{
    ListNode* list1_head = new ListNode(5);
    list1_head->next = new ListNode(15);
    list1_head->next->next = new ListNode(25);

    
    ListNode* list2_head = new ListNode(3);
    list2_head->next = new ListNode(13);
    list2_head->next->next = new ListNode(23);

    Solution list3;

    ListNode * ans=list3.mergeTwoLists(list1_head,list2_head);

    int count = 0;
    ListNode* temp = ans;
    while (temp != nullptr) 
    {
        count++;
        temp = temp->next;
    }

    // Create an array to store the merged elements
    int merged_array[count];

     // Iterate through the merged list and populate the array
    int i = 0;
    temp = ans;
    while (temp != nullptr) 
    {
        merged_array[i++] = temp->val;
        temp = temp->next;
    }

  // Print the merged elements in the array
    for (int i = 0; i < count; i++) 
    {
        cout << merged_array[i] << " ";
    }
    cout << endl;

    return 0;



}

