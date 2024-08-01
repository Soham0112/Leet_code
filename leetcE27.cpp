#include<bits/stdc++.h>
using namespace std;

int countCompleteDayPairs(vector<int>& hours) 
{
    map<int,int> hours_map;

    for(int i=0 ; i < hours.size(); i++)
    {
        if(hours[i]%24 == 0 || hours[i]%12 == 0)
        {
            hours_map[i] = hours[i];
        }
    }

    for (auto it = hours_map.begin(); it != hours_map.end(); ++it) 
    {
        cout << it->first << " : " << it->second <<endl;
    }

    int count=0;

    map<int,int> :: iterator it = hours_map.begin();
    map<int,int> :: iterator it2 = hours_map.begin();
    it2++;

    while(it2 != hours_map.end() && it !=  hours_map.end())
    {
        if((it->second + it2->second)%24 == 0)
        {
            cout<<"1st"<<endl;
            count++;
            it2++;
        }
        else
        {
            it++;
            if(it->first == it2->first)
            {
                it2++;
            }
        }

        if(it2 == hours_map.end() && it != hours_map.end())
        {
            it++;
            it2=it;
            it2++;
        }
    }

    return count;

          


}

int main()
{
    vector<int> hours{12,12,30,24,24};

    int count = countCompleteDayPairs(hours);
    cout<<count<<endl;
    return 0;
}