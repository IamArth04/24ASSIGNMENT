#include<iostream>
using namespace std;
int pow(int x, int y)
{
    int a=1;
    while(y--)
    {
        a=a*x;
    }
    return a;
}
int main()
{

    int x,y;
    cout<<"Enter 2 numbers: ";
    cin>>x>>y;
    cout<<x<<" power "<<y<<" is "<<pow(x,y);
    return 0;
}
