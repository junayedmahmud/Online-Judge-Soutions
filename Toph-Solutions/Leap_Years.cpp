#include<iostream>

using namespace std;

bool LeapYear(int n)
{
    if((n%4==0)&&(n%400!=0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int N;

    cin>>N;

    bool x=LeapYear(N);

    if(x==true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
