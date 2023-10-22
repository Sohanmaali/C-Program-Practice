#include <stdio.h>
int main()
{
    int second, hrs, mint;
    printf("Enter a second : ");
    scanf("%d", &second);

    hrs = second / 3600;
    second %= 3600;

    mint = second / 60;
    second %= 60;
    printf("Hours = %d\n", hrs);

    printf("Ming = %d\n", mint);

    printf("secont = %d", second);

    return 0;
}