#include<stdio.h>

int main()
{
    float A,B,C,per,Area;
    
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    
    if(A<(B+C)&&B<(A+C)&&C<(A+B)){
        per=A+B+C;
        
        printf("Perimetro = %0.1f\n", per);
    }
    else{
        Area=0.5*(A+B)*C;
        
        printf("Area = %0.1f\n", Area);
    }
    
    return 0;
}
