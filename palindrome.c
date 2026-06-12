#include <stdio.h>

int main() {
    int num, originalNum, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reverse)
        printf("%d is a Palindrome Number", originalNum);
    else
        printf("%d is Not a Palindrome Number", originalNum);

    return 0;
}