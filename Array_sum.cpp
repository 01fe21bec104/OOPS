#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int arr[100],n,s=0,i;
    cout<<"enter n";
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
       s=s+arr[i];
    }
    cout<<s;
}
