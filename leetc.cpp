#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        long long int num=0;
        string str;
        switch (digits[digits.size()-1])
        {
        case 9:
            for(int i=digits.size()-1; i>=0 ;i--)
            {
                num += digits[i] * (pow(10,(digits.size()-1)-i));
            }
            num += 1;
            str = to_string(num);
            digits.clear();
            for (char c : str) 
            {
                digits.push_back(c - '0');
            }
            return digits;
        
        default:
            cout<<"default is working";
            digits[digits.size()-1]+=1;
        }

        return digits;
        
    }
};

int main() 
{
    vector<int> digits ={9};

    Solution vec_dig;
    digits=vec_dig.plusOne(digits);

    for(int i=0; i < digits.size();i++)
    {
        cout<<digits[i]<<' ';
    }
    return 0;
}
