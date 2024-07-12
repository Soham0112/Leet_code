#include <iostream>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


void insertSorted(ListNode **head, int value)
{
    ListNode *newNode = new ListNode(value);
    ListNode *current = *head;
    ListNode *prev = nullptr;

    while (current != nullptr && current->val < value)
    {
        prev = current;
        current = current->next;
    }

    if (prev == nullptr)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        prev->next = newNode;
        newNode->next = current;
    }
}
class Solution 
{
    public:
        ListNode* deleteDuplicates(ListNode *head) 
        {

            ListNode* current= head;
            ListNode* prev = head;

            if(head == nullptr)
            {
                return head;
            }

            current=head->next;
            while(current != nullptr )
            {
                if(current->val == prev->val)
                {
                    current=current->next;
                    prev->next=current;
                }

                else
                {
                    current=current->next;
                    prev=prev->next;
                }
            }

            return head;
            
        }
};

int main() 
{
    Solution linked_list;

    ListNode * head = nullptr;
    insertSorted(&head, 1);
    insertSorted(&head, 2);
    insertSorted(&head, 3);
    insertSorted(&head, 2);
    insertSorted(&head, 3);

    ListNode* list3= nullptr;
    ListNode* tail=list3;
    list3 = linked_list.deleteDuplicates(head);
    return 0;

}