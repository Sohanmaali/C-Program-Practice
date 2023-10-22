#include <stdio.h>
int fectoriyal(int a) // make a function for get fectoriyal
{
    int fect = 1;
    for (int i = 1; i <= a; i++)
    {
        fect = fect * i;
    }
    return fect;
}
int main()
{

    int n, r, ncr, fectn, fectnr, fectr;

    printf("Input 1st number : ");
    scanf("%d", &n);

    printf("Input 2nd number : ");
    scanf("%d", &r);

    fectn = fectoriyal(n); // funcgtion call

    fectr = fectoriyal(r); // funcgtion call

    fectnr = fectoriyal(n - r); // funcgtion call

    ncr = fectn / (fectr * fectnr);
    printf("nCr = %d", ncr);
    return 0;
}