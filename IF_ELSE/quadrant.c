#include <stdio.h>
// Write a C# Sharp program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
int main()
{
    int x, y;
    printf("Enter Two coordinate X & Y : ");
    scanf("%d %d", &x, &y);
    if (x >= 0 && y > 0)
    {
        printf("(%d , %d) 1 coordinate", x, y);
    }
    else if (x < 0 && y >= 0)
    {
        printf("(%d , %d) 2 coordinate", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("(%d , %d) 3 coordinate", x, y);
    }
    else if (x >= 0 && y < 0)
    {
        printf("(%d , %d) 4 coordinate", x, y);
    }
    else if (x == 0 && y == 0)
        printf("(%d , %d) 0 coordinate", x, y);
    else
    {
        printf("ERROR");
    }
    return 0;
}
