#include<stdio.h>

int main()
{
    int T,i,j,sub;

    scanf("%d", &T);

    for(i=1;i<=T;i++)
    {
        scanf("%d", &sub);

        double number[sub];

        double sum=0;

        for(j=0;j<sub;j++)
        {
            scanf("%lf", &number[j]);

            sum=sum+number[j];
        }

        printf("Case %d: %0.3lf\n", i,sum/(double)sub);

        sum=0;
    }

    return 0;
}
