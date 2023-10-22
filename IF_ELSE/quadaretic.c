#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c,d;
    float x1,x2,y1,y2;
    printf("Enter three angel : ");
    scanf("%d %d %d",&a,&b,&c);
 d = b*b-4*a*c;
 if(d>0)
{
    x1 = (-b + (sqrt(d)) / (2 * a));
    x2 = (-b - (sqrt(d)) / (2 * a));
    printf("x1 = %lf\n",x1);
     printf("x2 = %lf\n",x2);
}
else if(d==0)
{
    x1=(-b/(2*a));
    x2 = x1;
     printf("x1 = %.2lf\n",x1);
     printf("x2 = %.2lf\n",x2);
}
else
{
    y1=sqrt(d)/2*a;
    printf("y1 = %.2lf",y1);

}
    return 0;
    
}