// Write a program in C# Sharp to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

#include <stdio.h>
int main()
{
    int i, ans, sum = 0, turm, n = 0;
    printf("Enter turm : ");
    scanf("%d", &turm);
    for (i = 1; i <= turm; i++)
    {
        n = n * 10 + 1;
        printf("%d ", n);
        sum = sum + n;
    }
    printf("\nThe Sum is %d", sum);
    return 0;
}