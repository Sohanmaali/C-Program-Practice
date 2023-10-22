#include <stdio.h>
int main()
{
    int a;
    printf("Enter any num : ");
    scanf("%d", &a);

   switch(a>0)
	{
		case 1:
		{
			printf("positive num ");
			break;
		}
		case 0:
		{
			switch(a<0)
			{
				case 1:
				printf("Negetive num ");
				break;
				case 0:
				printf("ZERO");
			}
		}
    }
    return 0;
}