#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    float salary,sales,total_salary;

    scanf("%s", &name);
    scanf("%f", &salary);
    scanf("%f", &sales);

    total_salary=((15*sales)/100)+salary;

    printf("TOTAL = R$ %0.2f\n", total_salary);

    return 0;

}
