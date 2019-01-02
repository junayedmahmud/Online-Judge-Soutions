#include<stdio.h>

int main()
{
    int T,i;

    scanf("%d", &T);

    char name[11];
    char cap[11];

    for(i=1;i<=T;i++)
    {
        if(i==1)
        {
            getchar();
        }

        scanf("%s", name);

        int j;

        for(j=0;name[j]!='\0';j++)
        {
            if(j==0)
            {
                cap[j]=name[j]-32;
            }
            else
            {
                cap[j]=name[j];
            }
        }

        cap[j]='\0';

        printf("Welcome %s\n", cap);
    }

    return 0;
}
