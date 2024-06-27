#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    char octal[100] = "";
    int binaryLength, octalIndex = 0;
    long long decimal = 0, octalValue = 1;

    // Get the binary input from the user
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Calculate the length of the binary number
    binaryLength = strlen(binary);

    // Convert binary to decimal
    for (int i = binaryLength - 1; i >= 0; i--) {
        decimal += (binary[i] - '0') * octalValue;
        octalValue *= 2;
    }

    // Convert decimal to octal
    while (decimal != 0) {
        octal[octalIndex++] = (decimal % 8) + '0';
        decimal /= 8;
    }

    // Reverse the octal string
    for (int i = 0, j = octalIndex - 1; i < j; i++, j--) {
        char temp = octal[i];
        octal[i] = octal[j];
        octal[j] = temp;
    }

    // Print the octal equivalent
    printf("Octal equivalent: %s\n", octal);

    return 0;
}
