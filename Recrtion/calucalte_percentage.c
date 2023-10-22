/*---------------------C program to read a value and print its corresponding percentage from 1% to 100% using recursion--------------*/

#include <stdio.h>

float parcentage(int n, int i)
{
    float ans = 0;
    //  int i;
    if (i == 1)
        return i;

    // ans = ((n * (i - 1)) / 100);
    ans = (n * parcentage(n, i - 1) / 100);
    printf("%.2f\n", ans);

    // else
    // {

    return ans;
    // }
}
int main()
{
    int num, i;
    printf("Enter a num : ");
    scanf("%d", &num);

    parcentage(num, 5);
    // printf("%.2f", parcentage(num, 5));

    //  printf("%.2f", pr);
    return 0;
}