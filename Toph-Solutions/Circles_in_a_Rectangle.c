#include<stdio.h>

int main()
{
    int T,i;

    double R;

    scanf("%d", &T);

    for(i=1;i<=T;i++)
    {
        scanf("%lf", &R);

        double one=R*(double)2;

        double width=one*(double)2;

        double area_rec=one*width;


        double circle=3.1416*(R*R);

        double area_circle=circle*(double)2;

        double green=area_rec-area_circle;

        printf("Case %d: %0.2lf\n", i,green);
    }

    return 0;
}
