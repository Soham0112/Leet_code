#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> arr(n);

        int temp;
        temp = n;
        for (int i = 0; i <= n - k; i++)
        {
            arr[i] = temp;
            temp--;
        }

        temp = m;
        for (int i = n - 1; i >= n - m; i--)
        {
            arr[i] = temp;
            temp--;
        }
        if (arr[n - k + 1] && arr[n - m - 1])
        {

            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            return 0;
        }

        else
        {
            temp=m+1;
            for (int i = n - k + 1; i < n - m; i++)
            {
                arr[i] = temp;
                temp++;
            }
        }

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}