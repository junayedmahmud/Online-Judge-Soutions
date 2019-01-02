#include<stdio.h>

int main()
{
    long int X,Y;

    scanf("%ld %ld", &X,&Y);

    long int p=Y-X;

    long int q=p/(long int)2;

    long int r=q+X;

    printf("%ld\n", r);

    return 0;
}
