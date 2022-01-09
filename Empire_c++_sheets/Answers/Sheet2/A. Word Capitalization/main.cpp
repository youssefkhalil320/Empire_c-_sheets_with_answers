#include<iostream>
using namespace std;

int main()
{
    string my_str;
    cin>>my_str;
    if(my_str[0]>90)
    {
        my_str[0]=my_str[0]-32;
    }
    cout<<my_str;
}