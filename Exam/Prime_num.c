
#include <stdio.h>
void main()
{
     int start, end;

     printf("Enter Starting End Num : ");
     scanf("%d %d", &start, &end);
     // printf("%d      %d\n", start, end);
     printf("%d  ,    %d\n", start, end);
     for (int i = start; i <= end; i++)
     {
          int count = 0;
          for (int j = 2; j <= i / 2; j++)
          {
               if (i % j == 0)
               {
                    count++;
               }
          }
          if (count == 0)
          {
               printf("%d ", i);
          }
     }
}