#include <stdio.h>
int main()
{
     int i, counter = 0;
     float R[5], arith_mean = 0;
     for(i=0; i<5; i++)
        {
            printf("R[%d] = ", i);
            scanf("%f", &R[i]);
        }

     for(i=0;i<5;i++)
            {
                if(R[i]>0)
                {
                    counter++;
                    arith_mean+=R[i];
                }
            }
     getchar();
     getchar();
     arith_mean = arith_mean/counter;
     printf("counter = %d, arith_mean = %f", counter, arith_mean);
     return 0;
}
