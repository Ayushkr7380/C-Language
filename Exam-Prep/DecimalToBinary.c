#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32], i = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    printf("Binary: ");
    decimalToBinary(num);
    
    return 0;
}
