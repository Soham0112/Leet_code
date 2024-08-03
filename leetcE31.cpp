#include<bits/stdc++.h>
using namespace std;

int findKeysWithValue(const map<int, int>& myMap, int value,int k) 
{
    vector<int> keys;
    for (const auto& pair : myMap) {
        if (pair.second == value) {
            keys.push_back(pair.first);
        }
    }

    for(int i: keys)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it = keys.begin();
    vector<int> :: iterator it2 = keys.begin()+1;

    while(it != keys.end()-1)
    {
        if(*it2 - *it <= k)
        {
            return 1;
        }
        else
        {
            it2++;
        }

        if(it2 == keys.end())
        {
            it++;
            it2=it;
            it2++;
        }
    }
    return 0;
}


bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    map<int, int> nums_map;
    int ans=0;

    for (int i = 0; i < nums.size(); i++)
    {
        nums_map[i] = nums[i];
    }

    sort(nums.begin(),nums.end());

    vector<int> :: iterator it = nums.begin();
    int temp=0;
    while (it != nums.end())
    {
        if (*it == *(it+1))
        {
            it++;
        }
        else if(*it != *(it+1))
        {
            ans=findKeysWithValue(nums_map,*it,k);
            if(ans == 1){return true;}
            it++;
        }
    }

    return false;
}

int main()
{
    vector<int> nums{1,2,3,1,2,3};
    cout<<"the answer is"<<containsNearbyDuplicate(nums,2)<<endl;
    return 0;
}