#include <stdio.h>
#include <math.h>

int main() {
    double pi = 0.0;   
    int x = 0;         
    double term;       
    double target = 3.14159; 
    do {
        term = pow(-1, x) * (4.0 / (2 * x + 1)); 
        pi += term;
        x++;          
    } while (fabs(pi - target) >= 0.00001); 
    printf(" π = %.5f\n", pi);
    printf("最小的 x 值 = %d\n", x);
    return 0;
}
