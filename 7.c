#include <stdio.h>
int main()
{
    float Celsius, Kelvin, Fahrenheit;
    scanf("%f", &Celsius);
    Kelvin = 273.15 + Celsius;
    Fahrenheit =  2*Celsius - 0.2*Celsius + 32;
    printf("Kelvin = %f, Fahrenheit = %f", Kelvin, Fahrenheit);
    return 0;
}
