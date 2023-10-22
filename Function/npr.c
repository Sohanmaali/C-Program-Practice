#include <stdio.h>
int fectoriyal(int a) // make a function for get fectoriyal
{
    int fect = 1;
    for (int i = 1; i <= a; i++)
    {
        fect *= i;
    }
    return fect;
}
int main()
{
    int n, r, nPr, fectn, fectnr;
    printf("Enter value of n : ");
    scanf("%d", &n);

    printf("Enter value of r : ");
    scanf("%d", &r);
    fectn = fectoriyal(n); // funcgtion call

    fectnr = fectoriyal(n - r); // funcgtion call
    nPr = fectn / fectnr;

    printf("nPr = %d", nPr);

    return 0;
}