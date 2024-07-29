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

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
    unordered_map<ListNode* , int> node_map;

    ListNode* pa = headA;
    while(pa != nullptr)
    {
        node_map[pa]=1;
        pa = pa->next;
    }

    pa=headB;
    while(pa != nullptr)
    {
        if(node_map.find(pa) != node_map.end())
        {
            return pa;
        }
        pa=pa->next;
    }

    return nullptr;
}
int main()
{
    return 0;
}