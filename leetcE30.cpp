#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
{
    map<int,int> nums1_map;
    map<int,int> ans_map;

    vector<int> ans;

    for(int i: nums1)
    {
        nums1_map[i]++;
    }

    for(int i: nums2)
    {
        if(nums1_map.find(i) != nums1_map.end())
        {
            ans_map[i]=i;
        }
    }
    
    for(auto it: ans_map)
    {
        ans.push_back(it.second);
    }

    return ans;
}



int main()
{
    vector<int> nums1{4,9,5};
    vector<int> nums2{9,4,9,8,4};

    vector<int> ans = intersection(nums1,nums2);

    for(int i : ans)
    {
        cout<<i<<" ";
    }

    return 0;
}