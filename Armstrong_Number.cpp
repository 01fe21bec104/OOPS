#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,temp,s=0;
    cout<<"enter the number";
    cin>>n;
    temp=n;
    while(n>0)
    {
        int r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(temp==s)
    {
        cout<<"given number is armstrong";
    }
    else{
        cout<<"given number is not armstrong";
    }
}
