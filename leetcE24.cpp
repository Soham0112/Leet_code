#include<bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    unordered_map<int, int> nums_map;

    for (int i = 0; i < nums.size(); i++)
    {
        nums_map[i + 1] = -1;
    }

    for (int i : nums)
    {
        nums_map[i]++;
    }

    nums.clear();

    unordered_map<int, int>::iterator it = nums_map.begin();

    while (it != nums_map.end())
    {
        if (it->second == -1)
        {
            nums.push_back(it->first);
        }

        it++;
    }

    return nums;
}

int main()
{
    vector<int> nums{1,2,2,4,4,4};
    nums=findDisappearedNumbers(nums);

    for(int i : nums)
    {
        cout<<i<<" ";
    }
    return 0;
}