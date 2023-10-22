// Write a program in C to find the square of any number using the function

#include <stdio.h>
int square(int n)
{
    int sqr = n * n;
    return sqr;
}
int main()
{
    int num, sqr;
    printf("Enter a num : ");
    scanf("%d", &num);

    sqr = square(num); // function calling for sqr

    printf("square of %d = %d", num, sqr);
    return 0;
}