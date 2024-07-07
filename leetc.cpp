#include <iostream>
#include <string>

using namespace std;

class Solution
{
    public:
        bool isValid(string s) 
        {
            if(s.size()%2 != 0 )
            {
                cout<<"count"<<endl;
                return false;
            }
            int a=0;
            for(int i=0 ; i < s.size(); i++)
            {
                if(s[i] == '[' || s[i] == '{' || s[i] == '(')
                {
                    a+=1;
                }
                else
                {
                    a-=1;
                }
            }
            if(a>0 || a<0)
            {
                cout<<"pairity"<<endl;
                return false;
            }
            if(s.size()==1 || s[s.size()-1]== '[' || s[s.size()-1]== '(' || s[s.size()-1]== '{' || s[0]==')' || s[0]==']' || s[0]=='}')
            {
                return false;
            }
            for(int i =0 ; i < s.size(); i++)
            {
                switch (s[i])
                {
                case '(':
                    if(s[i+1] == ']' || s[i+1]=='}')
                    {
                        cout<<1<<endl;
                        return false;
                    }
                    else if (s[i+1]==')')
                    {
                        break;
                    }
                    
                    else if (s[s.size()-i-1] == ']' || s[s.size()-i-1] == '}')
                    {
                        cout<<2<<endl;
                        return false;
                    }
                    else
                    {
                        break;
                    }

                case '{':
                    if(s[i+1] == ']' || s[i+1]==')')
                    {
                        cout<<3<<endl;
                        return false;
                    }
                    else if (s[i+1]=='}')
                    {
                        break;
                    }
                    else if (s[s.size()-i-1] == ']' || s[s.size()-i-1] == ')')
                    {
                        cout<<4<<endl;
                        return false;
                    }
                    else
                    {
                        break;
                    }

                case '[':
                    if(s[i+1] == ')' || s[i+1]=='}')
                    {
                        cout<<5<<endl;
                        return false;
                    }
                    else if (s[i+1]==']')
                    {
                        break;
                    }
                    else if (s[s.size()-i-1] == '}' || s[s.size()-i-1] == ')')
                    {
                        cout<<6<<endl;
                        return false;
                    }
                    else
                    {
                        break;
                    }
                
                default:
                    break;
                }
            }
            return true;
        }

};

int main()
{
  Solution solution; 
  string s="(([]){})";
  bool value = solution.isValid(s); 
  cout<<"the value of string is "<< value <<endl;
  return 0;

  
}

