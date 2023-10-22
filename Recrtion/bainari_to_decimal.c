
/*----------------- write a program to convert bainari to decimal ------------------------------------*/
#include <stdio.h>
#include <math.h>

/*----------------- function for convert bainari to decimal ------------------------------------*/

int convert(int n)
{
    int i = 0;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        i++;
        return ((n % 10) + pow(2, i) * (convert(n / 10))); // function colling recrtivly
    }
}
/*----------------- main function start ------------------------------------*/

int main()
{
    int num;
    printf("Enter a  num : ");
    scanf("%d", &num);

    printf("%d", convert(num)); // function call and print the value

    return 0;
}