// harmonic series

// 1/5 + 2/5 + 3/5 + 4/5 + 5/5 +

#include <stdio.h>
int main()
{
    int i, num;
    double sum;
    printf("Enter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum += 1 / (float)i;
        printf("%d/%d + ", i, num);
    }
    printf("\n%lf", sum);
    return 0;
}