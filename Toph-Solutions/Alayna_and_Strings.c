#include<stdio.h>

int main()
{
    char ask[1000];

    int count=0;
    int count1=0,i;

    scanf("%s", ask);

    for(i=0;ask[i]!='\0';i++)
    {
        if(ask[i]>=65 && ask[i]<=90)
        {
            count=count+1;
        }
        if(ask[i]>=97 && ask[i]<=122)
        {
            count1=count1+1;
        }
    }

    printf("%d %d\n", count,count1);

    return 0;
}
