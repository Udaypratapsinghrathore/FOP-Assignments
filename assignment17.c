#include <stdio.h>

int main() {
    int n, i, j;
    float x, term, sum = 0;
    int sign = 1;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        term = 1;

        // Calculate x^(2i-1)
        for(j = 1; j <= (2*i - 1); j++) {
            term *= x;
        }

        // Calculate factorial (2i-1)!
        int fact = 1;
        for(j = 1; j <= (2*i - 1); j++) {
            fact *= j;
        }

        term = term / fact;

        sum += sign * term;

        sign = -sign; // alternate sign
    }

    printf("Sum of sine series = %f\n", sum);

    return 0;
}