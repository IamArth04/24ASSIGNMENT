#include<iostream>
using namespace std;
int prime(int n)
{
    int flag=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)         //agar flag me 0 hai to vo prime nahi hai.
             flag=1;       //and agar flag me 1 hai to vo prime hai.
    }
    return flag;
}
int main()
{
    int x=7;
    if(prime(x)==0)
         cout<<"Number is prime";
    else 
        cout<<"Not prime";
    return 0;
}