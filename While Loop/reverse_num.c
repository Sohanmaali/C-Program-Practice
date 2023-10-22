#include <stdio.h>
int main()
{
    int num, rem;
    printf("Enter a num : ");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        printf("%d", rem);
        num /= 10;
    }
    return 0;
}