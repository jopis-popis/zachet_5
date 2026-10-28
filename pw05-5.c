#include <stdio.h>

double calc(double a, double b) {
    double sum = a + b;
    return (sum * sum * sum) / (a * a + b * b);
}

int main(void) {
    long N = 111260403;
    int K = 0;
    int variant = ((N + (K + 22)) % 30) + 1;
    printf("Вариант: %d\n", variant);

    double a, b;
    printf("Введите a и b: ");

    while (scanf("%lf %lf", &a, &b) == 2 && (a != 0.0 || b != 0.0)) {
        printf("Результат: %.4lf\n", calc(a, b));
        printf("Введите a и b: ");
    }
    return 0;
}