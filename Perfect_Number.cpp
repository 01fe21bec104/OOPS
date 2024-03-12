#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,temp,s=0,i;

    cout<<"enter n";
    cin>>n;
    temp=n;
    for(i=1;i<n;i++)
    {
       if ((n%i)==0)
       {
          s=s+i;
       }
    }
    if(temp==s)
        cout<<"perfectnumber";
    else
        cout<<"not";
}
