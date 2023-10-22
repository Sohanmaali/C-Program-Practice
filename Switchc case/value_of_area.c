// Program to compute the area of the various geometrical shape.
#include <stdio.h>
int main()
{
    int choice;
    double a, r, l, w, b, h;
    printf("Input 1 for area of circle \nInput 2 for area of rectangle \nInput 3 for area of triangle\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter Radius of circle : ");
        scanf("%lf", &r);
        a = 3.14 * r * r;
        printf("area of circle %lf", a);
        break;
    case 2:
        printf("Enter lanth of rectangle : ");
        scanf("%lf", &l);
        printf("Enter width of rectangle : ");
        scanf("%lf", &w);
        a = l * w;
        printf("area of circle %lf", a);
        break;

    case 3:
        printf("Enter base of triangle : ");
        scanf("%lf", &b);
        printf("Enter  base of triangle : ");
        scanf("%lf", &h);
        a = (1 / 2) * (b * h);
        printf("area of circle %lf", a);
        break;
    default:
        printf("invalide input");
        break;
    }
    return 0;
}