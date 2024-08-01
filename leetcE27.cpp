#include<bits/stdc++.h>
using namespace std;

int countCompleteDayPairs(vector<int>& hours) 
{
    int count=0;

    for(int i= 0 ; i < hours.size()-1 ; i++)
    {
        for(int j=i+1 ; j < hours.size(); j++)
        {
            if((hours[i]+hours[j])%24 == 0)
            {
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