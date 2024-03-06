/* Write a C program to calculate the factorial of a number. */

#include<stdio.h>

long int factorial(int n) {
    long int p = 1;
    if (n == 0) {
        return 1;
    }
    else {
        for (int i = 1; i <= n; i++) {
            p *= i;
        }
        return p;
    }
}

int main() {
    int n;
    long int result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("%ld", result);
    return 0;
}