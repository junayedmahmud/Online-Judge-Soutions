#include<stdio.h>

int main()
{
    int T,N,i;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d", &N);

        if(N<120)
        {
            printf("Naughty Boy Sifat\n");
        }
        else
        {
            printf("Good Boy Sifat\n");
        }
    }

    return 0;
}
