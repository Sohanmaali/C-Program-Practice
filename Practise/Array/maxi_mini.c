#include <stdio.h>

int main()
{
    int n[100], m[100], num, i, j, maxi, mini;

    printf("Enter size of array : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &n[i]);
    }
    maxi = n[0];
    mini = n[0];
    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (maxi < n[j])
            {
                maxi = n[j];
            }
            if (mini > n[j])
            {
                mini = n[j];
            }
        }
    }
    printf("maxi = %d\nmini = %d", maxi, mini);
    return 0;
}