#include <stdio.h>
int main()
{
    int num, i, rem, sum = 0, rev = 0, temp;
    printf("Enter a num : ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num /= 10;
      //  printf("%d/10=%d\n", num,num);
    }
    if (sum == temp)
    {
        printf("palindrome");
    }
    else
    {
        printf("not pali");
    }
    // printf("sum of given nums digit = %d", sum);
    return 0;
}