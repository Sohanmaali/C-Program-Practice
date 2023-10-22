// Write a program in C# Sharp to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. Go to the editor

#include <stdio.h>
int main()
{
    int i, term, sum = 0, num = 0;
    printf("Enter term : ");
    scanf("%d", &term);
    printf("serise : ");
    for (i = 1; i <= term; i++)
    {
        num = num * 10 + 9;
        sum += num;
        printf("%d ", num);
    }
    printf("\nSum of %d turm : %d", term, sum);
    return 0;
}