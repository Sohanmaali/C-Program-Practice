#include <stdio.h>
int fectoriyal(int);
int main()
{
    int n;

    printf("Enter a num : ");
      
    scanf("%d", &n);

    printf("%d", fectoriyal(n));
    return 0;
}
int fectoriyal(int a)
{
    int ans = 1;
    if (a <= 2)
    {
        return a;
    }
    else
    {

        ans = a * fectoriyal(a - 1);
    }
    return ans;
}