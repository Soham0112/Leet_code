#include <iostream>
#include <vector>

using namespace std;
int fibo(int n , vector<int> & memo_arr)
{
    if(n <= 1)
    {
        return 1;
    }

    if(memo_arr[n] != -1)
    {
        return memo_arr[n];
    }

    memo_arr[n]= fibo(n-1,memo_arr) + fibo(n-2,memo_arr);

    return memo_arr[n];
}

int climbStairs(int n) 
{
    vector<int> memo_arr(n+1);

    for(int i=0; i<=n;i++)
    {
        memo_arr[i]=-1;
    }
    return fibo(n,memo_arr);
}


int main() 
{

    cout<<"the number of ways is: "<<climbStairs(22)<<endl;
    return 0;

}
