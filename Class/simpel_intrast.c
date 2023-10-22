#include <stdio.h>
int main()
{
    int amount, rate, sum, time, intra = 0;

    printf("Enter a amount : ");
    scanf("%d", &amount);

    printf("Enter rate  ");
    scanf("%d", &rate);

    printf("Enter time : ");
    scanf("%d", &time);
    intra = amount * rate * time / 100;

    printf("intrast of given amount = %d", intra);
    return 0;
}