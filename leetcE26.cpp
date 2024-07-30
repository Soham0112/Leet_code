#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) 
{
    if(s.size() == t.size())
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        unordered_map<string,int> anagram;

        anagram[s]=1;
        if(anagram.find(t) != anagram.end())
        {
            return true;
        }

        return false;
    }

    return false;

}


int main()
{
    string s="anagram";
    string t="naamgrt";

    cout<<isAnagram(s,t)<<endl;
    return 0;
}