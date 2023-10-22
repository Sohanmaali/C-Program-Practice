

// Ask for two user input numbers, pass to a function and then display highest number.

#include <stdio.h>

int max_mini(int, int);

int main()
{
    int num1, num2;
    printf("Entr two number : ");
    scanf("%d %d", &num1, &num2);
    if (max_mini(num1, num2) == 1)
    {
        printf("Largest num is %d", num1);
    }
    else
    {
        printf("Largest num is %d", num2);
    }

    return 0;
}
int max_mini(int n1, int n2)
{
    int count = 0;
    if (n1 > n2)
    {
        count++;
    }

    return count;
}