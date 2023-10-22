#include <stdio.h>
int main()
{
    int id, unite;
    char name[20];
    double ans;
    printf("Enter name of customer : ");
    scanf("%s", &name);

    printf("Enter id Number : ");
    scanf("%d", &id);

    printf("Enter unite Number :");
    scanf("%d", &unite);

    printf("customer name is %s\n", name);
    printf("customer is %d\n", id);
    printf("customer unite is %d\n", unite);
    if (unite < 200)
    {
        ans = unite * 1.20;
        printf("Amount Charges @Rs. 1.20 per unit : %d", ans);
    }
    else if (unite >= 200 && unite < 400)
    {
        ans = unite * 1.50;
        printf("Amount Charges @Rs. 1.50 per unit : %d", ans);
    }
    else if (unite <= 400 && unite < 600)
    {
        ans = unite * 1.80;
        printf("Amount Charges @Rs. 1.80 per unit : %d", ans);
    }
    else if (unite >= 600)
    {
        ans = unite * 2.0;
        printf("Amount Charges @Rs. 2.1 per unit : %d", ans);
    }
    return 0;
}