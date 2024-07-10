#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string equal_add(string &a ,string &b)
    {
        int carry=0;
        for(int i=b.size()-1; i>-1 ;i--)
        {
            if(a[i] == '1' && b[i] == '1')
            {
                if(carry != 0)
                {
                    b[i]='1';
                    carry =1;
                }
                else
                {
                    b[i]='0';
                    carry =1;
                }
            }

            else if((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
            {
                if(carry != 0)
                {
                    b[i]='0';
                    carry =1;
                }
                else
                {
                    b[i] ='1';
                }
            }

            else
            {
                if(carry != 0)
                {
                    b[i]='1';
                    carry -=1;
                }
                else
                {
                    b[i]='0';
                }
            }
        }
        if(carry==1)
        {
            cout<<"with carry"<<endl;
            string ans1 = '1'+ b;
            return ans1;
        }
        else
        {
            cout<<"no carry"<<endl;
            return b;
        }


        return b;

    }
    string addBinary(string &a, string &b) 
    {
        if (a.size() < b.size())
        {
            int diff=b.size()-a.size();
            for(int i=0; i<diff; i++)
            {
                a.insert(a.begin(),'0');
            }
            return equal_add(b, a);
        }
        else if (a.size() > b.size())
        {
            int diff=a.size()-b.size();
            for(int i=0; i<diff; i++)
            {
                b.insert(b.begin(),'0');
            }
            return equal_add(a, b);
        }
        else
        {
            return equal_add(a, b);
        }
    }
};

int main() 
{
    string a={"1"};
    string b={"11"};
    
    Solution str;
    string ans= str.addBinary(a,b);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    
}
