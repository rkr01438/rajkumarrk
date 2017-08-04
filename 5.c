#include <stdio.h>
int main()
{
    double a,b,c;
 
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
 
    if (a>=b)
    {
        if(a>=c)
            printf("%.2lf is the largest number.", a);
        else
            printf("%.2lf is the largest number.", c);
    }
    else
    {
        if(b>=c)
            printf("%.2lf is the largest number.", b);
        else
            printf("%.2lf is the largest number.",c);
    }
 
    return 0;
}
