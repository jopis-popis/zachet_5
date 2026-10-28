#include <stdio.h>

#define SIZE 8

int main(void) {
    long N = 111260403;
    int K = 0;
    int variant = ((N + (K + 18)) % 30) + 1;
    printf("Вариант: %d\n", variant);

    double arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        int n = i + 1;
        arr[i] = (double)(n * (n + 1)) / 2.0;
    }

    printf("Обратный порядок: ");
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");
    return 0;
}