#include<bits/stdc++.h>
using namespace std;

int countCompleteDayPairs(vector<int>& hours) 
{
    map<int,int> hours_map;

    for(int i=0 ; i < hours.size(); i++)
    {
        hours_map[i] = hours[i];
    }

    if(hours_map.empty())
    {
        return 0;
    }

    for (auto it = hours_map.begin(); it != hours_map.end(); ++it) 
    {
        cout << it->first << " : " << it->second <<endl;
    }

    int count=0;

    for(int i= 0 ; i < hours.size()-1 ; i++)
    {
        for(int j=i+1 ; j < hours.size(); j++)
        {
            if((hours_map[i]+hours_map[j])%24 == 0)
            {
                cout<<i<<" "<<j<<endl;
                cout<<hours_map[i]<<" "<<hours_map[j]<<endl;
                cout<<endl;
                count++;
            }
        }
    }

    return count;

}

int main()
{
    vector<int> hours{72,48,24,3,21};

    int count = countCompleteDayPairs(hours);
    cout<<count<<endl;
    return 0;
}