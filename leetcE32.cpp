#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) 
{
    vector<int> count_vec(26,0);
    int s_len = s.length();

    for(int i=0 ; i < s_len; i++)
    {
        count_vec[s[i]-'a']++;
    }

    for(int i=0 ; i < s_len; i++)
    {
        if(count_vec[s[i]-'a'] == 1)
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