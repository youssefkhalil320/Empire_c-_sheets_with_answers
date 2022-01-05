#include<iostream>
using namespace std;

int main()
{
    int iter;
    int max;
    int sum =0;
    cin>>iter>>max;
    for(int i=0; i<iter; i++)
    {
        int n;
        cin>>n;
        if(n>max)
        {
            sum +=2;
        }
        else
        {
            sum+=1;
        }
    }
    cout<<sum;
}