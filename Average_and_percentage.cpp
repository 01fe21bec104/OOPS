#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int m1,m2,m3,m4,m5;
    int sum;
    float avg,percent;
    cout<<"enter 5 subject marks";
    cin>>m1>>m2>>m3>>m4>>m5;
    sum=m1+m2+m3+m4+m5;
    cout<<"\n sum:"<<sum;
    avg=sum/5;
    cout<<"\n avg:"<<avg;
    percent=(sum*100)/500;
    cout<<"\n percent :"<<percent;
}
