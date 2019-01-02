#include<stdio.h>

double sqroot(double square);

int main()
{
    int T,a,b,c,d,i;

    double R;

    scanf("%d", &T);

    for(i=1;i<=T;i++)
    {
        scanf("%d %d %lf %d %d", &a,&b,&R,&c,&d);

        int e=(c-a)*(c-a);
        int f=(d-b)*(d-b);

        int g=e+f;

        double h=(double)g;

        double m=sqroot(h);

        double j=R*R;

        double k=m*m;

        if(k<j)
        {
            printf("Case %d: Inside\n",i);
        }
        if(k==j)
        {
            printf("Case %d: OnCircle\n",i);
        }
        if(k>j)
        {
            printf("Case %d: Outside\n",i);
        }

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
