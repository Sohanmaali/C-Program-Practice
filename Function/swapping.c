

// Write a program in C to swap two numbers using function.

#include <stdio.h>
void swap(int *a, int *b) // make a finction for swap num
{
    /*
    int temp;        //using third vribal
     temp = *a;
     *a = *b;
     *b = temp;
     */
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    return;
}
int main()
{
    int num1, num2;
    printf("Enter first num : ");
    scanf("%d", &num1);

    printf("Enter second num : ");
    scanf("%d", &num2);

    swap(&num1, &num2); // functio calling
    printf("Aftor awaping \nnum1 = %d\nnum2 = %d", num1, num2);
    return 0;
}