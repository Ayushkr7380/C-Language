//Generate the first 100 prime numbers using nested for loops.
#include <stdio.h>

int main() {
    int num = 2; // Start checking for prime numbers from 2
    int count = 0; // Count of prime numbers found

    printf("The first 100 prime numbers are:\n");

    while (count < 100) { // Continue until 100 primes are found
        int flag = 0; // Reset flag for each number

        // Check if num is prime
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                flag = 1; // num is not prime
                break; // Exit the inner loop
            }
        }

        if (flag == 0) { // num is prime
            printf("%d\t", num); // Print the prime number
            count++; // Increment the prime count
        }

        num++; // Move to the next number
    }

    printf("\n");
    return 0;
}
