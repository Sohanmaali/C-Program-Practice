/*-----------------------write a C program to find product of 2 numbers without using recursion.------------------*/

#include <stdio.h>

int product(int n, int m)
{
    int pro = 0, i;
    for (i = 1; i <= m; i++)
    {
        pro += n;
    }

    return pro;
}
/*-----------------------main funcrion start.------------------*/

int main()
{
    int num1, num2;

    printf("ENter tweo num : ");
    scanf("%d %d", &num1, &num2);

    printf("%d", product(num1, num2));
    
    return 0;
}