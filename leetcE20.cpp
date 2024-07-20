#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) 
{
    unordered_map<int,int> counts;
    int ans=0;
    float nums_size = nums.size();

    for(int i : nums)
    {
        counts[nums[i]]++;
        if( counts[nums[i]] >= ceil(nums_size/2.0f) )
        {
            ans=i;
            break;
        }
    }

    return ans;
}


int main()
{
    vector<int> nums{1,1,2,2,1,2,2};

    cout<<majorityElement(nums)<<endl;
    return 0;
}