#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    map<int, int> nums_map;
    vector<pair<int, int>> pair_vec;

    for (int i = 0; i < nums.size(); i++)
    {
        nums_map[i] = nums[i];
    }

    map<int, int>::iterator it = nums_map.begin();
    map<int, int>::iterator it2 = nums_map.begin();
    it2++;

    map<int, int>::iterator itend = nums_map.end();
    --itend;

    while (it != nums_map.end())
    {

        if (it->second == it2->second)
        {
            cout << it->first << " " << it2->first << endl;
            pair_vec.push_back({it->first, it2->first});
        }

        if (it2 == nums_map.end())
        {
            it++;
            if (it == itend)
            {
                it++;
            }
            it2 = it;
        }

        it2++;
    }

    for (auto pairs : pair_vec)
    {
        if (abs(pairs.first - pairs.second) <= k)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    return 0;
}