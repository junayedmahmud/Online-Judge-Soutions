#include<stdio.h>

int main()
{
    char p[100];
    char q[100];

    int i,j=0,count=0;

    gets(p);

    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]!=' ')
        {
            q[j]=p[i];
            j++;
        }
    }

    q[j]='\0';

    puts(q);

    return 0;
}
