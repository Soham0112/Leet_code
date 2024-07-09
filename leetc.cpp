#include <iostream>
#include<vector>

using namespace std;
class Solution {
public:

    int bin_search(vector<int>& nums,int start,int end, int target)
    {
        
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if(nums[mid]<target)
            {
                start = mid +1;
            }

            else if (nums[mid]>=target)
            {
                end = mid -1;
            }
        }
        return start;
    }

    int searchInsert(vector<int>& nums, int target) 
    {
        return bin_search(nums,0,nums.size()-1,target);
    }
};


int main() 
{
    vector<int> vec_ex={1,3,5,6,7};
    int target = 6;

    Solution solu_vec;
    int k=solu_vec.searchInsert(vec_ex,target);

    cout<<k<<endl;
    
    return 0;
}

