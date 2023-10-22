

// Write a C program to find diameter, circumference and area of circle using functions.

#include <stdio.h>
float diameter(void); // function decleretion
float circum(void);   // function decleretion
float area(void);     // function decleretion
int main()
{
    int num;
    float ans;
    printf("Enter a num : ");
    scanf("%d", &num);
    if (num == 1)
    {
        ans = diameter(); // function calling
        printf("diameters = %f", ans);
    }
    else if (num == 2)
    {
        ans = circum(); // function calling
        printf("circumference = %f", ans);
    }
    else if (num == 3)
    {
        ans = area(); // function calling
        printf("area of circle = %f", ans);
    }
    else
    {
        printf("Enter a valide inpt");
    }
    return 0;
}
float diameter(void) // functio peramiters
{

    float r, d = 0;
    printf("Enter redios of circel : ");
    scanf("%f", &r);
    d = 2 * r;
    return d;
}
float circum(void) // functio peramiters
{
    float c = 0, r;
    printf("Enter redios of circel : ");
    scanf("%f", &r);
    c = 2 * 3.14 * r;
    return c;
}
float area(void) // functio peramiters
{

    float a, r;
    printf("Enter redios of circel : ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    return a;
}