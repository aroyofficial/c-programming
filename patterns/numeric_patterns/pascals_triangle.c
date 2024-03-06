/*
 * Write a C program to print the following pattern.
 * 
 *          1
 *         1 1
 *        1 2 1
 *       1 3 3 1
 *      1 4 6 4 1
*/

#include<stdio.h>

int main() {
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        int k = 1;
        for (int j = 1; j <= i; j++) {
            printf("%d ", k);
            k = k * (i - j) / j;
        }
        printf("\n");
    }
    return 0;
}