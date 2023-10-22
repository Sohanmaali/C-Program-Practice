#include <stdio.h>
int main()
{
    int i, num, ans;
    printf("Enter last num :");
    scanf("%d", &num);
    i = 1;
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            ans = i * i;
            printf("-%d ", ans);
        }
        else
        {
            ans = i * i;
            printf("%d ", ans);
        }
        i++;
    }
    return 0;
}