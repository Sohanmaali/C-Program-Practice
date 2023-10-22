#include <stdio.h>
// check whether a given number is even or odd.
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is even num", num);
    }
    else
    {
        printf("%d is odd num", num);
    }

    return 0;
}
