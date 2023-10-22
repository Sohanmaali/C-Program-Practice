

// Write a C program to find factorial of any number using recursion.

#include <stdio.h>
int fectoriyal(int);

int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);

    printf("Fectoriyal of num = %d", fectoriyal(num)); // function calling and print the value of funvtion
    return 0;
}
int fectoriyal(int n)
{
  //  printf("%d ", n);
    if (n <= 1)
        return n;
    int fect = n * fectoriyal(n - 1);
    return fect;
}
