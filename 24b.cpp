#include<iostream>
using namespace std;
int highestDigit (int x)
{
    int max=-1;
    while(x)
    {
        if(max < x%10)
             max=x%10;        //3454332%10=2 max=2 and isee number ko 3454332/10=34533 x=345433; next loop ke iteration me phir 345433%10=3 max=3 
            x=x/10;           // if max=3 current loop ka variable phle loop ke variable max=2 se bda hai to hum isko update kr denge max=2 se max=3 then phir hum and 345433/10=34543 x=34543 kr denge      
    }                         //; next loop ke iteration me phir 34543%10=3 max=3 iss max ko phir hum apne purane max=3 se compare krenge jo ki brabar hai to max=3 aa jayega phir hum 34543/10=3454 x=3454
    return max;               //; next phir se 3454%10=4 max=4 aa jayega aur isse purane max=3 se compare krenge aur humara nya max purane max=3 se bda hai isliye hum isse update kr denge max=4 again 3454/10=345 x=345
}                             //; next again 345%10=5 max=5 joki max=4 se bda hai to phir isse max=5 kr denge and again 345/10=34 x=34
int main()                    //; next again 34%10=4 max=4 jo ki max=5 se xhhota hai to max=5 and again 34/10=3 x=3
{                             //; next again 3%10=3 max=3 jo ki max=5 se chhota hai to max=5 and again 3/10=0 x=0 so ans is max=5
    int x;                             //iske jaise h 394 liye humne 394%10=4 max=4 and 394/10=39 x=39 ; next 39%10=9 max=9 joki max=4 se bda hai  isliye max=9 and 39/10=3 ; 3%10=3 max=3 but max=9 and 3/10=0 so ans is 9
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Highest digit is "<<highestDigit(x);
    return 0;
}