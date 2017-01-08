#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, x, ran_number;
    #define N 3
    srand(time(NULL));
    ran_number = rand();
    while(i!=N)
    {
        scanf("%d", &x);
        if(x == ran_number)
            printf("the correct number %d", x);
        else
            i++;
    }
    printf("a random number %d", ran_number);
    return 0;
}
