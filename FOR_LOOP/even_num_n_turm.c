#include <stdio.h>
int main()
{
    int i, turm, even, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &turm);
    for (i = 1; i <= turm; i++)
    {
        even = 2 * i;
        printf("%d\t", even);
        sum += even;
    }
    printf("\nsum of %d num is %d", turm, sum);

    return 0;
}