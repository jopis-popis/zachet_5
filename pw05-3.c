#include <stdio.h>
#include <math.h>

int main(void) {
    long N = 111260403;
    int K = 0;
    int variant = ((N + (K + 12)) % 30) + 1;
    printf("Вариант: %d\n", variant);

    int n;
    printf("Введите N: ");
    
    while (scanf("%d", &n) == 1 && n > 0) {
        double sum = 0.0;
        for (int i = 1; i <= n; i++) {
            sum += sin((double)i) / i;
        }
        printf("SUM: %.6lf\n", sum);
        printf("Введите N: ");
    }
    return 0;
}