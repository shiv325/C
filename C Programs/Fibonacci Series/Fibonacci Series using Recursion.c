// |=============================================================================================================================================================|
// |                                                         C Program : Fibonacci Series using Recursion                                                        |
// |=============================================================================================================================================================|

#include <stdio.h>

int fibonacci (int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fibonacci (n - 1) + fibonacci (n - 2);
}

int main () {
    int N, sum, fibo;
    printf("Enter the Number of Terms of Fibonacci Series => ");
    scanf("%d", &N);
    printf("Fibonacci Series => ");
    for (int i = 1; i <= N; i++) {
        fibo = fibonacci (i);
        sum += fibo;
        printf("%d ", fibo);
    }
    printf("\nSum of Series => %d", sum);
    return 0;
}
