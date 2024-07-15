#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans(numRows);

        if (numRows == 1)
        {
            ans = {{1}};
            return ans;
        }
        else if (numRows == 2)
        {
            ans = {{1}, {1, 1}};
            return ans;
        }
        else
        {
            ans[0] = {1};
            ans[1] = {1, 1};
            for (int i = 2; i < ans.size(); i++)
            {
                ans[i].resize(i + 1);
                ans[i][0]=ans[i][i]=1;
                for (int j = 1; j < i; j++)
                {
                    ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution pascal;

    vector<vector<int>> pas_tri;

    pas_tri = pascal.generate(5);

    for (int i = 0; i < pas_tri.size(); i++)
    {
        cout << "{ ";

        for (int j = 0; j < pas_tri[i].size(); j++)
        {
            cout << pas_tri[i][j] << " ";
        }

        cout << "}" << endl;
    }

    return 0;
}