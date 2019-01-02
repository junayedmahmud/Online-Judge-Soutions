#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int n,m;

    while(scanf("%ld %ld", &n,&m)!=EOF)
    {
        if(n>m)
        {
            long int o;

            o=n*(n+(long int)1)/(long int)2;

            long int q;

            q=m*(m-(long int)1)/(long int)2;

            long int r=o-q;

            printf("Sum of %ld to %ld is -> %ld;\n", m,n,r);
        }
        else
        {
            long int o;

            o=m*(m+(long int)1)/(long int)2;

            long int q;

            q=n*(n-(long int)1)/(long int)2;

            long int r=o-q;

            printf("Sum of %ld to %ld is -> %ld;\n", n,m,r);
        }
    }

    return 0;
}
