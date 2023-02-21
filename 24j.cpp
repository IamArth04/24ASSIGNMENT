#include<iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
float add(float a,float b)
{
    return a+b;
}
float add(int m,float n)
{
    return m+n;
}
int main()
{
    int x,y,m;
    float a,b,n;

    cout<<"Enter two int numbers: ";
    cin>>x>>y;
    cout<<"Enter two float numbers: ";
    cin>>a>>b;
    cout<<"Enter two numbers: ";
    cin>>m>>n;
    cout<<"Sum of 2 int numbers is "<<add(x,y)<<endl;
    cout<<"Sum of 2 float numbers is "<<add(a,b)<<endl;
    cout<<"Sum of 2 numbers is "<<add(m,n)<<endl;
    return 0;
}
/*#include <iostream>
float add(float a, float b);
using namespace std;

int main()
{
    float a,b;
    cout<<"Enter two number\n";
    cin>>a>>b;
    cout<<"Sum of these number is "<<add(a,b);
    return 0;
}
float add(float a, float b)
{
    return a+b;
}*/