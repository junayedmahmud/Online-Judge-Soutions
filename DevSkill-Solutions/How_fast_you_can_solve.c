#include<stdio.h>

int main()
{
    int a,b,c,T,i;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d %d %d", &a,&b,&c);

        printf("%d\n", (b+c)-a);
    }

    return 0;
}
