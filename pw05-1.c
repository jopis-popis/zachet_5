#include <stdio.h>
#include <math.h>

int main(void) {
    long N = 111260403;
    int variant = (N % 30) + 1;
    printf("Вариант: %d\n", variant);

    double a = 1.0, b = 5.0, h = 0.5;
    int i = 1;
    printf("Iter | X | Y\n");
    
    for (double x = a; x <= b + 1e-9; x += h) {
        double y = 1.0 / x;
        printf("%d | %.4lf | %.4lf\n", i++, x, y);
    }
    return 0;
}