#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C,D,K,E,F,G,H,I;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    K=(2*A);
    D=(B*B-4*A*C);
    E=sqrt(D);
    
    I=-B+E;
    F=I/K;
    
    G=-B-E;
    H=G/K;
    
    if(K==0 || D<0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %0.5lf\n", F);
        printf("R2 = %0.5lf\n", H);
    }
    
    return 0;
}
