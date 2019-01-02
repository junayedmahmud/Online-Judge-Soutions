#include<stdio.h>

int main()
{
    int T,i;

    float sum,V,S;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%f %f", &V,&S);

        sum=-V/S;

        printf("%0.2f\n", sum);
    }

    return 0;
}
