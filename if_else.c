#include <stdio.h>
int main()
{
    int a;

    printf("enter your number a = ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("this is enen number");
    else
        printf("this is odd number");
    return 0;
}