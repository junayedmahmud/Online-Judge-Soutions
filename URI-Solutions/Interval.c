#include <stdio.h>

int main() {

    float num;

    scanf("%f", &num);

    if((num<0)||(num>100)){
        printf("Fora de intervalo\n");
    }
    if(num>=0 && num<=25.0000){
        printf("Intervalo [0,25]\n");
    }
    if(num>25.00001 && num<=50.0000000){
        printf("Intervalo (25,50]\n");
    }
    if(num>50.00001 && num<=75.0000000){
        printf("Intervalo (50,75]\n");
    }
    if(num>75.00001 && num<=100.0000000){
        printf("Intervalo (75,100]\n");
    }

    return 0;
}
