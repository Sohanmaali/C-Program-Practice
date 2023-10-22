#include <stdio.h>

int main()
{
    int n[100], m[100], i, sum = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 6; i++)
        sum += n[i];

    printf("%d ", sum);
    return 0;
}