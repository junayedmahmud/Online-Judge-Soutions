#include<stdio.h>
#include<math.h>

double sqroot(double square);

int main()
{
    int T;

    double A,B,C,i;

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%lf %lf %lf", &A,&B,&C);

        double d=A*A+B*B+C*C;

        double p=sqroot(d);

        printf("%0.2lf\n", p);
    }

    return 0;
}
double sqroot(double square)
{
    double root=square/3;
    int i;
    if (square <= 0) return 0;
    for (i=0; i<32; i++)
        root = (root + square / root) / 2;
    return root;
}
