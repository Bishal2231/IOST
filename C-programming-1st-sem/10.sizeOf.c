// ⦁	Write a program that declares variables of different data types) int, float, char etc.) and prints their sizes using the size of operator.
#include <stdio.h>

int main()
{
    int intVar;
    float floatVar;
    char charVar;
    double doubleVar;
    long int longIntVar;
    short int shortIntVar;

    printf("Size of int: %zu bytes\n", sizeof(intVar));
    printf("Size of float: %zu bytes\n", sizeof(floatVar));
    printf("Size of char: %zu bytes\n", sizeof(charVar));
    printf("Size of double: %zu bytes\n", sizeof(doubleVar));
    printf("Size of long int: %zu bytes\n", sizeof(longIntVar));
    printf("Size of short int: %zu bytes\n", sizeof(shortIntVar));
    printf("\n --[Your name]--");
    return 0;
}