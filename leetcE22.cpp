#include<bits/stdc++.h>
using namespace std;


int splitting_num(int n1)
{
    int ans =0;
    string s= to_string(n1);

    for(int i=1 ; i <= s.size();i++)
    {
        int s1= s[s.size()-i] - '0';
        ans += pow(s1,2);
    }

    return ans;
}

bool isHappy(int n) 
{
    unordered_map<int,int> nums;

    bool run = true;
    while(run)
    {
        if(nums.find(splitting_num(n)) != nums.end())
        {
            return false;
        }
        nums[splitting_num(n)]=1;
        n=splitting_num(n);

        if(splitting_num(n) == 1)
        {
            return true;
        }
        
    }
}
int main()
{
    int n1= 2, m1=19;

    cout<<isHappy(m1)<<endl;
    cout<<isHappy(n1)<<endl;

    return 0;
}