#include <stdio.h>
int main()
{
    int n1, n2, sum;

    printf("enter your n1");
    scanf("%d", &n1);

    printf("enter your n2");
    scanf("%d", &n2);

    sum = n1 + n2;

    printf("your sum is :%d\n", sum);

    // substraction,multiplication,division,modules
    int sub = n1 - n2;
    int mul = n1 * n2;
    int div = n1 / n2;
    int mod = n1 % n2;

    printf("%d\n%d\n%d\n%d\n", sub, mul, div, mod);

    return 0;
}
