#include <stdio.h>
#include <math.h>

int main() {
    int num, sum, digits, firstDigit, lastDigit;
    sum = 0;

    // Input a number from the user
    scanf("%d", &num);

    // Find the last digit
    lastDigit = num % 10;

    // Find the total number of digits - 1
    digits = (int)log10(num);

    // Find the first digit
    firstDigit = (int)(num / pow(10, digits));

    // Calculate the sum
    sum = firstDigit + lastDigit;

    printf("%d
", sum);
    return 0;
}
