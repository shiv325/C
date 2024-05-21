// |=============================================================================================================================================================|
// |                                                             C Program : Fibonacci Series using Loops                                                        |
// |=============================================================================================================================================================|


#include <stdio.h>

int main () {
    int N, sum = 0, a = 0, b = 1, c;
    printf("Enter the Number of Terms of Fibonacci Series => ");
    scanf("%d", &N);
    printf("Fibonacci Series => ");
    if (N == 1) {
        printf("%d", a);
    }
    if (N > 1) {
        printf("%d %d", a, b);
        sum += 1;
    }
    for (int i = 0; i <= N - 2; i++) {
        c = a + b;
        sum += c;
        printf(" %d", c);
        a = b;
        b = c;
    }
    printf("\nSum of Series => %d", sum);
    return 0;
}
