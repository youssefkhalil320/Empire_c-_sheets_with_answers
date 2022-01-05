#include<iostream>
#include <ctype.h>
using namespace std;

int main()
{
    string first_string;
    string second_string;
    int counter =0;
    cin>>first_string>>second_string;
    int len = first_string.length();
    for(int i=0; i<len;i++)
    {
        if(tolower(first_string[i]) != tolower(second_string[i]))
        {
            if(tolower(first_string[i]) > tolower(second_string[i]))
            {
                cout<<1;
                break;
            }
            else
            {
                cout<<-1;
                break;
            }
        }
        else
        {
            counter+=1;
        }

    }
    if(counter == len)
    {
        cout<<0;
    }
}