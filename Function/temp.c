#include <stdio.h>

int main()
{
    int re;    // Radius of circle
    float ans; // beacuse we get ans flat   ans = 3.14(pai = 3.14)*r/r

    printf("Enter a num : ");

    scanf("%d", &re);
    ans = 3.14 * re * re; // fourmula  A = pai*r*r

    printf("area of carcel is %.2f ", ans);

    return 0;
}