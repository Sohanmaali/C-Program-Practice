#include <stdio.h>
int main()
{
    int i, rev, num, ans = 0;
    printf("Enter a num : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rev = num % 10;
        ans = ans * 10 + rev;
        num /= 10;
    }
    printf("%d", ans);

    return 0;
}