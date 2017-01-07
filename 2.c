#include <stdio.h>
#include <math.h>
int main()
{
   int i, n, bin_num, dec_num = 0;
   scanf("%d", &n);

   for(i = n - 1; i > -1; i--)
   {
       scanf("%d\n", &bin_num);
       if(bin_num == 1)
       dec_num+= pow(2,i);
   }

   printf("dec_num = %d", dec_num);
   return 0;
}
