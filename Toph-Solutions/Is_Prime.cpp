#include<iostream>

using namespace std;

int main()
{
    int test;

    cin>>test;

    int flag=0;

    for(int i=2;i<=test/2;i++)
    {
        if(test%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
