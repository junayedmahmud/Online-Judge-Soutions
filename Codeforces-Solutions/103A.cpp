#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,sum=0,sum1=0;

    cin>>test;

    while(test--)
    {
        int a,b;

        cin>>a>>b;

        if(a>b)
        {
            sum=sum+1;
        }
        else if(a<b)
        {
            sum1=sum1+1;
        }
        else
        {
           continue;
        }
    }

    if(sum>sum1)
    {
        cout<<"Mishka"<<endl;
    }
    else if(sum<sum1)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }

    return 0;
}
