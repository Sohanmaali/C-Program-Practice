#include <stdio.h>

int swp(int a[])
{

    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    return 0;
}
int main()
{
    int arry[2] = {5, 8};

    printf("%d %d\n", arry[0], arry[1]);

    swp(arry);

    printf("%d %d\n", arry[0], arry[1]);
    return 0;
}