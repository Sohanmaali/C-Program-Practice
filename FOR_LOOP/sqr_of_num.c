// Write a program in C# Sharp to display the n terms of square natural number and their sum.

#include <stdio.h>
int main()
{
    int sqr, i, turm,sum=1;
    printf("Enter num : ");
    scanf("%d,", &turm);
    
    for (i = 1; i <= turm; i++)
    {
        sqr = i * i;
        printf("%d ", sqr);
        sum+=sqr;
    }
    printf("\nThe Sum of Square Natural Number upto 5 terms = %d\n",sum);

    return 0;
}
