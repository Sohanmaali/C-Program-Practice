#include <stdio.h>
int main()
{
    int i;
    i = 1;
    while (i <= 10)
    {
        if (i % 2 == 0)
        {

            printf("%d is even\n", i);
        }
        else
        {
            printf("%d is odd\n", i);
        }
        i++;
    }
    return 0;
}