
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void push();
void pop();
void show();
int top = -1, arry[SIZE];
void main()
{
     int choice;

     while (1)
     {
          printf("\nPerform operations on the stack:");
          printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
          printf("\n\nEnter the choice: ");
          scanf("%d", &choice);

          switch (choice)
          {
          case 1:
               push();
               break;
          case 2:
               pop();
               break;
          case 3:
               show();
               break;
          case 4:
               exit(0);

          default:
               printf("\nInvalid choice!!");
          }
     }
}
void pop()
{
     int x;
     if (top == -1)
     {
          printf("OverFlow");
     }
     else
     {
          printf("Pop out Element is : %d ", arry[top]);
          top -= 1;
     }
}
void push()
{
     int x;
     if (top == SIZE - 1)
     {
          printf("OverFlow");
     }
     else
     {
          printf("Enter an element : ");
          scanf("%d", &x);
          top++;
          arry[top] = x;
     }
}
void show()
{
     if (top == -1)
     {
          printf("\nUnderflow!!");
     }
     else
     {
          printf("Your array is :\n");
          for (int i = 0; i <= top; i++)
          {
               printf("%d  ", arry[i]);
          }
     }
}