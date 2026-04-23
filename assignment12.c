#include <stdio.h>

int main() {
    int a, b, i, gcd, temp1, temp2;
    int smallestDivisor = -1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Handle negative inputs
    if(a < 0) a = -a;
    if(b < 0) b = -b;

    // Smallest Common Divisor (other than 1)
    for(i = 2; i <= (a < b ? a : b); i++) {
        if(a % i == 0 && b % i == 0) {
            smallestDivisor = i;
            break;
        }
    }

    if(smallestDivisor != -1)
        printf("Smallest Common Divisor: %d\n", smallestDivisor);
    else
        printf("No common divisor other than 1\n");

    // GCD using Euclidean Algorithm
    temp1 = a;
    temp2 = b;

    while(temp2 != 0) {
        int rem = temp1 % temp2;
        temp1 = temp2;
        temp2 = rem;
    }
    gcd = temp1;

    printf("Greatest Common Divisor (GCD): %d\n", gcd);

    return 0;
}