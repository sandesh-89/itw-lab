#include <stdio.h>

int sum(int n) {
    if (n <= 1) return n;
    return n + sum(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int addition = sum(n);
    printf("Sum of numbers up to %d is %d\n", n, addition);
    return 0;
}
