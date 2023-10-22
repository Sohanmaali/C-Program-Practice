// Program to compute the area of the various geometrical shape.
#include <stdio.h>
int main()
{
    int choice;
    double area, r, l, w, b, h;
    printf("Input 1 for area of circle \nInput 2 for area of rectangle \nInput 3 for area of triangle\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {

        printf("Enter Radius of circle : ");
        scanf("%lf", &r);
        area = 3.14 * r * r; // area of circle pai*radius^2
        printf("area of circle %lf", area);
    }
    else if (choice == 2)
    {

        printf("Enter lanth of rectangle : ");
        scanf("%lf", &l);
        printf("Enter width of rectangle : ");
        scanf("%lf", &w);
        area = l * w; // area of rectangle lanth * width
        printf("area of rectangle %lf", area);
    }
    else if (choice == 3)
    {

        printf("Enter base of triangle : ");
        scanf("%lf", &b);
        printf("Enter hight of triangle : ");
        scanf("%lf", &h);
        area = (1 / 2) * (b * h); // area of triangle (1/2)* base*hight
        printf("area of triangle %lf", area);
    }
    else
    {
        printf("invalide input");
    }
    return 0;
}