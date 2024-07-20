#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) 
{
    int ans=0;
    int count=0;

    for (int i : nums)
    {
        if (count == 0)
        {
            ans = i;
        }

        if(i == ans)
        {
            count+=1;
        }
        else
        {
            count-=1;
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