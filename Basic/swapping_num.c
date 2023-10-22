#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two num : ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("Aftwer swapping \nA = %d\nB = %d", a, b);
    return 0;
}