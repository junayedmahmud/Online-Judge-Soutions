#include <stdio.h>
 
int main() {
 
    int money,a,b,c,d,e,f,g;
    
    scanf("%d", &money);
    
    a=money/100;
    b=(money-(a*100))/50;
    c=(money-(a*100+b*50))/20;
    d=(money-(a*100+b*50+c*20))/10;
    e=(money-(a*100+b*50+c*20+d*10))/5;
    f=(money-(a*100+b*50+c*20+d*10+e*5))/2;
    g=(money-(a*100+b*50+c*20+d*10+e*5+f*2))/1;
    
    printf("%d\n", money);
    printf("%d nota(s) de R$ 100,00\n", a); 
    printf("%d nota(s) de R$ 50,00\n", b);
    printf("%d nota(s) de R$ 20,00\n", c);
    printf("%d nota(s) de R$ 10,00\n", d);
    printf("%d nota(s) de R$ 5,00\n", e);
    printf("%d nota(s) de R$ 2,00\n", f);
    printf("%d nota(s) de R$ 1,00\n", g);
    
    return 0;
}
