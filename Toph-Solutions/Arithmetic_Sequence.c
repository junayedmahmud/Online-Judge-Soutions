#include<stdio.h>

int main()
{
    int N,M;

    scanf("%d", &N);

    int p=(N*(N+1))/2;

    scanf("%d", &M);

    int total[M];

    int sum=0;

    int i;

    for(i=0;i<M;i++)
    {
        scanf("%d", &total[i]);
        sum=sum+total[i];
    }

    printf("%d\n", p-sum);
}
