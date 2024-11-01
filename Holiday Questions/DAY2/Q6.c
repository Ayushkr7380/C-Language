//Implement a program to count all possible two-digit numbers within a given range that are divisible by any prime number between 2 and 10.

#include <stdio.h>

// Function to check if a number is divisible by any prime from 2 to 10
int isDivisibleByPrime(int number) {
    int primes[] = {2, 3, 5, 7};
    for (int i = 0; i < 4; i++) { 
        if (number % primes[i] == 0) {
            return 1; 
        }
    }
    return 0;
}

int main() {
    int start = 10, end = 99;
    int count = 0;

    for (int num = start; num <= end; num++) {
        if (isDivisibleByPrime(num)) {
            count++;
        }
    }

    printf("Total two-digit numbers divisible by any prime between 2 and 10: %d\n", count);
    return 0;
}
