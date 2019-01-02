#include <stdio.h>
 
int main() {
 
    int dis;
    float fuel,avg;
    
    scanf("%d", &dis);
    scanf("%f", &fuel);
    
    avg=dis/fuel;
    
    printf("%0.3f km/l\n", avg);
 
    return 0;
}
