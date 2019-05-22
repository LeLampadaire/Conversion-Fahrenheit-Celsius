#include <stdio.h>
#include <stdlib.h>

int main(){
    float TemperatureCelsius, TemperatureFahrenheit;

    printf("Encodez la temperature en Celsius : ");
    scanf("%f",&TemperatureCelsius);

    TemperatureFahrenheit = TemperatureCelsius * 1.8 + 32;
    printf("\n-> La temperature en Fahrenheit vaut : %.2f\n", TemperatureFahrenheit);

    return 0;
}
