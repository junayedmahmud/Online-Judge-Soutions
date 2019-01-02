#include<iostream>

using namespace std;

int main()
{
    long int N;

    long int sum=0;

    cin>>N;

    for(long int i=1;i<N;i++)
    {
        if(N%i==0)
        {
            sum=sum+1;
        }
    }

    cout<<sum<<endl;

    return 0;
}
