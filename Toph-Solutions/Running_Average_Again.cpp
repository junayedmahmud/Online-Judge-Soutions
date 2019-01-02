#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long int test;

    cin>>test;

    long long int sum=0;

    for(int i=1;i<=test;i++)
    {
        int number;

        cin>>number;

        sum=sum+number;

        if(sum%i==0)
        {
            cout<<sum/i<<endl;
        }
        else
        {
            double result=(double)sum/(double)i;

            printf("%0.10f\n", result);
        }
    }
}
