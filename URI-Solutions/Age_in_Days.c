#include<stdio.h>

int main()
{
    int living_days,year,month,days;

    scanf("%d", &living_days);

    year=living_days/365;
    month=(living_days%365)/30;
    days=(living_days%365)%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year,month,days);

    return 0;

}
