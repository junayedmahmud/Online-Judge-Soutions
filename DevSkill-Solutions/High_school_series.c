#include<stdio.h>
#include<math.h>

int main()
{
    int T,N,i,j;

    double sum=0.00;

    scanf("%d", &T);

    for(i=1;i<=T;i++)
    {
        scanf("%d", &N);

        for(j=1;j<=N;j++)
        {
            sum=sum+pow((double)j,(double)3);
        }

        printf("Case %d: %d\n", i,(int)sum);

        sum=0.00;
    }

     return 0;
}
