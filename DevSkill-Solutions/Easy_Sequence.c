#include<stdio.h>

int fibonacci(int);

int n1=1,n2=3,next_sum;

int main()
{
    int T,N,i,j,sum=0;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d", &N);

        int t=fibonacci(N);

        printf("%d\n", t);

        n1=1;
        n2=3;
    }

    return 0;
}

int fibonacci(int N)
{
    if(N==1)
    {
        return n1;
    }
    if(N==2)
    {
        return n2;
    }

    int p;

    for(p=3;p<=N;p++)
    {
        next_sum=n1+n2;
        n1=n2;
        n2=next_sum;
    }

    return n2;
}
