#include <stdio.h>
int main()
{
    int num1, num2, ans;
    char op;
    printf("chose A operator\n1.'+'\n2.'-'\n3.'*'\n4.'/'\n");
    scanf("%c", &op);

    printf("Enter two num : ");
    scanf("%d %d", &num1, &num2);
    switch (op)
    {
    case '1':
        ans = num1 + num2;
        printf("Your ans is = %d ", ans);
        break;
    case '2':
        ans = num1 - num2;
        printf("Your ans is = %d ", ans);
        break;
    case '3':
        ans = num1 * num2;
        printf("Your ans is = %d ", ans);
        break;
    case '4':
        ans = num1 / num2;
        printf("Your ans is = %d ", ans);
        break;
    default:
        break;
    }
    return 0;
}