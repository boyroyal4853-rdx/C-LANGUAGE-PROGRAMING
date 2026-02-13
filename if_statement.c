#include <stdio.h>
int main()
{
    int a;

    printf("enter your number a = ");
    scanf("%d", &a);
    if (a < 10)
        printf("a is  smaller than 10");

    if (a == 10)
        printf("a equal than 10");

    if (a > 10)
        printf("a is greather than  10");

    return 0;
}