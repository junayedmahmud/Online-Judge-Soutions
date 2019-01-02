#include<stdio.h>

int main()
{
    int N,i,a,b,c;

    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        scanf("%d %d %d", &a,&b,&c);

        if((a>b)&&(c>b)&&(a==c))
        {
            printf("Case %d: Confused\n", i);

            continue;
        }
        else if((b>c)&&(a>c)&&(a==b))
        {
            printf("Case %d: Confused\n", i);

            continue;
        }
        else if((b>a)&&(c>a)&&(b==c))
        {
            printf("Case %d: Confused\n", i);

            continue;
        }
        else if((a==b)&&(b==c)&&(c==a))
        {
            printf("Case %d: Confused\n", i);
        }
        else
        {
            if((a>b)&&(a>c))
            {
                printf("Case %d: A\n", i);

                continue;
            }
            else if(b>c && b>a)
            {
                printf("Case %d: B\n", i);

                continue;
            }
            else
            {
                printf("Case %d: C\n", i);
            }
        }
    }

    return 0;
}
