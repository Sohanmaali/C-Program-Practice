#include <stdio.h>
int factoriyal(int num);
int fact = 1;
void main()
{
     printf("%d", factoriyal(5));
}
int factoriyal(int num)
{
     if (num <= 2)
     {
          return num;
     }
     return factoriyal(num - 1) * num;
}