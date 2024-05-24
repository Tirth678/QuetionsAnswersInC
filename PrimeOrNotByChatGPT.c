#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool isPrime(int num) {
    // Handling edge cases
    if (num <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    if (num <= 3) {
        return true; // 2 and 3 are prime numbers
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Multiple of 2 and 3 are not prime numbers
    }

    // Check divisibility from 5 to sqrt(num)
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
