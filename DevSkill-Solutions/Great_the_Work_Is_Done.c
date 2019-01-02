#include<stdio.h>

int main()
{
    int CT,N,P=0,i,j,days;

    while(scanf("%d %d", &CT,&N)!=EOF)
    {
        int p[N];

        for(i=0;i<N;i++)
        {
            scanf("%d", &p[i]);
            P=P+p[i];
        }
        for(j=1;j<=CT;j++)
        {
            if((P*j)>=CT)
            {
                days=j;
                break;
            }
        }

        if(days==1)
        {
            printf("Project will finish within 1 day.\n");
        }
        else
        {
            printf("Project will finish within %d days.\n", days);
        }
        P=0;
    }

    return 0;

}
