// Demonstrate the difference between scanf() & gets().
#include <stdio.h>
#include <conio.h>
int main()
{
    char name1[50], name2[50];

    printf("Enter your name using scanf(): ");
    scanf("%s", name1);
    printf("Name entered using scanf(): %s\n", name1);

    printf("Enter your name using gets(): ");
    getchar();
    gets(name2);
    printf("Name entered using gets(): %s\n", name2);
    printf("\n --[Your name]--");
    getch();
    return 0;
}