#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x, x_two, D = 0;
    scanf("%f %f %f", &a, &b, &c);
    D = pow(b,2) - (4*a*c);
    printf("D = %f \n", D);
    if(D>0)
    {
        x = (-b + sqrt(D))/(2*a);
        x_two = (((-b) - sqrt(D))/(2*a));
        printf("x = %f, x_two = %f", x, x_two);
    }
    else
    if(D == 0)
    {
        x = -b/(2*a);
        printf("x = %f", x);
    }
    else
    return 0;
}
