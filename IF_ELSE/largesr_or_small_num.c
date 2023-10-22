#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two num : ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("Largest num is %d\n", num1);
        printf("Small num is %d\n", num2);
    }
    else if (num2 > num1)
    {
        printf("Largest num is %d\n", num2);
        printf("Small num is %d\n", num1);
    }

    else
    {
        printf("same num");
    }
    return 0;
}