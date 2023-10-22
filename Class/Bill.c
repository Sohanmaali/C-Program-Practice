#include <stdio.h>

int main()
{
    int pen, pencil, coler, botal, total = 0, temp = 0;
    int penp, pencilp, colerp, botalp, quantity = 0;
    printf("Enter Quantity of pen, pencil, coler, botal : \n");
    scanf("%d %d %d %d", &pen, &pencil, &coler, &botal);

    printf("Enter price of pen, pencil, coler, botal : \n");
    scanf("%d %d %d %d", &penp, &pencilp, &colerp, &botalp);

    printf("------------------------------------------------------------\n");

    printf("                   Bagwan online kendra\n");
    printf("------------------------------------------------------------\n");

    printf("Costmer Name ABC                          Date- 03/03/2023\n");

    printf("------------------------------------------------------------\n");

    printf("item\t   |   quantity      |   price\t    | \t total\n");

    printf("------------------------------------------------------------\n");

    total = pen * penp;
    temp += total;
    quantity += pen;
    printf("pen        |      %d\t     |      %d       |     %d\n", pen, penp, total);

    printf("------------------------------------------------------------\n");

    total = pencil * pencilp;
    temp += total;
    quantity += pencil;
    printf("pencil     |      %d\t     |      %d       |     %d\n", pencil, pencilp, total);

    printf("------------------------------------------------------------\n");

    total = coler * colerp;
    temp += total;
    quantity += coler;
    printf("coler      |      %d\t     |      %d       |     %d\n", coler, colerp, total);

    printf("------------------------------------------------------------\n");

    total = botal * botalp;
    temp += total;
    quantity += botal;
    printf("botal      |      %d\t     |      %d       |     %d\n", botal, botalp, total);

    printf("------------------------------------------------------------\n");

    printf("Total             %d                             %d\n", quantity, temp);

    printf("------------------------------------------------------------\n");

    printf("                                                     sohan\n");

    printf("------------------------------------------------------------\n");

    return 0;
}