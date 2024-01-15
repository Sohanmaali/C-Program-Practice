#include <stdio.h>
void main()
{
     FILE *fptr;
     FILE *red;
     int id;
     char name[30];
     float salary;
     fptr = fopen("emp.txt", "w+"); /*  open for writing */
     red = fopen("emp.txt", "r");
     if (fptr == NULL)
     {
          printf("File does not exists \n");
          return;
     }
     printf("Enter the id\n");
     scanf("%d", &id);
     fprintf(fptr, "Id = %d\n", id);
     printf("Enter the name \n");
     scanf("%s", name);
     fprintf(fptr, "Name = %s\n", name);
     printf("Enter the salary\n");
     scanf("%f", &salary);
     fprintf(fptr, "Salary = %.2f\n", salary);
     char buff[255];
     while (fscanf(red, "%s", buff) != EOF)
     {
          printf("%s ", buff);
     }
     fclose(red);
     fclose(fptr);
}