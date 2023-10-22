/*----------------- print reverse array using recursion ------------------------------------*/

#include <stdio.h>
#define max_size 1000

/*----------------- function perameeter ------------------------------------*/
void reverse(int ary[], int i, int l)
{

    if (i == l)
    {
        return;
    }
 
    reverse(ary, i + 1, l); // function call itsheelf recursivliy
    printf("%d ", ary[i]);  // print reverse order of array
}
int main()
{
    int arry[max_size];
    int size, i;

    printf("enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of Array : ", i + 1);
        scanf("%d", &arry[i]);
    }

    reverse(arry, 0, size);
    return 0;
}