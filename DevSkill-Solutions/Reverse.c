#include<stdio.h>
#include<string.h>

int main()
{
    int T,i,j,temp,k;

    char ch[999];

    scanf("%d", &T);

    for(i=1;i<=T;i++)
    {
        getchar();

        scanf("%[^\n]s",ch);

        k=0;

        j=strlen(ch)-1;

        while(k<j)
        {
            temp=ch[k];
            ch[k]=ch[j];
            ch[j]=temp;
            k++;
            j--;
        }
        printf("%s\n", ch);
        k=0;
    }

    return 0;
}
