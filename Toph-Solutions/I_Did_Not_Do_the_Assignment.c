#include<stdio.h>

int main()
{
    int n,i,count=0;

        scanf("%d", &n);

        /*if(n==1)
        {
            printf("I DID NOT DO THE ASSIGNMENT.\n");
        }*/

        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                count=1;
                break;
            }
        }

        if(count==0)
        {
            printf("NO PUNISHMENT\n");
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                printf("I DID NOT DO THE ASSIGNMENT.\n");
            }
        }
}
