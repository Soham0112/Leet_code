#include<bits/stdc++.h>
using namespace std;


int bin_sea(vector<int> nums, int start, int end)
{
    int mid = start + (end-start)/2;

    if(nums[mid]< nums[mid-1] && nums[mid]<nums[mid+1])
    {
        return nums[mid];
    }

    if(nums[mid]>nums[0] && nums[mid]>nums[nums.size()-1])
    {
        start=mid;
        end=end;
        return bin_sea(nums,start,end);
    }
    else
    {
        start=start;
        end=mid;
        return bin_sea(nums,start,end);
    }

    
}
int findMin(vector<int>& nums) 
{
    int s= nums.size();
    if(s==1)
    {
        return nums[0];
    }    

    if(nums[0]<nums[1] && nums[0]<nums[nums.size()-1])
    {
        return nums[0];
    }
    else if(nums[nums.size()-1]<nums[nums.size()-2] && nums[nums.size()-1]<nums[0])
    {
        return nums[nums.size()-1];
    }

    return bin_sea(nums,0,nums.size()-1);
}


int main()
{
    int ans=0;

    vector<int> nums{7,8,9,0,1,2,3,4,5,6};

    ans=findMin(nums);

    cout<<ans<<endl;
    return 0;
}
