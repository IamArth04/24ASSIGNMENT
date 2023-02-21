#include<iostream>
using namespace std;
int fib(int n)
{
    int f1=1,f2=1,temp;
    if(n<=2) 
        return 1;

    for(int i=3;i<=n;i++)
    {
        temp=f1+f2;
        f1=f2;
        f2=temp;
    }
    return f2;
}
int main()
{
    int n,flag=0;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; ;i++)
    {
        int value=fib(i);
        printf("%d ",value);
        if(n==value)
        {
            flag=1;
            break;
        }
        if(value>n)
            break;
    }
    printf("\n");
    if(flag==1)
        cout<<"Number is in fibnocci";
    else 
        cout<<"Number is not in fibnocci";
    return 0;
}