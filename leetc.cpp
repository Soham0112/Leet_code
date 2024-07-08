#include <iostream>
#include<vector>

using namespace std;
class Solution 
{
    public:
        
        int removeDuplicates(vector<int>& nums) 
        {
            if(nums.empty())
            {
                return 0;
            }
            vector<int> temp={nums[0]};
            for(int i =0; i<nums.size()-1;i++)
            {

                if(nums[i]==nums[i+1])
                {
                    continue;
                }
                else
                {
                    temp.push_back(nums[i+1]);
                }

            }

            nums.clear();
            for(int i=0; i<=temp.size();i++)
            {
                nums.push_back(temp[i]);
                cout<<temp[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<=nums.size();i++)
            {
                cout<<nums[i]<<" ";
            }
            int k = temp.size();

            nums.shrink_to_fit();


            return k;
        }
};




int main() 
{
    vector<int> nums={1,1,1,2,2,3,3,3};

    for(int i=0; i <= nums.size();i++)
    {
        cout<<nums[i]<<endl;
    }

    Solution solu_vec;
    int k = solu_vec.removeDuplicates(nums);

    cout<<k<<endl;


    return 0;
}


