#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int isOperand(char ch)
{
     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

void push(char **stack, int *top, char element)
{
     (*top)++;
     (*stack)[*top] = element;
}

char pop(char **stack, int *top)
{
     char element = (*stack)[*top];
     (*top)--;
     return element;
}

char *prefixToPostfix(char *prefix)
{
     int len = strlen(prefix);
     char *stack = (char *)malloc(MAX_SIZE * sizeof(char));
     int top = -1;

     for (int i = len - 1; i >= 0; i--)
     {
          if (isOperand(prefix[i]))
          {
               char operand[2] = {prefix[i], '\0'};
               push(&stack, &top, operand[0]);
          }
          else
          {
               char operand1 = pop(&stack, &top);
               char operand2 = pop(&stack, &top);

               char result[MAX_SIZE];
               result[0] = operand1;
               result[1] = operand2;
               result[2] = prefix[i];
               result[3] = '\0';

               push(&stack, &top, result[0]);
               push(&stack, &top, result[1]);
               push(&stack, &top, result[2]);
          }
     }

     char *postfix = (char *)malloc((top + 2) * sizeof(char));
     for (int i = 0; i <= top; i++)
     {
          postfix[i] = stack[i];
     }
     postfix[top + 1] = '\0';

     free(stack);

     return postfix;
}

int main()
{
     char prefix[] = "*-a/bc-/ade";
     char *postfix = prefixToPostfix(prefix);

     printf("Prefix expression: %s\n", prefix);
     printf("Postfix expression: %s\n", postfix);

     free(postfix);

     return 0;
}