#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
 

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    int l1_len = list1.size() , l2_len = list2.size(), sum= INT_MAX;
    unordered_map<string,int> list_map;
    vector<string> ans_index;

    for(int i=0; i < l1_len ; i++)
    {
        list_map[list1[i]]=i;
    }

    for(int i=0; i < l2_len ; i++)
    {
        if(list_map.find(list2[i]) != list_map.end())
        {
            if(i + list_map[list2[i]] < sum)
            {
                sum=i + list_map[list2[i]];
                ans_index.clear();
                ans_index.push_back({list2[i]});
            }
            else if(i + list_map[list2[i]] == sum)
            {
                ans_index.push_back({list2[i]});
            }
        }
    }

    return ans_index;
}
int main()
{
    vector<string> list1{"Shogun","Tapioca Express","Burger King","KFC"}; 
    vector<string> list2{"Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"};

    vector<string> ans= findRestaurant(list1,list2);

    for(string s : ans)
    {
        cout<<s<<" ";
    }
    return 0;
}