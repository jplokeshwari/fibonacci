#include <stdio.h>
#include <math.h>
void fibonacci(int limit);
void prime(int limit);
void x_power_x(int limit);

int main() {
    int choice, limit;
    printf("Choose a series to generate:\n");
    printf("1. Fibonacci Series\n");
    printf("2. Prime Numbers\n");
    printf("3. x^x Series\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter the limit for the series: ");
    scanf("%d", &limit);
    switch (choice) {
        case 1:
            fibonacci(limit);
            break;
        case 2:
            prime(limit);
            break;
        case 3:
            x_power_x(limit);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
void fibonacci(int limit) {
    int a = 0, b = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 1; i <= limit; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
void prime(int limit) {
    int count = 0;
    printf("Prime Numbers: ");
    for (int num = 2; count < limit; num++) {
        int isPrime = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
            count++;
        }
    }
    printf("\n");
}
void x_power_x(int limit) {
    printf("x^x Series: ");
    for (int x = 1; x <= limit; x++) {
        printf("%d ", (int)pow(x, x));
    }
    printf("\n");
}


