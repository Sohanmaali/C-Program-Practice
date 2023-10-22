#include <stdio.h>
int prime_num(int); // function decleretion
int main()
{
    int num1, num2, i;
    printf("Enter first num : ");
    scanf("%d", &num1);
    printf("Enter second num : ");
    scanf("%d", &num2);
    for (i = num1; i <= num2; i++)
    {
        if (prime_num(i) == 2) // function call type with argument and with return value

        {
            printf("%d, ", i);
        }
    }

    return 0;
}
int prime_num(int n1)
{
    int i, sum = 0, count = 0; // functio peramiters
    for (i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            count++;
        }
    }
    return count;
}