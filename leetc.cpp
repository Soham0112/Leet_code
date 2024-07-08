#include <iostream>
#include<vector>

using namespace std;
class Solution 
{
    public:
        
        int removeElement(vector<int>& nums, int val) 
        {
            if(nums.empty())
            {
                return 0;
            }
            
            for(int i =0; i<nums.size();i++)
            {
                auto it =find(nums.begin(), nums.end(), 3);
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
    vector<int> nums={0,1,2,2,3,0,4,2};

    for(int i=0; i <= nums.size();i++)
    {
        cout<<nums[i]<<endl;
    }

    Solution solu_vec;
    int k = solu_vec.removeElement(nums,2);

    cout<<k<<endl;


    return 0;
}


