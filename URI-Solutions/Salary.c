#include <stdio.h>

int main(void) {
	
	int employee_number,worked_hours_per_month;
	float salary_per_hour,salary_per_month;
	
	scanf("%d", &employee_number);
	scanf("%d", &worked_hours_per_month);
	scanf("%f", &salary_per_hour);
	
	salary_per_month=worked_hours_per_month*salary_per_hour;
	
	printf("NUMBER = %d\nSALARY = U$ %0.2lf\n",employee_number,salary_per_month);
	
	return 0;
}
