/*Write a program in C# Sharp to display the first 10 natural numbers. Go to the editor
Expected Output :
1 2 3 4 5 6 7 8 9 10*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter A num : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}