#include <iostream>
#include <vector>
#include <cmath>

using namespace std;



int main() 
{
    vector<int> digits ={9,9,9};
    if(digits[digits.size()-1]<9)
    {
        digits[digits.size()-1] +=1;
        for(int i =0; i <digits.size();i++)
        {
            cout<<"the number is:"<<digits[i]<<endl;
        }
        return 0;
    }
    else
    {
        for(int i=digits.size()-1; i>=0;i--)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
            }
            else
            {
                digits[i] +=1;
                for(int i =0; i <digits.size();i++)
                {
                    cout<<"the number is:"<<digits[i]<<endl;
                }
                return 0;
            }

        }
        digits.insert(digits.begin(),1);
    }

    for(int i =0; i <digits.size();i++)
    {
        cout<<"the number is:"<<digits[i]<<endl;
    }
    return 0;
}

