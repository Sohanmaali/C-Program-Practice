#include <stdio.h>
int gcd(int, int);
int main()
{
    int num1, num2;
    printf("Enter two num : ");
    scanf("%d %d", &num1, &num2);

    int ans = gcd(num1, num2);

    printf("GCD = %d", ans);

    return 0;
}
int gcd(int n1, int n2)
{
    int gc;
    if (n1 == n2)
        return n1;
    else if (n1 > n2)
    {
        gc = gcd(n1 - n2, n2); // GCD using recrtion
                               // return gc;
    }
    else
    {
        gc = gcd(n1, n2 - n1);
    }
    return gc;
}
// if (n1 == n2)
//     return n1;
// while (n1 != n2)
// {
//     if (n1 > n2)
//     {

//         n1 = n1 - n2;       //GCD using while loop
//     }
//     else
//     {
//         n2 -= n1;
//     }
// }

// return n1;
// }