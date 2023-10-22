#include <stdio.h>

int main()
{

    int n1, n2;
    printf("Enter two num  : ");
    scanf("%d %d", &n1, &n2);
    n1 = n1 + n2;
    n2 = n1 - n2;               
    n1 = n1 - n2;
    printf("A = %d\nB = %d", n1, n2);
    return 0;
}