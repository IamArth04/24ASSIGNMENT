#include<iostream>
using namespace std;
float max(float a,float b)
{
    float x;
    (a>b)?x=a:x=b;
    return x;
}
int main()
{
    
    float a,b;
    
    cout<<"Enter two nmbers: ";
    cin>>a>>b;

    
    cout<<"Maximum of given numbers is "<<max(a,b)<<endl;
    return 0;
}