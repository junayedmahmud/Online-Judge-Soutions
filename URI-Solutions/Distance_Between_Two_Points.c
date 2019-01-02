#include <stdio.h>
#include<math.h>
 
int main() {
 
    double x1,x2,y1,y2,dis,first,second;
    
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    
    first=(x2-x1)*(x2-x1);
    second=(y2-y1)*(y2-y1);
    
    dis=sqrt(first+second);
    
    printf("%0.4lf\n", dis);
    
    return 0;
}
