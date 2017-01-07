#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, x, N = 3, ran_number;
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
