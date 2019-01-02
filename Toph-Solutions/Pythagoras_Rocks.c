#include<stdio.h>
#include<math.h>

int main()
{
    long int a,b,c,len;

    scanf("%ld %ld %ld", &a,&b,&c);

    if(a>b && a>c)
    {
        printf("%ld\n", a);
    }
    else if(b>a && b>c)
    {
        printf("%ld\n", b);
    }
    else
    {
        printf("%ld\n", c);
    }
    return 0;
}
