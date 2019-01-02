#include<stdio.h>

int main()
{
    int T,i,sub;

    scanf("%d", &T);

    for(i=1;i<=T;i++)
    {
        int a,b;

        scanf("%d %d", &a,&b);

        int sum=a+b;

        if(a>b)
        {
            sub=a-b;
        }
        else
        {
            sub=b-a;
        }

        printf("Case %d: %d%d\n", i,sum,sub);
    }

    return 0;
}
