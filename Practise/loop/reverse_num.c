#include <stdio.h>
#define max_size 1000
int main()
{
    int n1, rev, i, ans = 0, temp;
    printf("Enter num : ");
    scanf("%d", &n1);
    temp = n1;
    while (n1 != 0)
    {
        rev = n1 % 10;
        ans = ans * 10 + rev;
        n1 = n1 / 10;
    }
    printf("%d\n", ans);

    return 0;
}