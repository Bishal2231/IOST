// Write a program to check odd or even number using (a) modulus operator (b) using bitwise operator (c) without using bitwise and modulus operator (d) using conditional operator.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // (a) Using modulus operator
    if (num % 2 == 0)
        printf("\nThe number is even (using modulus operator).");
    else
        printf("\nThe number is odd (using modulus operator).");

    // (b) Using bitwise operator
    if (num & 1)
        printf("\nThe number is odd (using bitwise operator).");
    else
        printf("\nThe number is even (using bitwise operator).");

    // (c) Without using bitwise and modulus operator
    if (num / 2 * 2 == num)
        printf("\nThe number is even (without bitwise and modulus operator).");
    else
        printf("\nThe number is odd (without bitwise and modulus operator).");

    // (d) Using conditional operator
    (num % 2 == 0) ? printf("\nThe number is even (using conditional operator).")
                   : printf("\nThe number is odd (using conditional operator).");
    printf("\n --[Your name]--");

    return 0;
}
