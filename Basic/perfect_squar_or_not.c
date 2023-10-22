#include <stdio.h>
int main()
{
    int n, a;
    printf("Enter A num : ");
    scanf("%d", &n);
    printf("You enterd %d\n", n);
    a = sqrt(n);
    if (n - (a * a) == 0)
    {
        printf("%d is perfect squar ",n);
    }
    else
    {
        printf("%d is not perfect squar ", n);
    }
}