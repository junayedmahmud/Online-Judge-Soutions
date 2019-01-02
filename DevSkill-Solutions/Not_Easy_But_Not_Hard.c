#include<stdio.h>

int main()
{
    int T,i,j;

    long int n;

    scanf("%d", &T);

    for(i=1;i<=T;i++)
    {
        scanf("%ld", &n);

        printf("%ld\n", ((n*n)+n)/2);
    }
}
