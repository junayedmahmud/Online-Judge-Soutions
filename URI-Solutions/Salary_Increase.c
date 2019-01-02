#include<stdio.h>

int main()
{
    float salary,new_salary;
    
    scanf("%f", &salary);
    
    if(salary>0.00 && salary<=400.00){
        new_salary=(salary*15.00)/100.00;
        printf("Novo salario: %0.2f\n", new_salary+salary);
        printf("Reajuste ganho: %0.2f\n", new_salary);
        printf("Em percentual: 15 %%\n");
        
    }
    if(salary>=400.01 && salary<=800.00){
        new_salary=(salary*12.00)/100.00;
        printf("Novo salario: %0.2f\n", new_salary+salary);
        printf("Reajuste ganho: %0.2f\n", new_salary);
        printf("Em percentual: 12 %%\n");
    }
    if(salary>=800.01 && salary<=1200.00){
        new_salary=(salary*10.00)/100.00;
        printf("Novo salario: %0.2f\n", new_salary+salary);
        printf("Reajuste ganho: %0.2f\n", new_salary);
        printf("Em percentual: 10 %%\n");
    }
    if(salary>=1200.01 && salary<=2000.00){
        new_salary=(salary*7.00)/100.00;
        printf("Novo salario: %0.2f\n", new_salary+salary);
        printf("Reajuste ganho: %0.2f\n", new_salary);
        printf("Em percentual: 7 %%\n");
    }
    if(salary>2000.00){
       new_salary=(salary*4.00)/100.00;
        printf("Novo salario: %0.2f\n", new_salary+salary);
        printf("Reajuste ganho: %0.2f\n", new_salary);
        printf("Em percentual: 4 %%\n"); 
    }
    
    return 0;
    
}
