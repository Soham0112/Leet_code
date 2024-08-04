#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) 
{
    unordered_map<char,int> count_map;
    int s_len = s.length();

    for(int i=0 ; i < s_len; i++)
    {
        count_map[s[i]]++;
    }

    for(int i=0 ; i < s_len; i++)
    {
        if(count_map[s[i]] == 1)
        {
            cout<<s[i]<<endl;
            return i;
        }
    }

    return -1;

}

int main()
{
    string s ="leetcode";
    firstUniqChar(s);
    return 0;
}