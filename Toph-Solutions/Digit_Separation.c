#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[1001];

    int sum=0;

    while(scanf("%s", &name)!=EOF)
    {
        int i;

        for(i=0;name[i]!='\0';i++)
        {

            if(name[i]=='1')
            {
                sum=sum+1;

                continue;
            }

            if(name[i]=='2')
            {
                sum=sum+2;

                continue;
            }

            if(name[i]=='3')
            {
                sum=sum+3;

                continue;
            }

            if(name[i]=='4')
            {
                sum=sum+4;

                continue;
            }

            if(name[i]=='5')
            {
                sum=sum+5;

                continue;
            }

            if(name[i]=='6')
            {
                sum=sum+6;

                continue;
            }

            if(name[i]=='7')
            {
                sum=sum+7;

                continue;
            }

            if(name[i]=='8')
            {
                sum=sum+8;

                continue;
            }

            if(name[i]=='9')
            {
                sum=sum+9;
            }

        }

       printf("%d\n", sum);

       sum=0;
    }

    return 0;
}
