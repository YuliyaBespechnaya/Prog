#include <stdio.h>
#include <math.h>
int main()
{
    int x, p, result;
    scanf("%d %d", &x, &p);
    if(p>0)
        {
            result = pow(x,p);
            printf("result = %d", result);
        }

    return 0;

}
