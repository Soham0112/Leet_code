#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x=4;
    int *ptr,**ptr;
    ptr=&x;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<**ptr<<endl;
    cout<<*ptr<<endl;   // *ptr is basically the value of x
    cout<<ptr<<endl;    // ptr is basically the address of x
    cout<<&ptr<<endl;   // &ptr is basically address of ptr
    cout<<&*ptr<<endl;  // & *ptr = & x basically address of x
    cout<<*&ptr<<endl;  // * &ptr is value at address ptr i.e address of x
    cout<<"end of results"<<endl;

    return 0;
}   

