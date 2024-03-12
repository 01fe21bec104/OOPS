#include<iostream>
using namespace std;
int main()
{
    string name,ID,country,covidreport;
    int AT,DT,numoflagauges;
    cout<<"enter the name,ID,country,covidreport,AT,DT,numoflagauges";
    cin>>name>>ID>>country>>covidreport>>AT>>DT>>numoflagauges;
    if(covidreport=="negative")
    {
        cout<<"Happy and safe journey";
    }
    else
    {
        cout<<"you are not allowed to travel";
    }

}
