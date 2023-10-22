#include <stdio.h>
int main()
{
    int i, fect = 1, num;
    printf("Enter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fect *= i;
    }
    printf("Fectoriyal of %d is = %d", num, fect);
    return 0;
}