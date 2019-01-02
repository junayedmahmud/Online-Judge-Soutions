#include<stdio.h>
#include<math.h>

int main()
{
    int T,i,n;

    int p;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d", &n);

        p=(int)sqrt(n);

        if(n==(p*p))
        {
            printf("Case %d: YES\n",i+1);
        }
        else
        {
            printf("Case %d: NO\n",i+1);
        }

    }

    return 0;
}
