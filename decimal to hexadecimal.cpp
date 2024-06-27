#include <stdio.h>

int main() {
    int decimalNumber, quotient, remainder;
    char hexadecimalNumber[100];
    int i = 0, j, temp;

    // Get the decimal input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    quotient = decimalNumber;

    // Convert decimal to hexadecimal
    while (quotient != 0) {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalNumber[i] = 48 + remainder; // ASCII value of digits 0-9 starts from 48
        else
            hexadecimalNumber[i] = 55 + remainder; // ASCII value of letters A-F starts from 65, 65 - 10 = 55
        quotient = quotient / 16;
        i++;
    }

    // Print the hexadecimal number in reverse order
    printf("Hexadecimal equivalent: ");
    for (j = i - 1; j >= 0; j--)
        printf("%c", hexadecimalNumber[j]);
    printf("\n");

    return 0;
}
