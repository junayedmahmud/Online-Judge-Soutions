#include<stdio.h>

int main()
{
    float N1,N2,N3,N4,avg,read_one_more,new_avg;
    
    scanf("%f", &N1);
    scanf("%f", &N2);
    scanf("%f", &N3);
    scanf("%f", &N4);
    
    avg=(N1*2+N2*3+N3*4+N4*1)/10;
    
    printf("Media: %0.1f\n", avg);
    
    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    if(avg<5.0){
        printf("Aluno reprovado.\n");
    }
    if(avg>=5.0 && avg<=6.9){
        printf("Aluno em exame.\n");
    }
    
    if(avg>=5.0 && avg<=6.9){
    
        scanf("%f", &read_one_more);
    
        printf("Nota do exame: %0.1f\n", read_one_more);
    
        new_avg=(read_one_more+avg)/2;
    
        if(new_avg>=5.0){
            printf("Aluno aprovado.\n");
        }
        if(new_avg<=4.9){
            printf("Aluno reprovado.\n");
        }
    
        printf("Media final: %0.1f\n", new_avg);
    }
    
    return 0;
    
}
