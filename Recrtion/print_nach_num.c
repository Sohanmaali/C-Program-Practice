

// Write a C program to print all natural numbers between 1 to n using recursion.
#include <stdio.h>
int printnum(int);
int main()
{
    int num;
    printf("Ente ending num : ");
    scanf("%d", &num);

    printnum(num);
    return 0;
}
int printnum(int n1)
{
    if (n1 <= 0)
        return 1;
    // printf("%d ", n1);
    printnum(n1 - 1);
    printf("%d ", n1);
    return 0;
}