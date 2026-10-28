#include <stdio.h>

#define HEIGHT 5

int main(void) {
    long N = 111260403;
    int K = 0;
    int variant = ((N + (K + 6)) % 30) + 1;
    printf("Вариант: %d\n", variant);

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            if (i == j) printf("x");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}