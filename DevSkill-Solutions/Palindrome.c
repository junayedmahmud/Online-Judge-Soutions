#include<stdio.h>
#include<string.h>

int main()
{
    int T,i,j,k,count,l;
    char ch[100];
    char rev[100];

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        count = 0;
       scanf("%s", &ch);

        for(j=0;ch[j];j++)
        {
            if(ch[j]>=65 && ch[j]<=91)
                ch[j] = ch[j]+32;
            count++;
        }



        for(j=0,k=count-1; ch[j]; j++, k--)
        {
            rev[k] = ch[j];
        }

       rev[j] = '\0';

        l=strcmp(ch,rev);

        if(l==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }

    return 0;
}
