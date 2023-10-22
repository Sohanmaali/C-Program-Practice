#include <stdio.h>
int maze_path(int r, int c)
{
    int rway = 0, dway = 0, totalway = 0;
    if (r == 0 && c == 0)
       { return 1;}
    if (r == 1 && c == 1)
    {
        return 1;
    }
    else if (r == 1)
    {
        rway += maze_path(r, c - 1);
    }
    else if (c == 1)
    {
        dway += maze_path(r - 1, c);
    }
    if (r > 1 && c > 1)
    {
        rway += maze_path(r, c - 1);
        dway += maze_path(r - 1, c);
    }
    totalway = rway + dway;

    return (totalway);
}
int main()
{
    int row, col, ways;
    printf("Enter num of row : ");
    scanf("%d", &row);

    printf("Enter num of colum : ");
    scanf("%d", &col);

    ways = maze_path(row, col);

    printf("%d", ways);
    return 0;
}