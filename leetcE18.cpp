#include<bits/stdc++.h>


using namespace std;

int hammingweight(int n)
{
    int hamming_weight=0;
    while(n>0)
    {
        if(n%2 != 0)
        {
            hamming_weight++;
        }
        cout<<hamming_weight<<endl;
        n=n/2;
    }

    return hamming_weight;
}
int main()
{
    int count=hammingweight(25);
    cout<<count<<endl;
    return 0;
}
