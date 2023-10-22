#include <stdio.h>
int main()
{
    int i, fect, num;
    printf("Enter a num : ");
    scanf("%d", &num);
    i = 1;
    while (i <= num)
    {
        fect = num % i;
        if (fect == 0)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}