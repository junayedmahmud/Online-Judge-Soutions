#include<stdio.h>

int main()
{
    int T,N,i,j,flag=0;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d", &N);

        if(N==0 || N==1)
        {
            printf("No\n");
            continue;
        }

        for(j=2;j<=(N/2);j++)
        {
            if(N%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        flag=0;
    }

    return 0;
}
