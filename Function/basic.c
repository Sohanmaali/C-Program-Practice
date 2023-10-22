//pascal trengale


#include <stdio.h>
/*int fectoriyal(int x)
{
    int fect=1;

    for(int i=1; i<=x; i++)
        fect=fect*i;
    return fect;
}
int ans(int n,int r)
{
int ncr= fectoriyal(n)/(fectoriyal(r)*fectoriyal(n-r));
return ncr;
}*/
int main()
{

    int i, j, k, n, r, ncr, fectn, fectnr, fectr;

    printf("Input 1st number : ");
    scanf("%d", &n);

    // printf("Input 2nd number : ");
    // scanf("%d",&r);

    for (i = 0; i < n; i++)
    {
        for (k = n; k > i; k--)
        {
            printf(" ");
        }
        int first = 1;

        for (j = 0; j <= i; j++)
        {
            printf("%d ", first);
            first = first * ((i - j) / (j + 1));
        }
        printf("\n");
    }

    return 0;
}