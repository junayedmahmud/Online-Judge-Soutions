#include<stdio.h>

int main()
{
    int T,i,j,flag=1;

    char ch[50];

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%s", ch);

        for(j=0;ch[j]!='\0';j++)
        {
            if(ch[j]=='r')
            {
                flag=0;
            }
        }

        if(flag==0)
        {
            printf("Not vely easy\n");
        }
        else
        {
            printf("Vely easy\n");
        }
        flag=1;
    }

    return 0;
}
