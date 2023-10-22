#include <stdio.h>
int fectoriyal(int a)
{
    int fect = 1;
    for (int i = 1; i <= a; i++)
    {
        fect *= i;
    }
    return fect;
}

/*----------------- main function start ------------------------------------*/
int main()
{
    int num, fect;

    printf("Enter num : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fect = fectoriyal(i);
        printf("Fectoriyal of %d = %d\n", i, fect);
    }

    return 0;
}