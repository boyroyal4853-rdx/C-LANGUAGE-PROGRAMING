#include <stdio.h>
int main()
{
    int arr[10], i, n;

    printf("enter your num  of element in arr: ");
    scanf("%d", &n);

    printf("enter your element :");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {

        printf("%d\n ", arr[i]);
    }
    return 0;
}