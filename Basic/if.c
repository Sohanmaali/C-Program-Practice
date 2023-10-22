#include <stdio.h>
int main()
{
    int age;
    printf(" Enter your age : ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you can vote!");
    }
    else if (age >= 10)
    {
        printf("you can not vote waet som time!");
    }
    else
    {
        printf("\n you can not vote!");
    }

    return 0;
}