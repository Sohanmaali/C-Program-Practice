// #include <stdio.h>
// void main()
// {
//      FILE *fp;
//      fp = fopen("file.txt", "w");               // opening file
//      fprintf(fp, "Hello file by fprintf...\n"); // writing data into file

//      fclose(fp); // closing file
// }
#include <stdio.h>
void main()
{
     FILE *fp;
     char buff[255]; // creating char array to store data of file
     fp = fopen("file.txt", "r");
     while (fscanf(fp, "%s", buff) != EOF)
     {
          printf("%s ", buff);
     }
     fclose(fp);
}