#include<stdio.h>

int main()
{
    char in[1000];

    scanf("%s", in);

    int i,count=0;

    for(i=0;in[i]!='\0';i++)
    {
        if(in[i]=='a'||in[i]=='e'||in[i]=='i'||in[i]=='o'||in[i]=='u'||in[i]=='A'||in[i]=='E'||in[i]=='I'||in[i]=='O'||in[i]=='U')
        {
            count=count+1;
        }
    }

    printf("%d\n", count);

    return 0;
}
