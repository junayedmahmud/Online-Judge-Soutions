#include<stdio.h>

int main()
{
    int i,k,T,a1,a2,a3,n,sum=0;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d %d %d %d", &a1,&a2,&a3,&n);

        int p=a2-a1;
        int q=a3-a2;

        int a3=a1;

        if(p==q)
        {
            for(k=1;k<n;k++)
            {
                a3=a3+p;
            }

            printf("Case %d: %d\n", i+1,a3);
            sum=0;
        }

        else
        {
            printf("Case %d: Error\n",i+1);
        }

    }

    return 0;
}
