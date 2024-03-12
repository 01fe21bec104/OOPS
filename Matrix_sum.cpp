#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int arr1[20][20],arr2[20][20],i,j,r,c,s[20][20];
    cout<<"enter r and c"<<endl;
    cin>>r>>c;
    cout<<"enter the 1st array elements"<<endl;
   for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr1[i][j];
           cout<<arr1[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<"enter the 2nd array elements"<<endl;
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr2[i][j];
           cout<<arr2[i][j]<<" ";


        }
        cout<<endl;

    }
    cout<<"the result is "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          s[i][j]=arr1[i][j]+arr2[i][j];
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
