/*
 * Write a C program to print the following pattern.
 * 
 *      1
 *      2 3
 *      4 5 6
 *      7 8 9 10
*/

#include<stdio.h>

void print(int n) {
    int k = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    print(n);
    return 0;
}