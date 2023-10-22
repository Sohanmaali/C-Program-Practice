#include <stdio.h>

int fibbo(int);

int main()
{
    int n;

    printf("Enter a num : ");
    scanf("%d", &n);
    for (int i = 1; i < 10; i++)
    {

        printf("%d  ", fibbo(i));
    }
    return 0;
}
int fibbo(int a)
{
    int ans1 = 0, ans2 = 0, ans3 = 0;
    if (a == 1 || a == 2)
    {
        return 1;
    }
    // else
    // {
    //     ans1 = fibbo(a - 1);
    //     ans2 = fibbo(a - 2);
    // }
    // ans3 = ans1 + ans2;
    return fibbo(a - 1) + fibbo(a - 2);
}