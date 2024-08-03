#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> nums_map;

    for (int i = 0; i < nums.size(); i++)
    {
        if(nums_map.count(nums[i]))
        {
            if(i-nums_map[nums[i]] <= k)
            {
                return true;
            }
        }
        nums_map[nums[i]] = i;
        
    }

    return false;
    
}

int main()
{
    vector<int> nums{1,2,3,1,2,3};
    cout<<"the answer is"<<containsNearbyDuplicate(nums,2)<<endl;
    return 0;
}