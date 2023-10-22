#include <stdio.h>
int main()
{
    int i, num, ans = 1;
    printf("Enter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        ans = num * i;
        printf("%d*%d = %d\n", num, i, ans);
    }
    return 0;
}