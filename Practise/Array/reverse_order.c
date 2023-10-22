#include <stdio.h>

int main()
{
    int n[100], m[100], i, j, max;

    for (i = 0; i < 6; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &n[i]);
    }
    for (i = 5; i >= 0; i--)

        printf("%d ", n[i]);
    return 0;
}