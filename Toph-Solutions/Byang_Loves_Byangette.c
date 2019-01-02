#include<stdio.h>

int main()
{
    char s[20];

    gets(s);

    int i=strcmp(s,"Who loves Byang?");

    int j=strcmp(s,"Who loves Byangette?");

    if(i==0)
    {
        printf("Byangette\n");
    }
    if(j==0)
    {
        printf("Byang\n");
    }

    return 0;
}
