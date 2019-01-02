#include<stdio.h>

int main()
{
    int a,b,d;
    double c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    d=a*b;
    
    c=d/12.00;
    
    printf("%0.3lf\n", c);
    
    return 0;
}
