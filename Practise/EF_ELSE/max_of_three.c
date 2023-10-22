#include <stdio.h>
#define max_size 1000
int main()
{
    int n1, n2, n3;

    printf("Enter three n1,n2,n3 num : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("Greatest num %d", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("Greatest num %d", n2);
    }
    else
    {
        printf("Greatest num %d", n3);
    }
    return 0;
}