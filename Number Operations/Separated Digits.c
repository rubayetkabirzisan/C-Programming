#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a seven-digit number: ");
    scanf("%d", &num);

    printf("The digits in the number are: ");

    // Extract each digit of the number using division and modulo
    digit = num / 1000000; printf("%d  ", digit); // Millions place
    digit = (num / 100000) % 10; printf("%d  ", digit); // Hundred thousands place
    digit = (num / 10000) % 10; printf("%d  ", digit); // Ten thousands place
    digit = (num / 1000) % 10; printf("%d  ", digit); // Thousands place
    digit = (num / 100) % 10; printf("%d  ", digit); // Hundreds place
    digit = (num / 10) % 10; printf("%d  ", digit); // Tens place
    digit = num % 10; printf("%d  ", digit); // Ones place

    return 0;
}

