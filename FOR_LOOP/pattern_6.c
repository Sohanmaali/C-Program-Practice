/*
1
12
123
1234
12345
*/


#include <stdio.h>
int main()
{
    int i, j, k, num;
    printf("Enter num of row : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}