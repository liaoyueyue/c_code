#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        for (int i = 1; i <= n; i++) {
            for (int k = n - i; k > 0; k--) {
                printf(" ");
            }
            for (int j = i; j > 0; j--) {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}