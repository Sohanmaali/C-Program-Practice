#include <stdio.h>
int main()
{
    int num1;
    printf("Enter A num : ");
    scanf("%d", &num1);
    if (num1 >= 0)
    {
        printf("Entered num is Positive : ");
    }
    else
    {
        printf("Entered num %d is Negative : ", num1);
    }
}