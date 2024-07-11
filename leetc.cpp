#include <iostream>
#include <vector>
#include <string>

using namespace std;


int square_root(int x,int low,int high)
{
    if (x == 1)
    {
        return 1;
    }
    int mid = low+(high - low) / 2;
    if (mid * mid == x)
    {
        return mid; 
    }
    else if ((mid + 1) * (mid + 1) > x && (mid - 1) * (mid - 1) < x)
    {
        return mid-1; 
    }
    else if (mid * mid < x)
    {
        cout<<x<<" "<<mid<<" "<<high<<endl;
        return square_root(x, mid, high);
    }
    else
    {
        return square_root(x, low, mid);
    }
}


int main() 
{
    int sqr_rt=square_root(25,0,25);
    cout<<"sqaure root is "<<sqr_rt<<endl;
    return 0;

}
