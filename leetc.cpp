#include <iostream>
#include <string>

using namespace std;

class Solution
{
    public:
        int romanToInt(string s) 
        {
            int value=0;

            for(int i = 0; i < s.size();i++)
            {
                switch (s[i])
                {
                case 'M':
                    value += 1000;
                    break;

                case 'D':
                    value+=500;
                    break;

                case 'C':
                    if(s[i+1]=='M')
                    {
                        value+=900;
                        i++;
                        continue;
                    }
                    else if (s[i+1]=='D')
                    {
                        value+=400;
                        i++;
                        continue;
                    }
                    else
                    {
                        value += 100;
                    }
                    break;

                case 'L':
                    value+=50;
                    break;
                
                case 'X':
                    if(s[i+1]=='C')
                    {
                        value+=90;
                        i++;
                        continue;
                    }
                    else if (s[i+1]=='L')
                    {
                        value+=40;
                        i++;
                        continue;
                    }
                    else
                    {
                        value += 10;
                    }
                    break;

                case 'V':
                    value+=5;
                    break;

                case 'I':
                    if(s[i+1]=='X')
                    {
                        value+=9;
                        i++;
                        continue;
                    }
                    else if (s[i+1]=='V')
                    {
                        value+=4;
                        i++;
                        continue;
                    }
                    else
                    {
                        value += 1;
                    }
                    break;


                default:
                    break;
                }
                
                
            }
            return value;
        }
};

int main()
{
  Solution solution; 
  string s="LVIII";
  int value = solution.romanToInt(s); 
  cout<<"the value of string is"<<value<<endl;
  return 0;

  
}

