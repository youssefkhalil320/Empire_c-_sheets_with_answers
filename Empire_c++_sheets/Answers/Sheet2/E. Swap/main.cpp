#include<iostream>
using namespace std;
 
void swap(long &x, long &y)
{
    long temp = x;
    x=y;
    y=temp;
}
int main()
{
 long num1,num2;
 cin>>num1>>num2;
 swap(num1,num2);
 cout<<num1<<" "<<num2<<endl;
}