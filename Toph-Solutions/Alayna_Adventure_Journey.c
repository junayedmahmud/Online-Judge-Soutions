#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int i,j;

    long int max=0;

    long int number[n];

    for(j=0;j<n;j++)
    {
        scanf("%ld", &number[j]);
    }

    for(j=0;j<n;j++)
    {
        if(max<number[j])
        {
            max=number[j];
        }
    }

    printf("%ld\n", max);

    return 0;
}
