#include<iostream>
using namespace std;

int main()
{
    long len;
    cin>>len;
    string str;
    cin>>str;
    long ant=0;
    long dan=0;

    for(long i=0; i <len; i++)
    {
        if(str[i]=='A')
        {
            ant+=1;
        }
        else
        {
            dan+=1;
        }
    }
    if(ant > dan)
    {
        cout<<"Anton";
    }
    else if( dan > ant )
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}