#include <stdio.h>

void get(int *a, int *b) {
    printf("Enter value of a: ");
    scanf("%d", a);

    printf("Enter value of b: ");
    scanf("%d", b);
}

int main() {
    int a;
    int b;

    get(&a, &b);

    int res = a + b;
    printf("Sum of a and b is: %d\n", res);

    return 0;
}