#include <stdio.h>

int main()
{
    int choice, ch1, ch2;
    printf("1.color\n2. pan\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("1.red\n 2.blue\n 3.black\n");
        scanf("%d", &ch1);
        switch (ch1)
        {
        case 1:
            printf("red");
            break;
        case 2:
            printf("blue");
            break;
        case 3:
            printf("black");
            break;
        default:
            printf("invalid choice");
        }
        break;
    }
    case 2:
    {
        printf("1. Blue pan\n 2. black pan\n 3. red pan \n");
        scanf("%d", &ch2);
        switch (ch2)
        {
        case 1:
            printf("Blue pan");
            break;

        case 2:
            printf("black pan");
            break;
        case 3:
            printf("red pan");
            break;
        default:
            printf("invalid choice");
        }
        break;
    }
    }
    return 0;
}