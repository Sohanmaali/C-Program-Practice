#include <stdio.h>

int main()
{
    int num, not500, not200, not100, not50, not20, not10;

    printf("Enter a num: ");
    scanf("%d", &num);

    if (num >= 500 )
    {

        not500 = num / 500;

        num = num % 500;
        printf("\n500 not = %d", not500);

        if (num >= 200 && num < 500)
        {
            not200 = num / 200;
            num = num % 200;
            printf("\n200 not = %d", not200);

            if (num >= 100)
            {
                not100 = num / 100;
                num = num % 100;
                printf("\n100 not = %d", not100);

                if (num >= 50)
                {
                    not50 = num / 50;
                    num = num % 50;
                    printf("\n50 not = %d", not50);

                    if (num >= 20)
                    {
                        not20 = num / 20;
                        num = num % 20;
                        printf("\n20 not = %d", not20);

                        if (num >= 10)
                        {
                            not10 = num / 10;
                            num = num % 10;
                            printf("\n10 not = %d", not10);
                        }
                    }
                }
            }
        }
    }

    return 0;
}