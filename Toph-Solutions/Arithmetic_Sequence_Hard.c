#include<stdio.h>

int main()
{
    long int N,M,p,sum=0;

    scanf("%ld", &N);

    scanf("%ld", &M);

    long int i;

    for(i=0;i<M;i++)
    {
        scanf("%ld", &p);
        sum=sum+p;
    }

    long int x=N*(N+1)/2;

    long int y=x-sum;

    printf("%ld\n", y);

    return 0;
}
