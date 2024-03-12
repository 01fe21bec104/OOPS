#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n1,n2,n3;
  cout<<"enter the three numbers to be compared";
  cin>>n1>>n2>>n3;
  if(n1>n2 && n1>n3)
  {
      cout<<"greatest number is:"<<n1;
  }
  else if(n2>n3 && n2>n1)
  {
      cout<<"greatest number is:"<<n2;
  }
  else
    cout<<"greatest number is:"<<n3;
}
