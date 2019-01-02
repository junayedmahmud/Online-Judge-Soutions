#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int waterlemon,people;

    cin>>waterlemon>>people;

    unsigned int total=0;

    for(int i=1;i<=waterlemon;i++)
    {
        if(people*i>waterlemon)
        {
            break;
        }
        else
        {
            total=people*i;
        }
    }

    cout<<waterlemon-total<<endl;

    return 0;
}
