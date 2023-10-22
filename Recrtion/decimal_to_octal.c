

/*-----------------  C Program to convert number decimal to  octal ------------------------------------*/

#include <stdio.h>
#include <math.h>
int convert(int n)
{
    int i = 0;
    if (n == 0)
    {
        return 0;
    }

    // i *= 10;
    return ((n % 8) + 10 * (convert(n / 8))); // calling the function convert itself recursively
}

/*-----------------  main function start ------------------------------------*/

int main()
{
    int num;
    printf("Enter a  num : ");
    scanf("%d", &num);

    printf("%d", convert(num)); // calling the function

    return 0;
}