#include <stdio.h>
int main()
{
    int i, num, qb;
    printf("enter numbers for numbers 1 to  n : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        qb = i * i * i;
        printf("Enterd Number is : %d and cube of %d is : %d\n", i, i, qb);
    }
    return 0;
}