#include <stdio.h>
#include <limits.h> // For integer type limits
#include <float.h>  // For float and double type limits

int main() {
    // Displaying the size and range of char
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Range of signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char: 0 to %u\n\n", UCHAR_MAX);

    // Displaying the size and range of int
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Range of signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int: 0 to %u\n\n", UINT_MAX);

    // Displaying the size and range of short
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Range of signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short: 0 to %u\n\n", USHRT_MAX);

    // Displaying the size and range of long
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Range of signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long: 0 to %lu\n\n", ULONG_MAX);

    // Displaying the size and range of long long
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Range of signed long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Range of unsigned long long: 0 to %llu\n\n", ULLONG_MAX);

    // Displaying the size and range of float
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Range of float: %E to %E\n\n", FLT_MIN, FLT_MAX);

    // Displaying the size and range of double
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Range of double: %E to %E\n\n", DBL_MIN, DBL_MAX);

    return 0; //return 0 tells the successfull execution of the program.
}
