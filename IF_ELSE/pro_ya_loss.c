#include <stdio.h>

int main()
{
    int pur, shall, ans;
    printf("Enter Purchase amount : ");
    scanf("%d", &pur);
    printf("Enter shall amount : ");
    scanf("%d", &shall);
    if (shall > pur)
    {
        ans = shall - pur;
        printf("Profit = %d", ans);
    }
    else if (pur > shall)
    {
        ans = pur - shall;
        printf("loss = %d", ans);
    }
    else if (pur == shall)
    {
        printf("no loss & no profit");
    }
    else
    {
        printf("Enter a valid amount");
    }
    return 0;
}