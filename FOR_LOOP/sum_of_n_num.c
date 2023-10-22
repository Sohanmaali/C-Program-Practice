#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d\t", i);
        sum += i;
    }
    printf("\nsum of %d numbers %d", num,sum);
    return 0;
}