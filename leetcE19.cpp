#include<bits/stdc++.h>
using namespace std;

void insert_func(vector<int>& ans,int val)
{
    if(ans.size()<3)
    {
        auto it2 = lower_bound(ans.begin(), ans.end(), val);
        ans.insert(it2, val);
        return;
    } 
    else
    {
        auto it2 = lower_bound(ans.begin(), ans.end(), val);
        ans.insert(it2, val);
        ans.erase(ans.begin());
        return;
    }
}

int thirdMax(vector<int>& nums) 
{
    vector<int> ans;

    for(int i=0 ; i<nums.size() ; i++)
    {
        auto it = find(ans.begin(),ans.end(),nums[i]);
        if(it == ans.end())
        {
            insert_func(ans,nums[i]);
        }
    }   
    
    if(ans.size()>2 || ans.size()==1)
    {
        return ans[0];
    }
    else if(ans.size()==2)
    {
        return ans[1];
    }
}

int main()
{
    vector<int> nums{2,1,3,2,4};
    int ans1=thirdMax(nums);

    cout<<ans1<<endl;
    return 0;
}