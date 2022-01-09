#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    long long num;
    cin>>num;
    if(floor(log2(num)) == ceil(log2(num)))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
 
}