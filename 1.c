#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a > 0)
    a = a * 2;
    else {
            if(a < 0)
            a = a - 3;
            else
            a = 10;
	      }
    printf("a=%d", a);
    return 0;
}
