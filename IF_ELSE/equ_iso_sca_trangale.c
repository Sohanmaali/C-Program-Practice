#include <stdio.h>

int main()
{
    //  trangale  Equilateral, Isosceles or Scalene
    int a, b, c, d;
    
    printf("Enter value of side1 side2 & side3 : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && a == c && c == b)
    {
        printf("The trangale is Equilateral");
    }
    else if (a == b || a == c || c == b)

    {
        printf("The trangale is isosceles");
    }
    else if (a != b && a != c && b != c)

    {
        printf("The trangale is scalene");
    }
    else
    {
        printf("Enter a valid value");
    }
    return 0;
}