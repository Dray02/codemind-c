#include <stdio.h>

int main() {
    int num, sum = 0, firstDigit, lastDigit;

    // Input a number from the user
    scanf("%d", &num);

    // Find the last digit
    lastDigit = num % 10;

    // Copy the number to find the first digit
    firstDigit = num;

    // Find the first digit by dividing num by 10 until only the first digit is left
    while (num >= 10) {
        num = num / 10;
    }
    firstDigit = num;

    // Calculate the sum of the first and last digit
    sum = firstDigit + lastDigit;

    printf("%d
", sum);
    return 0;
}
