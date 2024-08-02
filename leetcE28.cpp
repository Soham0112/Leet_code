#include<bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) 
{
    int length=0,count1=0;

    unordered_map<char,int> s_map;
    for(char c :s)
    {
        s_map[c]++;
    }

    unordered_map<char,int> :: iterator it = s_map.begin();
    while(it != s_map.end())
    {
        if(it->second > 1 && (it->second)%2 != 0)
        {
            length += it->second - 1;
        }
        else if(it->second > 1 && (it->second)%2 == 0)
        {
            length += it->second;
        }
        it++;
    }

    bool run = true;
    it = s_map.begin();
    while(run && it != s_map.end())
    {
        if(it->second == 1 || it->second %2 != 0 )
        {
            count1 +=1;
        }

        if(count1>0)
        {
            run = false;
        }

        it++;
    }

    if(length == 0 && count1 ==1)
    {
        return 1;
    }


    return length+count1;


}

int main()
{
    string s = "ABCDA";
    cout<<longestPalindrome(s);
    return 0;
}