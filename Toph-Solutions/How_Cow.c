#include<stdio.h>

int main()
{
    long int T,i,j;

    scanf("%ld", &T);

    for(j=0;j<T;j++)
    {
        scanf("%ld", &i);

        double p;

        p=3.1416*(double)i*(double)i;

        printf("%0.3lf\n", p);
    }

    return 0;
}
