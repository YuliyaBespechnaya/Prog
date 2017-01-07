#include <stdio.h>
int main()
{
    int n_sec, min, hour;
    scanf("%d", &n_sec);
    min = n_sec/60;
    hour = n_sec/3600;
    printf("min = %d, hour = %d", min, hour);
    return 0;
}
