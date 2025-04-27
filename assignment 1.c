#include <stdio.h>

// Function to find the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Function to check if a number is prime
int is_prime(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num;

    // Problem 1: Finding Factorial
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));

    // Problem 2: Checking if a number is prime
    printf("\nEnter a number to check if it's prime: ");
    scanf("%d", &num);
    if (is_prime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    // Problem 3: Finding GCD of two numbers
    int a, b;
    printf("\nEnter two numbers to find their GCD: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));

    return 0;
}