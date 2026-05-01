#include <stdio.h>

int main(void) {
    printf("Odd numbers between 1 and 100:\n");
    for (int i = 1; i <= 100; i += 2) {
        printf("%d\n", i);
    }

    printf("Even numbers between 1 and 100:\n");
    for (int i = 2; i <= 100; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
