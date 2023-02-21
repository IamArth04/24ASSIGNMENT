#include<iostream>
using namespace std;
int add(int , int, int);
int add(int a,int b,int c=0)
{
    return a+b+c;
}
int main()
{
    cout<<"Addition of 2 number is "<<add(5,2)<<endl;
    cout<<"Addition of 3 number is "<<add(4,8,2);
    return 0;
}