#include<stdio.h>

int main()
{
    int T,i,j,count=0,ch1;

    char ch[100];

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%s", ch);

        printf("Case %d:\n", i+1);

        for(ch1=97;ch1<=122;ch1++)
        {
            for(j=0;ch[j]!='\0';j++)
                {
                    if(ch[j]==ch1)
                    {
                        count=count+1;
                    }
                }

            for(j=0;ch[j]!='\0';j++)
            {
                if(ch[j]==ch1)
                {
                    printf("%c %d\n", ch[j],count);
                    break;
                }
            }

            count=0;
        }


    }
}
