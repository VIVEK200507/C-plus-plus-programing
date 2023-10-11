#include<iostream>
using namespace std;
int main()
{
    int a,b,sum;
    cout<<"Enter the value of a and b \n";
    cin>>a>>b;
    sum=a+b;
    cout<<"Sum of the a and b is="<<sum<<"\n";
    if(sum>20)
    {
        cout<<"sum is greater than 20 \n";
    }
    else if (sum>10)
    {
        cout<<"sum is greater than 10 \n";

    }
    else
    {
        cout<<"sum is less than 10 \n";
    }
    return 0;
    

}